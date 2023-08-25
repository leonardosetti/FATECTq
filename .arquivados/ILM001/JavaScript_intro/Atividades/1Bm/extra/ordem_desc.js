// Faça um programa que leia três números e mostre-os em ordem decrescente.

const readline = require("readline-sync");

ordena = [];

ordena.push(
  +readline.question("Insira o primeiro número para ser ordenado\n-->")
);
ordena.push(
  +readline.question("Insira o segundo número para ser ordenado\n-->")
);
ordena.push(
  +readline.question("Insira o terceiro número para ser ordenado\n-->")
);

ordena.sort(function (a, b) {
  return a - b;
});
sort_val = ordena.reverse();

console.log("Numeros ordenados em ordem decrescente:", ordena);
console.log(
  "Numeros ordenados em ordem decrescente:",
  ordena[0],
  ordena[1],
  ordena[2]
);
