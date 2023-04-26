// Alimentar um array até que o valor digitado seja = 0

const readline = require("readline-sync");
vetor = [];

op = +readline.question("Digite um valor numérico:\nValor --> ");

function runWhile(vetor) {
  while (op != 0) {
    vetor.push(op);
    op = +readline.question("Digite um valor numérico:\nValor --> ");
  }
  console.log(...vetor);
}
function runDoWhile(vetor) {
  do {
    op = +readline.question("Digite um valor numérico:\nValor --> ");
    if (op != 0) vetor.push(op);
  } while (op != 0);
  console.log(...vetor);
}

runWhile(vetor);
// runDoWhile(vetor);
