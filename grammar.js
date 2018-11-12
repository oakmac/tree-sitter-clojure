// Helpful links:
// https://clojure.org/guides/learn/syntax
// https://clojure.org/reference/reader
// https://clojure.org/guides/weird_characters
// https://github.com/venantius/glow/blob/master/resources/parsers/Clojure.g4
// https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js
// https://github.com/atom/language-clojure/blob/master/grammars/clojure.cson
// http://cljs.github.io/api/syntax/

// TODO:
// escape characters in strings?
// numbers
// - BigInt
// - BigDecimal
// - Ratio
// - hex? octal? etc https://stackoverflow.com/questions/41489239/octal-number-handling-in-clojure
// - https://cljs.github.io/api/syntax/number
// namespace-qualified keyword
// symbols
// syntax quote
// special forms
// metadata
// "defn" symbols
// reader conditional
// symbolic value
// unquote
// unquote splicing
// gensym
// splicing reader conditional
// tagged literals
// Should we add tests for (ERROR) nodes in some cases?

const DIGITS = token(sep1(/[0-9]+/, /_+/))

module.exports = grammar({
  name: 'clojure',

  extras: $ => [
    /(\s|,)/ // ignore whitespace and commas
  ],

  rules: {
    program: $ => repeat($._anything),

    _anything: $ => choice(
      $.nil,
      $.boolean,
      $.number,
      $.character,
      $.string,
      $.regex,

      $.quote,

      $.keyword,
      $.symbol,

      $.list,
      $.vector,
      $.hash_map,
      $.set,

      $.comment,
    ),

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

    number: $ => choice(
      $.number_long,
      $.number_double
      // $.number_bigint,
      // $.number_bigdecimal,
      // $.number_ratio
    ),

    number_long: $ => /[-+]?\d+/,
    number_double: $ => token(
      choice(
        seq(DIGITS, '.', optional(DIGITS), optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), optional(/[fFdD]/)),
        seq('.', DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), optional(/[fFdD]/)),
        seq(DIGITS, /[eE]/, optional(choice('-', '+')), DIGITS, optional(/[fFdD]/)),
        seq(DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), (/[fFdD]/))
      )),
    // number_bigint: $ =>
    // number_bigdecimal: $ =>
    // number_ratio: $ =>

    // -------------------------------------------------------------------------
    // Character - \a
    // -------------------------------------------------------------------------

    character: $ => seq('\\', choice($._normal_char, $._special_char, $._unicode_char, $._octal_char)),
    _normal_char: $ => /./,
    _special_char: $ => choice('newline', 'space', 'tab', 'formfeed', 'backspace', 'return'),
    _unicode_char: $ => seq('u', $._hex_char, $._hex_char, $._hex_char, $._hex_char),
    _hex_char: $ => /[A-Fa-f0-9]/,
    _octal_char: $ => seq('o', $._octal_num),
    _octal_num: $ => choice(/[0-3][0-7][0-7]/, /[0-7][0-7]/, /[0-7]/),

    // -------------------------------------------------------------------------
    // Strings - ""
    // -------------------------------------------------------------------------

    string: $ => seq('"', repeat(choice('\\"', /[^"]/)), '"'),

    // -------------------------------------------------------------------------
    // Regular Expressions - #""
    // -------------------------------------------------------------------------

    regex: $ => seq('#"', repeat(choice('\\"', /[^"\n\r]/)), '"'),

    // -------------------------------------------------------------------------
    // Quote - '() (quote)
    // -------------------------------------------------------------------------

    // TODO: would it be useful to distinguish between these two?
    quote: $ => choice(
      seq("'", $._anything),
      seq('(quote', $._anything, ')')
    ),

    // -------------------------------------------------------------------------
    // Keywords - :foo
    // -------------------------------------------------------------------------

    keyword: $ => choice(
      $.unqualified_keyword,
      $.qualified_keyword
    ),

    unqualified_keyword: $ => seq(':', $._keyword_chars),
    qualified_keyword: $ => seq('::', $._keyword_chars),

    _keyword_chars: $ => /[a-zA-Z0-9-_!+:]+/,

    // -------------------------------------------------------------------------
    // Symbols - foo
    // -------------------------------------------------------------------------

    symbol: $ => choice(
      $._symbol_chars,
      $.qualified_symbol
    ),

    // reference: https://clojure.org/reference/reader#_symbols
    _symbol_chars: $ =>   /[a-zA-Z\*\+\!\-\_\?][a-zA-Z0-9\*\+\!\-\_\?\'\:]*/,
    qualified_symbol: $ => seq($._symbol_chars, '/', $._symbol_chars),

    // -------------------------------------------------------------------------
    // List - ()
    // -------------------------------------------------------------------------

    list: $ => seq('(', repeat($._anything), ')'),

    // -------------------------------------------------------------------------
    // Vector - []
    // -------------------------------------------------------------------------

    vector: $ => seq('[', repeat($._anything), ']'),

    // -------------------------------------------------------------------------
    // Hash Map - {}
    // -------------------------------------------------------------------------

    hash_map: $ => choice(
      seq('{', repeat($.hash_map_kv_pair), '}'),
      $.namespace_map
    ),
    namespace_map: $ => choice(
      seq('#::{', repeat($.hash_map_kv_pair), '}'),
      seq('#', $._symbol_chars, '{', repeat($.hash_map_kv_pair), '}')
    ),
    hash_map_kv_pair: $ => seq($.hash_map_key, $.hash_map_value),
    hash_map_key: $ => $._anything,
    hash_map_value: $ => $._anything,

    // -------------------------------------------------------------------------
    // Set - #{}
    // -------------------------------------------------------------------------

    set: $ => seq('#{', repeat($._anything), '}'),

    // -------------------------------------------------------------------------
    // Comments
    // -------------------------------------------------------------------------

    comment: $ => choice($.semicolon, $.shebang_line, $.ignore_form, $.comment_macro),
    semicolon: $ => seq(';', /.*/),
    shebang_line: $ => seq('#!', /.*/),
    ignore_form: $ => seq('#_', $._anything),
    comment_macro: $ => seq('(comment', repeat($._anything), ')')
  }
})

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
