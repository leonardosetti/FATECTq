/*
9. Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
Álcool: 
    Até 25l, desconto de 2% por litro. 
    Acima de 25l, desconto de 4% por litro 
Gasolina: 
    Até 25l, desconto de 3% por litro. 
    Acima de 25l, desconto de 5% por litro.

Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível (codificado da seguinte forma: A-álcool, Gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro do álcool é R$ 1,90
*/

const readline = require("readline-sync");
const dscnt = [0.02, 0.04, 0.03, 0.05];
const vl_com = [1.9, 2.7];
const comb_escolha = ["A", "G"];
var fecha;

do {
  console.clear();
  user_order = [];
  user_order.push(
    readline.question(
      "Com qual combustível deseja abastecer?\n[A]para Álcool\n[G]para Gasolina\n--> "
    )
  );
  console.log(user_order);
  user_order.push(
    parseFloat(
      readline.question("Informe a quantidade em litros:\nLitros: --> ")
    )
  );
  user_order[0] = user_order[0].toUpperCase();
  console.log(user_order);
  if (isNaN(user_order[1])) {
    console.log(
      "Por favor, digite apenas números para a quantidade em litros."
    );
  } else if (user_order[0] == comb_escolha[0]) {
    user_order[0] = "Álcool";
    if (user_order[1] <= 25) {
      let dsc_apl_lt = vl_com[0] * dscnt[0];
      let vl_total = user_order[1] * (vl_com[0] - dsc_apl_lt);
      let dsc_econ = user_order[1] * vl_com[0] - vl_total;
      console.log(
        "Você abasteceu",
        user_order[1],
        "L de",
        user_order[0],
        ", e teve R$",
        dsc_apl_lt.toFixed(3),
        " de desconto por litro, totalizando uma economia de R$",
        dsc_econ.toFixed(2),
        "na sua compra!\nTotal a pagar: R$",
        vl_total.toFixed(2)
      );
    } else if (user_order[1] > 25) {
      let dsc_apl_lt = vl_com[0] * dscnt[1];
      let vl_total = user_order[1] * (vl_com[0] - dsc_apl_lt);
      let dsc_econ = user_order[1] * vl_com[0] - vl_total;
      console.log(
        "Você abasteceu",
        user_order[1],
        "L de",
        user_order[0],
        ", e teve R$",
        dsc_apl_lt.toFixed(3),
        " de desconto por litro, totalizando uma economia de R$",
        dsc_econ.toFixed(2),
        "na sua compra!\nTotal a pagar: R$",
        vl_total.toFixed(2)
      );
    }
  } else if (user_order[0] == comb_escolha[1]) {
    user_order[0] = "Gasolina";
    if (user_order[1] <= 25) {
      let dsc_apl_lt = vl_com[1] * dscnt[2];
      let vl_total = user_order[1] * (vl_com[1] - dsc_apl_lt);
      let dsc_econ = user_order[1] * vl_com[1] - vl_total;
      console.log(
        "Você abasteceu",
        user_order[1],
        "L de",
        user_order[0],
        ", e teve R$",
        dsc_apl_lt.toFixed(3),
        " de desconto por litro, totalizando uma economia de R$",
        dsc_econ.toFixed(2),
        "na sua compra!\nTotal a pagar: R$",
        vl_total.toFixed(2)
      );
    } else if (user_order[1] > 25) {
      let dsc_apl_lt = vl_com[1] * dscnt[3];
      let vl_total = user_order[1] * (vl_com[1] - dsc_apl_lt);
      let dsc_econ = user_order[1] * vl_com[1] - vl_total;
      console.log(
        "Você abasteceu",
        user_order[1],
        "L de",
        user_order[0],
        ", e teve R$",
        dsc_apl_lt.toFixed(3),
        " de desconto por litro, totalizando uma economia de R$",
        dsc_econ.toFixed(2),
        "na sua compra!\nTotal a pagar: R$",
        vl_total.toFixed(2)
      );
    }
  } else if (user_order[0] != "A" || user_order[0] != "G") {
    console.log(user_order[0]);
    console.log(
      'Combustível não cadastrado, por favor escolha entre as opções "A" ou "G".'
    );
  }
  fecha = readline.question(
    "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
  );
  fecha = fecha.toUpperCase();
} while (fecha != "S");
