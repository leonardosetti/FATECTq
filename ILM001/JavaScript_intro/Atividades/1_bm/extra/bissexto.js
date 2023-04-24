const readline = require("readline-sync");

var guess_yr = +readline.question(
  "Descubra se o ano é bissexto!\nDigite o ano que quer descobrir (4 dígitos), ex.: 1996\n===> "
);

if (guess_yr % 4 == 0) {
  console.log("bissexto");
}
