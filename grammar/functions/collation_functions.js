const { parens, parensComma } = require('../utils.js');
module.exports = {
  collation_functions: $ => choice(
    seq($.collationproperty_,parensComma($.expression, $.expression)),
    seq($.tertiary_weights_,parens($.expression)),
  ),

  collationproperty_: $ => token(/COLLATIONPROPERTY/i),
  tertiary_weights_: $ => token(/TERTIARY_WEIGHTS/i),

}
