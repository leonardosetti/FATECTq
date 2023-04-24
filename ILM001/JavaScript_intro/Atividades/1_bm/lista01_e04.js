// 4. Escreva um programa que leia três números  e mostre o maior entre eles.

const readline = require("readline-sync");

do {
  console.clear();
  console.log("Comparando valores numéricos - Mostre maior valor:");
  num = [];
  num.push(
    parseFloat(readline.question("Digite o primeiro valor numérico:\n--> "))
  );
  num.push(
    parseFloat(readline.question("Digite o segundo valor numérico:\n--> "))
  );
  num.push(
    parseFloat(readline.question("Digite o terceiro valor numérico:\n--> "))
  );
  if (num[0] > num[1] && num[0] > num[2]) {
    console.log("\n-->", num);
    console.log(
      "O primeiro valor: [",
      num[0],
      "é o maior valor na comparação."
    );
  } else if (num[1] > num[0] && num[1] > num[2]) {
    console.log("\n-->", num);
    console.log(
      "O segundo valor: [",
      num[1],
      "] é o maior valor na comparação."
    );
  } else if (num[2] > num[0] && num[2] > num[1]) {
    console.log("\n-->", num);
    console.log(
      "O terceiro valor: [",
      num[2],
      "] é o maior valor na comparação."
    );
  } else if (num[0] == num[1] && num[0] == num[2]) {
    console.log("\n-->", num);
    console.log("Todos os valores: >", num, "< são iguais na comparação.");
  } else if (num[0] == num[1] && num[0] > num[2]) {
    console.log("\n-->", num);
    console.log(
      "Os dois primeiros valores: [",
      num[0],
      "e",
      num[1],
      "] são iguais e são o maior valor na comparação."
    );
  } else if (num[1] == num[2] && num[1] > num[0]) {
    console.log("\n-->", num);
    console.log(
      "Os dois últimos valores: [",
      num[1],
      "e",
      num[2],
      "] são iguais e são o maior valor na comparação."
    );
  } else if (num[0] == num[2] && num[0] > num[1]) {
    console.log("\n-->", num);
    console.log(
      "\nO primeiro e o último valor: [",
      num[0],
      "e",
      num[2],
      "] são iguais e são o maior valor na comparação."
    );
  }
  if (isNaN(num[0] + num[1] + num[2])) {
    console.clear();
    num_len = num.length;
    for (let i = 0; i < num_len; i++) {
      if (isNaN(num[i])) {
        console.log("\n-->", num);
        console.log("Valor inválido na posição:", i + 1);
      }
    }
  }
  var fecha = readline.question("\nQer encerrar o Script?\n[S/N?]==> ");
  fecha = fecha.toLowerCase();
} while (fecha != "s");
