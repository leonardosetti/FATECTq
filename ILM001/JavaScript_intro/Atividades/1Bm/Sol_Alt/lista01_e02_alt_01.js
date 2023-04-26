// 2. Escreva um programa que leia um número e exiba o seu módulo (sempre positivo).

const readline = require("readline-sync");

do {
  console.clear();
  console.log(
    "Digite os valores do dividendo e divisor para saber o módulo (resto da divisão) correspondente:"
  );

  opr_div = [];
  opr_div.push(parseFloat(readline.question("\nValor DIVIDENDO --> ")));
  opr_div.push(parseFloat(readline.question("\nValor DIVISOR --> ")));

  console.log(
    "\nA operação será considerada com",
    opr_div[0],
    "dividido por",
    opr_div[1] + ":"
  );
  value_mod = opr_div[0] % opr_div[1]; // isolando o módulo do valor digitado

  if (opr_div[0] == 0 || opr_div[1] == 0) {
    console.log(
      "\n!! --->",
      opr_div[0],
      "dividido por",
      opr_div[1],
      "não é uma operação válida para esta verificação."
    );
  } else if (value_mod >= 0) {
    console.log(
      "\nO módulo de",
      opr_div[0],
      "dividido por",
      opr_div[1],
      "é |",
      value_mod,
      "|"
    );
  } else if (value_mod < 0) {
    value_mod = value_mod * -1; // convertendo valores negativos para positivo
    console.log(
      "\nO módulo de",
      opr_div[0],
      "dividido por",
      opr_div[1],
      "é |",
      value_mod,
      "|"
    );
  }

  if (isNaN(value_mod)) {
    console.clear();
    console.log("\nDividendo:", opr_div[0], "\nDivisor:", opr_div[1]);
    div_array_len = opr_div.length;
    for (let i = 0; i < div_array_len; i++) {
      if (isNaN(opr_div[i])) {
        if (i == 0) {
          console.log("Valor inválido para o Dividendo:", opr_div[i]);
        } else if (i == 1) {
          console.log("Valor inválido para o Divisor:", opr_div[i]);
        }
      }
    }
  }

  if (opr_div[0] == 0 || opr_div[1] == 0) {
    console.clear();
    console.log("\nDividendo:", opr_div[0], "\nDivisor:", opr_div[1]);
    div_array_len = opr_div.length;
    for (let i = 0; i < div_array_len; i++) {
      if (opr_div[i] == 0) {
        if (i == 0) {
          console.log("Use um valor diferente de 0 para o Dividendo");
        } else if (i == 1) {
          console.log("Use um valor diferente de 0 para o Divisor");
        }
      }
    }
  }
  var fecha = readline.question(
    "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
  );
  fecha = fecha.toLowerCase();
} while (fecha != "s");
