/*Ojeto literal
chave:valor  ~campo
var nomeObj ={cave1:valor1, chave2:valor2, chave3:valor4, chaveN:valorN}
*/

var pessoa = { nome: "Leonardo", idade: 12, sexo: "M", peso: 70 };

console.log(pessoa);
console.log(pessoa.nome);
console.log(pessoa.peso);
console.log(pessoa.idade);

console.log(pessoa.nome, pessoa.sexo);

//vetorizando objeto

var multPessoas = [
  { nome: "Leonardo", idade: 18, sexo: "M", peso: 70 },
  { nome: "Maria", idade: 20, sexo: "F", peso: 60 },

  { nome: "Paulo", idade: 21, sexo: "M", peso: 81 },

  { nome: "Gisele", idade: 12, sexo: "F", peso: 68 },

  { nome: "Renato", idade: 19, sexo: "M", peso: 57 },
];

console.log(multPessoas[0].nome);
console.log(multPessoas[2].peso);
console.log(multPessoas[3]);

for (i = 0; i < multPessoas.length; i++) {
  console.log(multPessoas[i].nome);
}

// adicionando nova chave

const readline = require("readline-sync");
var a = {};
do {
  var op = +readline.question("digite a opção 1 ou 0: ");
  if (op == 1) {
    chave = readline.question("digite o nome da nova chave: ");
    valor = readline.question("digite o valor para a nova chave: ");
    a[chave] = valor;
  }
} while (op != 0);

console.log(a);
