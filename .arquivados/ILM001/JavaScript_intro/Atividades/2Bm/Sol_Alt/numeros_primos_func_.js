// Crie um algoritmo que receba do usuário um número inteiro entre 1 e 200.
// Se o número estiver dentro do critério, verifique se o número é primo ou não.

// Ambas as verificações deverão ser realizadas com funções e deverá ser exibido na tela quantas cálculos (execuções) foram realizadas.

const readline = require("readline-sync");

// Função para verificar se um número é primo
function isPrime(n) {
  if (n <= 1) return false;
  for (let i = 2; i <= Math.sqrt(n); i++) {
    count = null;
    if (n % i === 0) return false;
    count++;
  }
  return true;
}

// Função para receber o número do usuário e verificar se está no intervalo correto
function getNumber() {
  let number;
  do {
    number = parseInt(
      readline.question("Digite um número inteiro entre 1 e 200: ")
    );
  } while (isNaN(number) || number < 1 || number > 200);
  return number;
}

// Função para contar quantas vezes uma função é chamada
function countCalls(fn) {
  let count = 0;
  return (...args) => {
    count++;
    return fn(...args);
  };
}

// Recebe o número do usuário
const number = getNumber();

// Verifica se o número é primo
console.log(
  `O número ${number} ${isPrimeWithCount(number) ? "é" : "não é"} primo.`
);

// Exibe a quantidade de cálculos realizados
console.log(`Foram realizados ${isPrimeWithCount.count} cálculos.`);
