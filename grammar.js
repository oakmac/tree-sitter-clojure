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
      // $.vector,
      // $.list,

      $.nil,
      $.true,
      $.false
    ),

    set: $ => seq('#{', repeat($._expression), '}'),

    hash_map: $ => seq('{', repeat($._hash_map_kv), '}'),
    _hash_map_kv: $ => seq($._expression, $._expression),

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
