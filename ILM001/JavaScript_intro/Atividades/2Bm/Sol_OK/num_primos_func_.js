const readline = require("readline-sync");

function numPrimo(n) {
  let contador = 0;
  if (n <= 1) return false;
  for (let i = 2; i <= Math.sqrt(n); i++) {
    contador++;
    if (n % i === 0) return false;
  }
  return [true, contador];
}

function intervalo(n) {
  let contador = 0;
  contador++;
  if (n >= 1 && n <= 200) {
    return [true, contador];
  } else {
    return [false, contador];
  }
}

const numero = parseInt(
  readline.question("Digite um número inteiro entre 1 e 200: ")
);

const [dentroDoIntervalo, execucoesDentroDoIntervalo] = intervalo(numero);
const [ePrimo, execucoesEPrimo] = numPrimo(numero);

if (dentroDoIntervalo) {
  if (ePrimo) {
    console.log(`${numero} é um número primo.`);
  } else {
    console.log(`${numero} não é um número primo.`);
  }
} else {
  console.log(`O número digitado não está dentro do intervalo permitido.`);
}

console.log(
  "Execuções realizadas para verificar se o número está dentro do intervalo permitido:",
  execucoesDentroDoIntervalo
);
console.log(
  "Execuções realizadas para verificar se o número é primo:",
  execucoesEPrimo
);
