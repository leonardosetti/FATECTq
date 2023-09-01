// 8. Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de desconto é 334,29, o que for menor.

const readline = require("readline-sync");
var fecha = null;
const desc_prc = 0.11;
const desc_mnt = 334.29;

do {
  console.clear();
  console.log("Desconto previdenciário");
  console.log(
    "Sará aplicado um desconto proporcional de 11% ou o máximo de $334,29, o que for menor\n"
  );

  sal_brt = parseFloat(
    readline.question(
      "Informe o valor do salário bruto para aplicação do desconto\n--> R$ "
    )
  );
  if (isNaN(sal_brt)) {
    console.log(
      "!!Valor de salário inválido\nApenas números e ponto para separação decimal"
    );
  } else if (sal_brt * desc_prc < desc_mnt) {
    let calc_desc = sal_brt * desc_prc;
    let proc_sal = sal_brt - calc_desc;
    console.clear();
    console.log(
      "\nO cálculo foi aplicado com 11% de desconto sobre o valor R$ ",
      sal_brt
    );
    console.log("Valor calculado do descontado: R$ ", calc_desc);
    console.log("O valor do salário após o processamento é R$ ", proc_sal);
  } else if (sal_brt * desc_prc >= desc_mnt) {
    let proc_sal = sal_brt - desc_mnt;
    console.clear();
    console.log(
      "\nO cálculo foi aplicado com o desconto de R$",
      desc_mnt,
      " sobre o valor R$ ",
      sal_brt
    );
    console.log("O valor do salário após o processamento é R$ ", proc_sal);
  }

  //encerrando o do-while:
  fecha = readline.question(
    "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
  );
  fecha = fecha.toLowerCase();
} while (fecha != "s");
