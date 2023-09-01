/*Faça um programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno. Dicas:

Três lados formam um triangulo quando a soma de quaisquer dos dois lados é maior que o terceiro.
Triângulo Equilátero: três lados iguais;
Triângulo Isósceles: quaisquer dois lados iguais;
Triângulo Escaleno: três lados diferentes;*/

const readline = require("readline-sync");

triangulo = [];
console.clear();
triangulo.push(
  +readline.question("Informe o primeiro lado do triangulo:\n __> ")
);
triangulo.push(
  +readline.question("Informe o segundo lado do triangulo:\n __> ")
);
triangulo.push(
  +readline.question("Informe o terceiro lado do triangulo:\n __> ")
);

console.log(triangulo);
if (
  triangulo[0] + triangulo[1] > triangulo[2] ||
  triangulo[0] + triangulo[2] > triangulo[0] ||
  triangulo[1] + triangulo[2] > triangulo[0]
) {
  console.clear();
  console.log("é triângulo!");
  if (triangulo[0] == triangulo[1] && triangulo[1] == triangulo[2]) {
    console.log("Este é um triângulo equilátero");
  } else if (triangulo[0] != triangulo[1] && triangulo[0] != triangulo[2]) {
    console.log("Este é um triângulo escaleno");
  } else if (
    (triangulo[0] != triangulo[1] && triangulo[1] == triangulo[2]) ||
    (triangulo[1] != triangulo[2] && triangulo[0] == triangulo[2]) ||
    (triangulo[0] != triangulo[2] && triangulo[0] == triangulo[1])
  ) {
    console.log("Este é um triângulo isósceles");
  }
} else {
}
