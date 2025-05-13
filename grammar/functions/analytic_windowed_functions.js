const { parens, parensComma, braces } = require('../utils.js');

//https://docs.microsoft.com/en-us/sql/t-sql/functions/analytic-functions-transact-sql
//https://github.com/antlr/grammars-v4/blob/master/sql/tsql/TSqlParser.g4#L5019
module.exports = {
  analytic_windowed_functions: $ => choice(
    seq(choice($.first_value_,$.last_value_), parens($.expression), $.over_clause)

    ,seq(choice($.lag_, $.lead_)
      ,$.lag_lead_args
      ,optional(choice($.ignore_nulls_, $.respect_nulls_))
      ,$.over_clause)

    ,seq(choice($.cume_dist_, $.percent_rank_)
      ,token('('),token(')')
      ,$.over_
      ,parens(seq(
        optional($.partition_by_clause)
        ,$.order_by_clause)))

    ,seq(choice($.percentile_cont_, $.percentile_disc_), parens($.expression)
      ,$.within_group_, parens($.order_by_clause), $.over_, parens(optional($.partition_by_clause)))
  ),

  over_: $ => token(/OVER/i),
  within_group_: $ => seq(token(/WITHIN/i), token(/GROUP/i)),
  percentile_cont_: $ => token(/PERCENTILE_CONT/i),
  percentile_disc_: $ => token(/PERCENTILE_DISC/i),


  cume_dist_: $ => token(/CUME_DIST/i),
  percent_rank_: $ => token(/PERCENT_RANK/i),

  lag_lead_args: $ => parens(
    seq($.expression,
      optional(seq(token(','), field('offset', $.expression),
        optional(seq(token(','), field('default', $.expression))))))
  ),

  ignore_nulls_: $ => seq(token(/IGNORE/i), token(/NULLS/i)),
  respect_nulls_: $ => seq(token(/RESPECT/i), token(/NULLS/i)),
  lag_: $ => token(/LAG/i),
  lead_: $ => token(/LEAD/i),

  first_value_: $ => token(/FIRST_VALUE/i),
  last_value_: $ => token(/LAST_VALUE/i),
};
