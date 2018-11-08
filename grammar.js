// TODO:
// multi-line strings
// numbers
// - BigInt
// - BigDecimal
// - Ratio
// - hex? octal? etc
// regex
// escape characters in strings
// characters
// keywords
// sets
// maps
// vectors
// lists
// special forms
// "defn" symbols
// reader conditionals

const DIGITS = token(sep1(/[0-9]+/, /_+/))

module.exports = grammar({
  name: 'clojure',

  extras: $ => [
    $.comment,
    /(\s|,)/ // ignore whitespace and commas
  ],

  rules: {
    program: $ => repeat($._expression),

    _expression: $ => choice(
      $.nil,
      $.true,
      $.false,
      $.number,
      $.string,

      $.set,
      $.hash_map,
      $.vector,
      // $.list,
    ),

    set: $ => seq('#{', repeat($._expression), '}'),

    hash_map: $ => seq('{', repeat($.hash_map_kv_pair), '}'),
    hash_map_kv_pair: $ => seq($.hash_map_key, $.hash_map_value),
    hash_map_key: $ => $._expression,
    hash_map_value: $ => $._expression,

    vector: $ => seq('[', repeat($._expression), ']'),

    string: $ => token(choice(
      seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'),
      // TODO: support multiline string literals by debugging the following:
      // seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"', '+', /\n/, '"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)))
    )),

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
        seq('.', DIGITS, optional(seq((/[eE]/), optional(choice('-','+')), DIGITS)), optional(/[fFdD]/)),
        seq(DIGITS, /[eE]/, optional(choice('-','+')), DIGITS, optional(/[fFdD]/)),
        seq(DIGITS, optional(seq((/[eE]/), optional(choice('-','+')), DIGITS)), (/[fFdD]/))
      )),
    // number_bigint: $ =>
    // number_bigdecimal: $ =>
    // number_ratio: $ =>

    // -------------------------------------------------------------------------
    // Booleans + nil
    // -------------------------------------------------------------------------

    true: $ => 'true',
    false: $ => 'false',
    nil: $ => 'nil',

    // -------------------------------------------------------------------------
    // Comments
    // -------------------------------------------------------------------------

    comment: $ => token(seq(';', /.*/))
  }
})

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
