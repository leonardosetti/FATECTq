// 2. Escreva um programa que leia um número e exiba o seu módulo (sempre positivo).
const readline = require("readline-sync");
var fecha;

// função para divisões feitas por 2:
function fn_mod_by_2() {
  do {
    const divisor = 2;
    console.clear();
    console.log(
      "Digite um número para saber o seu módulo (resto da divisão) por 2:"
    );

    console.log(divisor, typeof divisor);
    let dividendo = parseFloat(readline.question("\nValor a verificar --> "));
    let value_mod = dividendo % divisor; // isolando o módulo do valor digitado
    // tratando valores não numéricos
    if (isNaN(dividendo)) {
      console.log(
        "\nEste não é um valor válido.\nDigite um valor numérico e diferente de 0"
      );
      // tratando valor do dividendo == 0
    } else if (dividendo == 0) {
      console.log(
        "\n!! --->",
        dividendo,
        "não é um valor válido para esta verificação.\nScript encerrado\n"
      );
    } else if (value_mod >= 0) {
      console.log(
        "\nO módulo de",
        dividendo,
        "dividido por 2 é |",
        value_mod,
        "|"
      );
    } else if (value_mod < 0) {
      value_mod = value_mod * -1; // convertendo valores negativos para positivo
      console.log(
        "\nO módulo de",
        dividendo,
        "dividido por 2 é",
        value_mod,
        "|"
      );
    }
    fecha = readline.question(
      "\nQuer encerrar o Script e retornar ao menu principal?\n** ou pressione Enter para continuar\n[S / N ?] ==> "
    );
    fecha = fecha.toLowerCase();
  } while (fecha != "s");
}

// função para divisões feitas por qualquer número a escolha do usuário:
function fn_mod_by_user() {
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

    if (value_mod >= 0) {
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
    fecha = readline.question(
      "\nQuer encerrar o Script e retornar ao menu principal?\n** ou pressione Enter para continuar\n[S / N ?] ==> "
    );
    fecha = fecha.toLowerCase();
  } while (fecha != "s");
}

// menu
do {
  console.clear();
  let option = parseInt(
    readline.question(
      "Escolha uma das opções a seguir:\n(1) para: Módulo(resto da divisão) por 2:\n(2) para: Módulo(resto da divisão) por um valor definido pelo usuário\n===> "
    )
  );

  if (option == 1) {
    fn_mod_by_2();
  } else if (option == 2) {
    fn_mod_by_user();
  } else {
    console.clear();
    console.log("Opção inválida!");
  }
  fecha = readline.question(
    "\nPressione Enter para continuar para o menu inicial\nQuer encerrar o Script?\n[S / N ?] ==> "
  );
  fecha = fecha.toLowerCase();
} while (fecha != "s");
