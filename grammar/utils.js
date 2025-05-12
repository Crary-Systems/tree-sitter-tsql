const COMMA = token(',');
const parens = (...rule) => seq('(', ...rule, ')');
const parensComma = (...args) => parens(comma_separated(...args));
const braces = (...rule) => seq('{', ...rule, '}');

function comma_separated(...rules) {
  return seq(...rules.flatMap((rule, index) => index === 0 ? [rule] : [',', rule]));
}

module.exports = {
  COMMA
  ,parens
  ,parensComma
  ,braces
};
