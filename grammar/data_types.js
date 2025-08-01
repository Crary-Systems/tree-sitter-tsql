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

    //Character strings
    seq($.char_, optional(parens($.decimal_))),
    seq($.varchar_, optional(parens(choice($.decimal_, $.max_)))),
    $.text_,


    //Unicode character strings
    seq($.nchar_, optional(parens($.decimal_))),
    seq($.nvarchar_, optional(parens(choice($.decimal_, $.max_)))),
    $.ntext_,

    //Binary strings
    seq($.binary_, optional(parens($.decimal_))),
    seq($.varbinary_, optional(parens(choice($.decimal_, $.max_)))),
    $.image_,

    //Date and time
    $.date_,
    seq($.time_, optional(parens($.decimal_))),
    seq($.datetime2_, optional(parens($.decimal_))),
    seq($.datetimeoffset_, optional(parens($.decimal_))),
    $.datetime_,
    $.smalldatetime_,
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

  //Character strings
  char_: $ => token(/CHAR/i),
  varchar_: $ => token(/VARCHAR/i),
  text_: $ => token(/TEXT/i),

  //Unicode character strings
  nchar_: $ => token(/NCHAR/i),
  nvarchar_: $ => token(/NVARCHAR/i),
  ntext_: $ => token(/NTEXT/i),

  //Binary strings
  binary_: $ => token(/BINARY/i),
  varbinary_: $ => token(/VARBINARY/i),
  image_: $ => token(/IMAGE/i),

  //Date and time
  date_: $ => token(/DATE/i),
  time_: $ => token(/TIME/i),
  datetime2_: $ => token(/DATETIME2/i),
  datetimeoffset_: $ => token(/DATETIMEOFFSET/i),
  datetime_: $ => token(/DATETIME/i),
  smalldatetime_: $ => token(/SMALLDATETIME/i),

  /*
    TODO Other data types
    https://learn.microsoft.com/en-us/sql/t-sql/data-types/data-types-transact-sql?view=sql-server-ver16#other-data-types
  */


};
