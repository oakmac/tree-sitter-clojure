module.exports = grammar({
  name: 'clojure',

  rules: {
    program: $ => repeat($._expression),

    _expression: $ => choice(
      $.nil,
      $.true,
      $.false
    ),

    true: $ => 'true',
    false: $ => 'false',
    nil: $ => 'nil'
  }
});
