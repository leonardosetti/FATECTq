// 5. Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de dias deste mês.

// Escopo: o usuário deve digitar 8, o script entende que o mês é Agosto e imprime quantos dias tem este mês
const readline = require("readline-sync");
const max_mes = 12;
const min_mes = 1;

do {
  console.clear();
  console.log("\nDigite o mês (mm) para saber quantos dias ele tem:\n");
  let dig_mes = parseInt(readline.question("Qual mês?\n--> "));

  if (isNaN(dig_mes)) {
    console.log(
      "Este não é um formato válido.\nDigite apenas os números do mês que deseja consultar."
    );
  } else if (dig_mes > max_mes || dig_mes < min_mes) {
    console.log(
      "Este não é um formato válido.\nDigite apenas números entre 1 e 12."
    );
  } else {
    nome_mes = [
      "Janeiro", // índice: 0
      "Fevereiro", // índice: 1
      "Março", // índice: 2
      "Abril", // índice: 3 --> 30 dias
      "Maio", // índice: 4
      "Junho", // índice: 5 --> 30 dias
      "Julho", // índice: 6
      "Agosto", // índice: 7
      "Setembro", // índice: 8 --> 30 dias
      "Outubro", // índice: 9
      "Novembro", // índice: 10 --> 30 dias
      "Dezembro", // índice: 11
      "", // tive que colocar essa posição para calcular o índice para a variável select_mes (linha 40)
    ];
    dias_mes = [28, 30, 31];

    if (nome_mes[dig_mes]) {
      select_mes = nome_mes[dig_mes - 1]; // isolando o nome do Mês em uma variável

      if (dig_mes == 2) {
        console.log(select_mes, "tem", dias_mes[0], "dias");
      } else if (
        dig_mes == 4 ||
        dig_mes == 6 ||
        dig_mes == 9 ||
        dig_mes == 11
      ) {
        console.log(select_mes, "tem", dias_mes[1], "dias");
      } else {
        console.log(select_mes, "tem", dias_mes[2], "dias");
      }
    }
  }

  var fecha = readline.question("\nQer encerrar o Script?\n[S/N?]==> ");
  fecha = fecha.toLowerCase();
} while (fecha != "s");
