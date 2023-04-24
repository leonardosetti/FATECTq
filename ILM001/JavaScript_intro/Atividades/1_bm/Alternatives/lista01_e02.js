// 2. Escreva um programa que leia um número e exiba o seu módulo (sempre positivo).
const readline = require("readline-sync");

do {
  console.clear();
  console.log(
    "Digite um número para saber o seu módulo (resto da divisão) por 2:"
  );

  var value = parseFloat(readline.question("\nValor a verificar --> "));
  value_mod = value % 2; // isolando o módulo do valor digitado

  if (isNaN(value)) {
    // tratando valores não numéricos
    console.log(
      "\nEste não é um valor válido.\nDigite um valor numérico e diferente de 0"
    );
  } else if (value == 0) {
    // esta opção satisfaz a condição while
    console.log(
      "\n!! --->",
      value,
      "não é um valor válido para esta verificação.\nScript encerrado\n"
    );
  } else if (value_mod >= 0) {
    console.log("\nO módulo de", value, "dividido por 2 é |", value_mod, "|");
  } else if (value_mod < 0) {
    value_mod = value_mod * -1;
    console.log("\nO módulo de", value, "dividido por 2 é", value_mod, "|");
  } else {
    console.log("\nEste não é um valor válido.");
  }
  var fecha = readline.question(
    "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
  );
  fecha = fecha.toLowerCase();
} while (fecha != "s");
