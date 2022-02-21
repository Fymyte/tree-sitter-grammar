module.exports = grammar({
  name: 'grammar',

  extras: $ => [
    /[\t ]/,
  ],

  // inline: $ => [
  //   $._top_level_item,
  // ],

  word: $ => $.identifier,

  rules: {
    goal: $ =>
      repeat(
        choice(
          $.rule_definition,
          $.comment,
          "\n"
        )
      ),

    comment: ($) => /;.*\n/,

    string: ($) => seq('"', /([^"\n]|\\(.|\n))*/, '"'),

    regex: $ => seq(
      '/',
      field('pattern', $.regex_pattern),
      token.immediate('/'),
    ),

    regex_pattern: $ => 
      token.immediate(
        repeat1(
          choice(
            seq(
              '[',
              repeat(choice(
                seq('\\', /./), // escaped character
                /[^\]\n\\]/       // any character besides ']' or '\n'
              )),
              ']'
            ),              // square-bracket-delimited character class
            seq('\\', /./), // escaped character
            /[^/\\\[\n]/    // any character besides '[', '\', '/', '\n'
          ),
        ),
      ),

    _rule_item: ($) =>
      choice(
        $.string,
        $.regex,
        alias($.identifier, $.rule_name),
        $.rule_block,
      ),

    modifier: ($) =>
      choice(
        "*",
        "+",
        "?",
      ),

    rule_block: ($) =>
      seq(
        "(",
        repeat1($._rule_item),
        ")",
        optional($.modifier)
      ),

    rule_option: ($) =>
      repeat1(
        $._rule_item,
      ),

    rule_definition: ($) =>
      seq(
        alias($.identifier, $.name),
        "::=",
        "\n",
        choice(
          sep1($.rule_option, seq("\n", "or")),
          $.comment,
        ),
        "\n\n",
      ),

    identifier: ($) => /[a-z_]+/,
  }

})

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
