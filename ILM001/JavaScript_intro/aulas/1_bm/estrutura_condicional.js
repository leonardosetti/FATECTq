// If Else

var a = 10.1;
var b = 10;

if (a == b) {
  console.log("A é igual a B");
} else {
  console.log("A não é igual a B");
}

if (a != b) {
  console.log("A é diferente de B");
} else {
  console.log("A é igual a B");
}
a = 0;

if (a > 0) {
  console.log("A é positivo");
} else if (a < 0) {
  console.log("A é negativo");
} else {
  console.log("A é nulo ");
}

a = true;
b = !a;

if (a == b) {
  console.log("Valor de a:", a, "Valor de b:", b, "Valor de b é FALSO");
}

if (a == true && b == false) {
  console.log(
    "Valor de a:",
    a,
    "Valor de b:",
    b,
    "Valor de b é FALSO E valor de a é VERDADEIRO"
  );
}

if (a == true || b == true) {
  console.log("Valor de a:", a, "Valor de b:", b, "Ou A Ou B é verdadeiro");
}

// const readline = require("readline-sync");
// var valor = parseFloat(
//   readline.question("Informe o valor numérico para verificação: ")
// );
// if (valor > 0) {
//   console.log("A é positivo");
// } else if (valor < 0) {
//   console.log("A é negativo");
// } else {
//   console.log("A é nulo ");
// }

const readline = require("readline-sync");
var valor = parseFloat(
  readline.question(
    "Informe o valor numérico para verificação se é par ou ímpar: "
  )
);
if (valor % 2 != 0) {
  console.log("Valor", valor, "é IMPAR");
} else if (valor == 0) {
  console.log("Valor", valor, "é nulo ");
} else {
  console.log("Valor", valor, "é PAR");
}
