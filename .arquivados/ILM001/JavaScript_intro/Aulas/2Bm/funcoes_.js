// valores = [
//   "banana",
//   "abacaxi",
//   "uva",
//   "pera",
//   "maracuja",
//   "manga",
//   "jaca",
//   "kiwi",
//   "laranja",
//   "mamao",
//   "pessego",
//   "maca",
// ];
// valores.sort();

// function showArray() {
//   for (let i = 0; i < valores.length; i++) {
//     console.log(valores[i]);
//   }
// }
// showArray();
// console.log(...valores);

// console.log("Antes da função");
// escreva();
// console.log("Depois da função");

// function escreva() {
//   console.log("Dentro da Função l1");
//   console.log("Dentro da Função l2");
//   console.log("Dentro da Função l3");
//   console.log("Dentro da Função l4");
// }

const readline = require("readline-sync");
// resultado = null;
// num_1 = +readline.question("Digite um número:\n");
// num_2 = +readline.question("Digite outro número:\n");
// calcule();

// console.log("A soma de ", num_1, "com", num_2, "é ", resultado);

// function calcule() {
//   resultado = num_1 + num_2;
// }

// Escolha a operação para ser executada entre dois números

// usando parametros
resultado = null;

// soma(22, 11);

// console.log(resultado);
// function soma(a, b) {
//   resultado = a + b;
// }

num1 = 20;
num2 = 1;

function varSoma(num1, num2) {
  resultado = num1 + num2;
}
varSoma;

// com return
function varSoma(num1, num2) {
  return num1 + num2;
}

console.log(varSoma(num1, num2));

//
