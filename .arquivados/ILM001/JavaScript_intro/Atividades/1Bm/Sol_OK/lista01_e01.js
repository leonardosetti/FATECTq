// 1. Escreva um programa que leia um número e exiba se ele é positivo ou negativo
const readline = require("readline-sync");

do {
  console.clear();
  console.log(
    "\nInforme um valor numérico para verificação se é negativo ou positivo: "
  );
  var num_val = +readline.question("\nNegativo ou Positivo?\nValor --> ");

  if (isNaN(num_val)) {
    // tratando valores não numéricos
    console.log("\nEste não é um valor válido.\nDigite um valor numérico");
  } else if (num_val > 0) {
    console.log("O valor", num_val, "é POSITIVO!");
  } else if (num_val < 0) {
    console.log("O valor", num_val, "é NEGATIVO!");
  } else if (num_val == 0) {
    console.log("O valor", num_val, "é nulo!");
  }
  var fecha = readline.question(
    "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
  );
  fecha = fecha.toLowerCase();
} while (fecha != "s");
