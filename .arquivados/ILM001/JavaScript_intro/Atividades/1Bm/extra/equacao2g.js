/*
Intermediário
Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:  

a. Se o usuário informar o valor de A igual a zero. a equação não e do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado;
b. Se o delta calculado for negativo, a equação não possui raízes reais. Informe ao usuário e encerre o programa;
c. Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe ao usuário;
d. Se o delta for positivo, a equação possui duas raízes reais; informe-as ao usuário; 
*/

eq_param = [];

const readline = require("readline-sync");

eq_param.push(parseFloat(readline.question("Defina o valor de 'a'\n--> ")));
eq_param.push(parseFloat(readline.question("Defina o valor de 'b'\n--> ")));
eq_param.push(parseFloat(readline.question("Defina o valor de 'c'\n--> ")));

if (eq_param[0] == 0) {
  console.clear();
  console.log(
    "Não é possível calcular raízes para esta equação.\nO Parâmetro 'a' deve ser diferente de 0"
  );
} else {
  console.clear();

  let delta = eq_param[1] ** 2 - 4 * eq_param[0] * eq_param[2];
  console.log("O valor de delta é:", delta);

  if (delta > 0) {
    let coef_1 = (-eq_param[1] + Math.sqrt(delta)) / (2 * eq_param[0]);
    let coef_2 = (-eq_param[1] - Math.sqrt(delta)) / (2 * eq_param[0]);

    console.log("Raiz 1 (x') = ", coef_1.toFixed(2));
    console.log("Raiz 2 (x'')= ", coef_2.toFixed(2));
  } else if (delta == 0) {
    let coef_1 = (-eq_param[1] + Math.sqrt(delta)) / (2 * eq_param[0]);

    console.log("Raiz Dupla = ", coef_1.toFixed(2));
  } else if (delta < 0) {
    let raiz_real = -eq_param[1] / (2 * eq_param[0]);

    let coef_i1 = Math.sqrt(-delta) / (2 * eq_param[0]);
    let coef_i2 = (Math.sqrt(-delta) / (2 * eq_param[0])) * -1;

    console.log("Raiz 1 (x') = ", raiz_real, "+", coef_i1 + "i");
    console.log("Raiz 2 (x'')= ", raiz_real, "+", coef_i2 + "i");
  }
}
