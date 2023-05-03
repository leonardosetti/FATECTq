const readline = require("readline-sync");
var op;
var calculo;
op = +readline.question(
  "escolha a operaçõa entre\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao:\n"
);
num_1 = +readline.question("Digite um numero:\n");
num_2 = +readline.question("Digite outro numero:\n");
opcao();

// switch (op) {
//   case 1:
//     soma();
//     break;
//   case 2:
//     subtracao();
//     break;
//   case 3:
//     multiplicacao();
//     break;
//   case 4:
//     divisao();
//     break;

//   default:
//     break;
// }
function opcao() {
  if (op == 1) {
    soma();
    printResult();
  } else if (op == 2) {
    subtracao();
    printResult();
  } else if (op == 3) {
    multiplicacao();
    printResult();
  } else if (op == 4) {
    divisao();
    printResult();
  } else {
    console.log("Opcao invalida ...saindo");
  }
}
function printResult() {
  console.log("O resultado da operação escolhida é", calculo);
}

function soma() {
  calculo = num_1 + num_2;
}
function subtracao() {
  calculo = num_1 - num_2;
}
function multiplicacao() {
  calculo = num_1 * num_2;
}
function divisao() {
  calculo = num_1 / num_2;
}
