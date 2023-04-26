// Trabalhando com conversão de tipos de variáveis

// Todo parâmetro passado via interface é passado com string,
// portanto os dados devem ser convertidos no formato desejado de cada tipo de dados

// Capturando dados do usuário via console:

// o módulo readline é necessário:
//npm install readline-sync
//npm install express --save

const readline = require("readline-sync");
const ex_title = "Cálculo da área do triângulo:";
console.log("\n", ex_title, "\n");

var altura_t = parseFloat(readline.question("Informe a altura do triângulo: "));
var base_t = parseFloat(readline.question("\nInforme a base do triângulo: "));
var area_t = (base_t * altura_t) / 2;

console.log("\nA área do triângulo é", area_t + "cm²");
