// 1. Escreva um programa que leia um número e exiba se ele é positivo ou negativo
const readline = require("readline-sync");

do {
  var num_val = readline.question(
    "\nInforme um valor numérico para verificação se é positivo ou negativo:\n--> "
  );

  if (parseFloat(num_val) > 0) {
    console.log("\nO valor", num_val, "é POSITIVO!");
  } else if (parseFloat(num_val) < 0) {
    console.log("\nO valor", num_val, "é NEGATIVO!");
  } else if (parseFloat(num_val) == 0) {
    console.log("\nO valor", num_val, "é nulo!");
  }
  var fecha = readline.question("\nQer encerrar o Script?\n[S/N?]==> ");
  fecha = fecha.toLowerCase();
} while (fecha != "s");
