// 7. Escreva um programa que leia 3 números e calcule a média ponderada entre eles. Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5.

const readline = require("readline-sync");
const peso_max = 0.5;
const peso_min = 0.25;

do {
  console.clear();
  console.log("Cálculo de média ponderada\n");
  console.log("Maior valor: Peso 5");
  console.log("Menores valores: Peso 2.5\n");
  valores = [];
  valores.push(
    parseFloat(
      readline.question("Defina o primeiro valor numérico:\nValor --> ")
    )
  );
  valores.push(
    parseFloat(
      readline.question("Defina o segundo valor numérico:\nValor --> ")
    )
  );
  valores.push(
    parseFloat(
      readline.question("Defina o terceiro valor numérico:\nValor --> ")
    )
  );
  console.clear();
  // achei essa função na internet para conseguir ordenar o array numericamente em vez de alfabeticamente:
  valores.sort(function (a, b) {
    return a - b;
  });
  sort_val = valores.reverse();

  console.log("\nValores ordenados", sort_val);
  var media_p =
    (valores[0] * peso_max + valores[1] * peso_min + valores[2] * peso_min) /
    (peso_max + 2 * peso_min);
  console.log("Média ponderada = ", media_p);

  if (isNaN(media_p)) {
    console.clear();
    console.log("\nValores ordenados", sort_val);
    val_len = valores.length;
    for (let i = 0; i < val_len; i++) {
      if (isNaN(valores[i])) {
        console.log("Valor inválido na posição:", i + 1);
      }
    }
  }

  var fecha = readline.question(
    "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
  );
  fecha = fecha.toLowerCase();
} while (fecha != "s");
