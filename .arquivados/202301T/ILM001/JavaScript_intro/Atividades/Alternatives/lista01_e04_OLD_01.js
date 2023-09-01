// 4. Escreva um programa que leia três números  e mostre o maior entre eles.

const readline = require("readline-sync");

do {
  console.clear();
  console.log("Comparando valores numéricos - Mostre maior valor:");
  var num_1 = parseFloat(
    readline.question("\nDigite o primeiro valor numérico:\n--> ")
  );
  var num_2 = parseFloat(
    readline.question("\nDigite o segundo valor numérico:\n--> ")
  );
  var num_3 = parseFloat(
    readline.question("\nDigite o terceiro valor numérico:\n--> ")
  );

  if (isNaN(num_1) || isNaN(num_2) || isNaN(num_3)) {
    console.log(
      "Um ou mais valores são INVÁLIDOS!!\nApenas valores numéricos são aceitos"
    );
  } else {
    if (num_1 > num_2 && num_1 > num_3) {
      console.log(
        "O primeiro valor: [",
        num_1,
        "é o maior valor na comparação."
      );
    } else if (num_2 > num_1 && num_2 > num_3) {
      console.log(
        "O segundo valor: [",
        num_2,
        "é o maior valor na comparação."
      );
    } else if (num_3 > num_1 && num_3 > num_2) {
      console.log(
        "O terceiro valor: [",
        num_3,
        "] é o maior valor na comparação."
      );
    } else if (num_1 == num_2 && num_1 == num_3) {
      console.log(
        "Todos os valores: >",
        num_1,
        num_2,
        num_3,
        "< são iguais na comparação."
      );
    } else if (num_1 == num_2 && num_1 > num_3) {
      console.log(
        "Os dois primeiros valores: [",
        num_1,
        "e",
        num_2,
        "] são iguais e são o maior valor na comparação."
      );
    } else if (num_2 == num_3 && num_2 > num_1) {
      console.log(
        "Os dois últimos valores: [",
        num_2,
        "e",
        num_3,
        "] são iguais e são o maior valor na comparação."
      );
    } else if (num_1 == num_3 && num_1 > num_2) {
      console.log(
        "O primeiro e o último valor: [",
        num_1,
        "e",
        num_3,
        "] são iguais e são o maior valor na comparação."
      );
    }
  }
  var fecha = readline.question("\nQer encerrar o Script?\n[S/N?]==> ");
  fecha = fecha.toLowerCase();
} while (fecha != "s");
