// Helpful links:
// https://clojure.org/guides/learn/syntax
// https://clojure.org/reference/reader
// https://clojure.org/guides/weird_characters
// https://github.com/venantius/glow/blob/master/resources/parsers/Clojure.g4
// https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js
// https://github.com/atom/language-clojure/blob/master/grammars/clojure.cson
// http://cljs.github.io/api/syntax/

// TODO:
// multi-line strings
// escape characters in strings?
// numbers
// - BigInt
// - BigDecimal
// - Ratio
// - hex? octal? etc https://stackoverflow.com/questions/41489239/octal-number-handling-in-clojure
// - https://cljs.github.io/api/syntax/number
// namespace-qualified keyword
// symbols
// lists
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
      // TODO: wrap all of these in a "literal" form?
      $.nil,
      $.true,
      $.false,
      $.number,
      $.character,
      $.string,
      $.regex,

      $.keyword,

      $.set,
      $.hash_map,
      $.vector,
      // $.list,

      $.comment,
    ),

    // -------------------------------------------------------------------------
    // nil + booleans
    // -------------------------------------------------------------------------

    nil: $ => 'nil',
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

    string: $ => token(choice(
      seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"')
      // TODO: support multiline string literals by debugging the following:
      // seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"', '+', /\n/, '"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)))
    )),

    // -------------------------------------------------------------------------
    // Regular Expressions - #""
    // -------------------------------------------------------------------------

    regex: $ => seq('#"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'),

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
    // Set - #{}
    // -------------------------------------------------------------------------

    set: $ => seq('#{', repeat($._anything), '}'),

    // -------------------------------------------------------------------------
    // Hash Map - {}
    // -------------------------------------------------------------------------

    hash_map: $ => seq('{', repeat($.hash_map_kv_pair), '}'),
    hash_map_kv_pair: $ => seq($.hash_map_key, $.hash_map_value),
    hash_map_key: $ => $._anything,
    hash_map_value: $ => $._anything,

    // -------------------------------------------------------------------------
    // Vector - []
    // -------------------------------------------------------------------------

    vector: $ => seq('[', repeat($._anything), ']'),

    // -------------------------------------------------------------------------
    // Comments
    // -------------------------------------------------------------------------

    comment: $ => choice($.semicolon, $.ignore_form, $.comment_macro),
    semicolon: $ => seq(';', /.*/),
    ignore_form: $ => seq('#_', $._anything),
    comment_macro: $ => seq('(comment', repeat($._anything), ')'),
    // TODO: shebang line
  }
})

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
