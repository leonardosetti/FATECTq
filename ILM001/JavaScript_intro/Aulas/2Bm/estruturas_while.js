vetor = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0];
var cont = 0;
 // pode nunca ser executado
while (cont < vetor.length) {
console.log("While", vetor[cont]);
  cont++;
}

cont = 0;
// executa ao menos uma vez
do {
  console.log("Do While:", vetor[cont]);
  cont++;
} while (cont < vetor.length);

Alimentar um array até que o valor digitado seja = 0
