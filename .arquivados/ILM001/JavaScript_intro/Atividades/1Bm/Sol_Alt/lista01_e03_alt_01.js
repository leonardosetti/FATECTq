// 3. Escreva um programa que leia um número e imprima se este número é ou não par.

const readline = require("readline-sync");

var valor = parseFloat(
  readline.question(
    "Informe o valor numérico para verificação se é par ou ímpar: "
  )
);
//console.log("\nValor antes de determinar\n ANTES DO IF/ELSE\n", valor);
mod_valor = valor % 2;
//console.log("\nMódulo antes de determinar\n ANTES DO IF/ELSE\n", mod_valor);
if (isNaN(valor)) {
  console.log("\nEste é um valor inválido");
} else if (valor == 0) {
  console.log("Valor", valor, "é nulo");
} else if (mod_valor != 0) {
  //console.log("\nValor determinando\n ANTES DO SUB-IF\n", mod_valor);
  if (Number.isInteger(mod_valor)) {
    console.log("Valor", valor, "é IMPAR");
  } else {
    //console.log("\nValor determinando\n NO SUB-IF\n", mod_valor);
    console.log("Valor", valor, "é impossível determinar pois é um decimal.");
  }
} else if (mod_valor == 0) {
  console.log("Valor", valor, "é PAR ");
}
