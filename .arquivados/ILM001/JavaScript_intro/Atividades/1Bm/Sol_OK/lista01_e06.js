// 6. Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.

const readline = require("readline-sync");

do {
  console.clear();
  console.log("Soma dos dois maiores valores");
  num = [];
  num.push(
    parseFloat(readline.question("Defina o primeiro valor numérico\n--> "))
  );
  num.push(
    parseFloat(readline.question("Defina o segundo valor numérico\n--> "))
  );
  num.push(
    parseFloat(readline.question("Defina o terceiro valor numérico\n--> "))
  );
  if (isNaN(num[0]) || isNaN(num[1]) || isNaN(num[2])) {
    console.log(
      "Um dos valores não é numérico:\n--> Primeiro valor:",
      num[0],
      "\n--> Segundo valor:",
      num[1],
      "\n--> Terceiro valor:",
      num[2]
    );
  } else if (num[0] > num[1] && num[2] > num[1]) {
    let soma_maior = num[0] + num[2];
    console.log(
      "A soma do primeiro e do último [",
      num[0],
      "+",
      num[2],
      "] é",
      soma_maior
    );
  } else if (num[0] > num[2] && num[1] > num[2]) {
    let soma_maior = num[0] + num[1];
    console.log(
      "A soma do primeiro e do segundo [",
      num[0],
      "+",
      num[1],
      "] é",
      soma_maior
    );
  } else if (num[1] > num[0] && num[2] > num[0]) {
    let soma_maior = num[1] + num[2];
    console.log(
      "A soma do segundo e do último [",
      num[1],
      "+",
      num[2],
      "] é",
      soma_maior
    );
  } else if (num[0] == num[1] && num[1] == num[2]) {
    let soma_iguais = num[0] + num[1];
    console.log(
      "Todos os valores são iguais\nA soma corresponde a [",
      num[0],
      "+",
      num[1],
      "]:",
      soma_iguais
    );
  } else if (num[0] == num[1] && num[0] < num[2]) {
    let soma_maior_menor = num[0] + num[2];
    console.log(
      "Os menores valores são iguais\n-->Primeiro valor: [",
      num[0],
      "]\n-->Segundo valor: [",
      num[1],
      "]\nA soma dos maiores corresponde a [",
      num[0],
      "+",
      num[2],
      "]:",
      soma_maior_menor
    );
  } else if (num[0] == num[2] && num[0] < num[1]) {
    let soma_maior_menor = num[0] + num[1];
    console.log(
      "Os menores valores são iguais\n-->Primeiro valor: [",
      num[0],
      "]\n-->Terceiro valor: [",
      num[2],
      "]\nA soma dos maiores corresponde a [",
      num[0],
      "+",
      num[1],
      "]:",
      soma_maior_menor
    );
  } else if (num[1] == num[2] && num[1] < num[0]) {
    let soma_maior_menor = num[1] + num[0];
    console.log(
      "Os menores valores são iguais\n-->Segundo valor: [",
      num[1],
      "]\n-->Terceiro valor: [",
      num[2],
      "]\nA soma dos maiores corresponde a [",
      num[2],
      "+",
      num[0],
      "]:",
      soma_maior_menor
    );
  }

  var fecha = readline.question(
    "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
  );
  fecha = fecha.toLowerCase();
} while (fecha != "s");
