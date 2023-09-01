// 3. Escreva um programa que leia um número e imprima se este número é ou não par.

const readline = require("readline-sync");

do {
  console.clear();
  console.log(
    "\nInforme o valor numérico para verificação se o número é par ou ímpar:\n"
  );
  var valor = parseFloat(readline.question("PAR ou ÍMPAR? --> "));
  mod_valor = valor % 2; // isolando o valor resultado do módulo
  if (isNaN(valor)) {
    console.log("\nEste é um valor inválido\n");
  } else if (valor == 0) {
    console.log("Valor >", valor, "< é nulo\n");
  } else if (mod_valor != 0) {
    if (Number.isInteger(mod_valor)) {
      console.log("Valor [", valor, "] é ÍMPAR\n");
    } else {
      console.log(
        "Valor [",
        valor,
        "] é impossível determinar pois é um decimal.\n"
      );
    }
  } else if (mod_valor == 0) {
    console.log("Valor [", valor, "] é PAR\n");
  }
  var fecha = readline.question(
    "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
  );
  fecha = fecha.toLowerCase();
} while (fecha != "s");
