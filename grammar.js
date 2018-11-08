module.exports = grammar({
  name: 'clojure',

  extras: $ => [
    $.comment,
    ',', // ignore commas
    /\s/ // ignore whitespace
  ],

  rules: {
    program: $ => repeat($._expression),

    _expression: $ => choice(
      $.set,
      $.hash_map,
      $.vector,
      // $.list,

      $.string,
      $.nil,
      $.true,
      $.false
    ),

    set: $ => seq('#{', repeat($._expression), '}'),

    hash_map: $ => seq('{', repeat($._hash_map_kv), '}'),
    _hash_map_kv: $ => seq($._expression, $._expression),

    vector: $ => seq('[', repeat($._expression), ']'),

    string: $ => token(choice(
      seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'),
      // TODO: support multiline string literals by debugging the following:
      // seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"', '+', /\n/, '"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)))
    )),

    true: $ => 'true',
    false: $ => 'false',
    nil: $ => 'nil',

    comment: $ => token(seq(';', /.*/))
  }
})

// TODO:
// commas ?
// numbers
// regex
// strings
// keywords
// sets
// maps
// vectors
// lists
