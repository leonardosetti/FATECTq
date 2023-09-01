const readline = require("readline-sync");

do {
  console.clear();
  console.log(
    "\nInforme um valor numérico de 1 a 9 para o cálculo da respectiva tabuda: "
  );
  var num_val = +readline.question("\nTabuada de --> ");

  if (isNaN(num_val)) {
    // tratando valores não numéricos
    console.log(
      "\nEste não é um valor válido.\nDigite um valor numérico de 1 a 9"
    );
  } else if (num_val <= 0 || num_val > 9) {
    console.log("O valor", num_val, "nâo é válido");
  } else if (num_val > 0 && num_val <= 9) {
    for (let i = 1; i <= 10; i++) {
      console.log(num_val, "x", i, "=", num_val * i);
    }
  }
  var fecha = readline.question(
    "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
  );
  fecha = fecha.toLowerCase();
} while (fecha != "s");
