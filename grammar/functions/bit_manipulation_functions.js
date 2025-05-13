const { parens, parensComma } = require('../utils.js');

module.exports = {
  bit_manipulation_functions: $ => choice(
    seq($.left_shift_, parensComma($.expression, $.expression)),
    prec.left(seq($.expression, $.left_shift_operator_, $.expression)),

    seq($.right_shift_, parensComma($.expression, $.expression)),
    prec.left(seq($.expression, $.right_shift_operator_, $.expression)),

    seq($.bit_count_, parens($.expression)),
    seq($.get_bit_, parensComma($.expression,$.expression)),
    seq($.set_bit_, parensComma($.expression,$.expression)),
    seq($.set_bit_, parensComma($.expression,$.expression,$.expression)),
  ),

  left_shift_: $ => token(/LEFT_SHIFT/i),
  left_shift_operator_: $ => token(/<</i),
  right_shift_: $ => token(/RIGHT_SHIFT/i),
  right_shift_operator_: $ => token(/>>/i),
  bit_count_: $ => token(/BIT_COUNT/i),
  get_bit_: $ => token(/GET_BIT/i),
  set_bit_: $ => token(/SET_BIT/i),
};
