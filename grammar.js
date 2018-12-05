// Helpful links:
// https://clojure.org/guides/learn/syntax
// https://clojure.org/reference/reader
// https://clojure.org/guides/weird_characters
// https://github.com/venantius/glow/blob/master/resources/parsers/Clojure.g4
// https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js
// https://github.com/atom/language-clojure/blob/master/grammars/clojure.cson
// http://cljs.github.io/api/syntax/
// https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef
// https://github.com/Tavistock/tree-sitter-clojure

const DIGITS = token(sep1(/[0-9]+/, /_+/))

module.exports = grammar({
  name: 'clojure',

  extras: $ => [
    /(\s|,)/ // ignore whitespace and commas
  ],

  rules: {
    program: $ => repeat($._anything),

    _anything: $ => choice(
      $._literals,
      $.symbol,
      $.interop,
      $._functions,
      $.quote,
      $.comment,
      $.deref,

      $.syntax_quote,
      $.var_quote,
      // TODO: how to restrict these to only work inside syntax quote?
      // https://github.com/oakmac/tree-sitter-clojure/issues/12
      $.unquote,
      $.unquote_splice,
      $.gensym,

      // TODO: how to restrict this to only work inside function shorthand?
      // https://github.com/oakmac/tree-sitter-clojure/issues/11
      $.shorthand_function_arg,
    ),

    _literals: $ => choice(
      $.nil,
      $.boolean,
      $.number,
      $.symbolic_value,
      $.character,
      $.string,
      $.regex,
      $.keyword,
      $._collection_literals
    ),

    _collection_literals: $ => seq(optional($.metadata), choice(
      $.list,
      $.vector,
      $.hash_map,
      $.set
    )),

    // -------------------------------------------------------------------------
    // nil + booleans
    // -------------------------------------------------------------------------

    nil: $ => 'nil',
    boolean: $ => choice($.true, $.false),
    true: $ => 'true',
    false: $ => 'false',

    // -------------------------------------------------------------------------
    // Numbers
    // -------------------------------------------------------------------------

    number: $ => $._number,
    _number: $ => choice(
      $.number_long,
      $.number_double,
      $.number_bigint,
      // $.number_bigdecimal,
      $.number_ratio,
      // $.number_octal,
      // $.number_hex,
      // $.number_arbitrary_radix
    ),

    number_long: $ => /[-+]?\d+/,
    number_double: $ => token(
      choice(
        seq(DIGITS, '.', optional(DIGITS), optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), optional(/[fFdD]/)),
        seq('.', DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), optional(/[fFdD]/)),
        seq(DIGITS, /[eE]/, optional(choice('-', '+')), DIGITS, optional(/[fFdD]/)),
        seq(DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), (/[fFdD]/))
      )),
    number_bigint: $ => /[-+]?\d+N/,
    // number_bigdecimal: $ =>
    number_ratio: $ => /[-+]?\d+\/\d+/,
    // number_octal: $ => ,
    // number_hex: $ => ,
    // number_arbitrary_radix: $ =>

    // -------------------------------------------------------------------------
    // Symbolic Value - ##Inf, ##-Inf, ##NaN
    // -------------------------------------------------------------------------

    symbolic_value: $ => seq('##', choice($.infinity, $.negative_infinity, $.not_a_number)),
    infinity: $ => 'Inf',
    negative_infinity: $ => '-Inf',
    not_a_number: $ => 'NaN',

    // -------------------------------------------------------------------------
    // Character - \a
    // -------------------------------------------------------------------------

    character: $ => $._character,
    _character: $ => seq('\\', choice($._normal_char, $._special_char, $._unicode_char, $._octal_char)),
    _normal_char: $ => /./,
    _special_char: $ => choice('newline', 'space', 'tab', 'formfeed', 'backspace', 'return'),
    _unicode_char: $ => seq('u', $._hex_char, $._hex_char, $._hex_char, $._hex_char),
    _hex_char: $ => /[A-Fa-f0-9]/,
    _octal_char: $ => seq('o', $._octal_num),
    _octal_num: $ => choice(/[0-3][0-7][0-7]/, /[0-7][0-7]/, /[0-7]/),

    // -------------------------------------------------------------------------
    // Strings - ""
    // -------------------------------------------------------------------------

    string: $ => $._string,
    _string: $ => seq('"', repeat(choice('\\"', /[^"]/)), '"'),

    // -------------------------------------------------------------------------
    // Regular Expressions - #""
    // -------------------------------------------------------------------------

    regex: $ => $._regex,
    _regex: $ => seq('#"', repeat(choice('\\"', /[^"\n\r]/)), '"'),

    // -------------------------------------------------------------------------
    // Quote - '() (quote)
    // -------------------------------------------------------------------------

    // NOTE: would it be useful to distinguish between these two?
    quote: $ => $._quote,
    _quote: $ => choice(
      seq("'", $._anything),
      seq('(quote', $._anything, ')')
    ),

    // -------------------------------------------------------------------------
    // Keywords - :foo
    // -------------------------------------------------------------------------

    keyword: $ => $._keyword,
    _keyword: $ => choice(
      $._unqualified_keyword,
      $.qualified_keyword
    ),

    _unqualified_keyword: $ => seq(':', $._keyword_chars),
    qualified_keyword: $ => choice(
      seq('::', $._keyword_chars),
      seq('::', $._keyword_chars, '/', $._keyword_chars)
    ),
    _keyword_chars: $ => /[a-zA-Z0-9\-\_\!\+\.][a-zA-Z0-9\-\_\!\+\.\:\?]*/,

    // -------------------------------------------------------------------------
    // Symbols - foo
    // -------------------------------------------------------------------------

    symbol: $ => $._symbol,
    _symbol: $ => choice(
      $.threading_macro,
      $._symbol_chars,
      $.qualified_symbol
    ),

    threading_macro: $ => choice(
      '->', '->>',
      'as->',
      'some->', 'some->>',
      'cond->', 'cond->>'
    ),

    // reference: https://clojure.org/reference/reader#_symbols
    _symbol_chars: $ =>   /[a-zA-Z\*\+\!\-\_\?][a-zA-Z0-9\*\+\!\-\_\?\'\:]*/,
    qualified_symbol: $ => seq($._symbol_chars, '/', $._symbol_chars),

    // -------------------------------------------------------------------------
    // Interop - .foo .-foo java.blah.Klass.
    // -------------------------------------------------------------------------

    interop: $ => choice($.member_access, $.field_access, $.new_class),
    member_access: $ => /\.[a-zA-Z_]\w*/,
    field_access: $ => /\.-[a-zA-Z_]\w*/,
    new_class: $ => /([a-zA-Z_]\w*\.)(\w+\.)*/,
    // TODO: "new" symbol, single dot, double dot, memfn, doto
    // https://github.com/oakmac/tree-sitter-clojure/issues/13

    // -------------------------------------------------------------------------
    // List - ()
    // -------------------------------------------------------------------------

    list: $ => $._list,
    _list: $ => seq('(', repeat($._anything), ')'),

    // -------------------------------------------------------------------------
    // Vector - []
    // -------------------------------------------------------------------------

    vector: $ => $._vector,
    _vector: $ => seq('[', repeat($._anything), ']'),

    // -------------------------------------------------------------------------
    // Hash Map - {}
    // -------------------------------------------------------------------------

    hash_map: $ => $._hash_map,
    _hash_map: $ => choice(
      seq('{', repeat($._hash_map_kv_pair), '}'),
      $.namespace_map
    ),
    namespace_map: $ => choice(
      seq('#::{', repeat($._hash_map_kv_pair), '}'),
      seq('#', $._symbol_chars, '{', repeat($._hash_map_kv_pair), '}')
    ),
    _hash_map_kv_pair: $ => seq($._hash_map_key, $._hash_map_value),
    _hash_map_key: $ => $._anything,
    _hash_map_value: $ => $._anything,

    // -------------------------------------------------------------------------
    // Set - #{}
    // -------------------------------------------------------------------------

    set: $ => $._set,
    _set: $ => seq('#{', repeat($._anything), '}'),

    // -------------------------------------------------------------------------
    // Comments
    // -------------------------------------------------------------------------

    comment: $ => choice($.semicolon, $.shebang_line, $.ignore_form, $.comment_macro),
    semicolon: $ => seq(';', /.*/),
    shebang_line: $ => seq('#!', /.*/),
    ignore_form: $ => seq('#_', $._anything),
    comment_macro: $ => seq('(', 'comment', repeat($._anything), ')'),

    // -------------------------------------------------------------------------
    // Functions
    // -------------------------------------------------------------------------

    _functions: $ => choice($.anonymous_function, $.shorthand_function, $.defn),

    anonymous_function: $ => seq('(', 'fn', optional($.function_name), $._after_the_fn_name, ')'),
    _after_the_fn_name: $ => choice($._single_arity_fn, $._multi_arity_fn),
    function_name: $ => $.symbol,
    _single_arity_fn: $ => seq($.params, optional($.function_body)),
    _multi_arity_fn: $ => repeat1(seq('(', $._single_arity_fn, ')')),

    // NOTE: I don't think we need to handle condition-map here explicitly
    //       it will just be detected as (hash_map) inside the function body
    function_body: $ => repeat1($._anything),

    // NOTE: we can probably be more specific here than just "vector"
    params: $ => $.vector,

    shorthand_function: $ => seq('#(', repeat($._anything), ')'),
    shorthand_function_arg: $ => /%[1-9&]*/,

    defn: $ => seq('(', choice('defn', 'defn-'),
                        optional($.metadata),
                        $.function_name,
                        optional($.docstring),
                        optional($.attr_map),
                        $._after_the_fn_name, ')'),
    docstring: $ => $.string,
    attr_map: $ => $.hash_map,

    // -------------------------------------------------------------------------
    // Metadata
    // -------------------------------------------------------------------------

    metadata: $ => choice(repeat1($.metadata_shorthand), $._metadata_map),
    _metadata_map: $ => seq('^', $.hash_map),
    // NOTE: would it be useful to expose these as separate node types?
    metadata_shorthand: $ => choice(
      seq('^:', $._keyword_chars),
      seq('^"', repeat(choice('\\"', /[^"]/)), '"'),
      seq('^', $._symbol_chars)
    ),

    // -------------------------------------------------------------------------
    // Syntax Quote and macro-related friends
    // -------------------------------------------------------------------------

    syntax_quote: $ => seq('`', $._anything),
    var_quote: $ => seq("#'", $.symbol),
    unquote: $ => seq('~', $._anything),
    unquote_splice: $ => seq('~@', $._anything),
    gensym: $ => /[a-zA-Z\*\+\!\-\_\?][a-zA-Z0-9\*\+\!\-\_\?\'\:]*\#/,

    // -------------------------------------------------------------------------
    // Deref
    // -------------------------------------------------------------------------

    // NOTE: presumably a list here would evaluate to something that can be derefed
    deref: $ => seq('@', choice($.symbol, $.list)),
  }
})

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
