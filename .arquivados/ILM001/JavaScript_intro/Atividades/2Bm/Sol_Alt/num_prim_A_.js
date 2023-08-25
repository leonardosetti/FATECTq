const readline = require("readline-sync");

function isPrime(n) {
  if (n <= 1) return false;
  for (let i = 2; i <= Math.sqrt(n); i++) {
    if (n % i === 0) return false;
  }
  return true;
}

function countCalculations(func, ...args) {
  let count = 0;
  function wrappedFunc(...args) {
    count++;
    return func(...args);
  }
  const result = wrappedFunc(...args);
  return [result, count];
}

const num = parseInt(
  readline.question("Digite um número inteiro entre 1 e 200: ")
);
if (num >= 1 && num <= 200) {
  const [isPrimeResult, isPrimeCount] = countCalculations(isPrime, num);
  console.log(
    `${num} é${
      isPrimeResult ? "" : " não"
    } primo. Foram realizados ${isPrimeCount} cálculos.`
  );
} else {
  console.log("Número inválido. O número deve estar entre 1 e 200.");
}
