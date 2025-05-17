const { COMMA, parens ,parensComma } = require('./utils.js');

//TODO
//https://msdn.microsoft.com/en-us/library/ms187752.aspx
//https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5260-L5267
module.exports = {
  data_type: $ => choice(
    //Exact Numerics
    $.tinyint_,
    $.smallint_,
    $.int_,
    $.bigint_,
    $.bit_,
    seq($.decimalty_, parens($.decimal_, optional(seq(COMMA, $.decimal_)))),
    seq($.numeric_, parens($.decimal_, optional(seq(COMMA, $.decimal_)))),
    $.moneyty_,
    $.smallmoney_,

    //Approximate numerics
    seq($.floatty_,optional(parens($.decimal_))),
    seq($.realty_,optional(parens($.decimal_))),


    token(/VARCHAR/i), //TODO


  ),

  //Exact Numerics
  tinyint_: $ => token(/TINYINT/i),
  smallint_: $ => token(/SMALLINT/i),
  int_: $ => token(/INT/i),
  bigint_: $ => token(/BIGINT/i),
  bit_: $ => token(/BIT/i),
  decimalty_: $ => token(/DECIMAL/i),
  numeric_: $ => token(/NUMERIC/i),
  moneyty_: $ => token(/MONEY/i),
  smallmoney_: $ => token(/SMALLMONEY/i),

  //Approximate numerics
  floatty_: $ => token(/FLOAT/i),
  realty_: $ => token(/REAL/i),

  /*
    Date and time
    Character strings
    Unicode character strings
    Binary strings
    Other data types
  */
};
