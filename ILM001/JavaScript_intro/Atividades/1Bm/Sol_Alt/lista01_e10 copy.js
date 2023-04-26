/*
10. Uma financeira usa o seguinte critério para conceder empréstimos: 
    o valor total do empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e 
    o valor da prestação deve ser no máximo 30% da renda mensal do solicitante. 

    Escreva um programa que leia 
    a renda mensal de um solicitante, 
    o valor total do empréstimo solicitado e 
    o número de prestações que o solicitante deseja pagar e 
    
    informe se o empréstimo pode ou não ser concedido
*/
const readline = require("readline-sync");
const teto_prcl = 0.3;

do {
  console.clear();
  slc_renda = parseFloat(readline.question("Renda do solicitante \n--> R$ "));
  req_ttl_emp = parseFloat(readline.question("Total do empréstimo \n--> R$ "));
  req_ttl_prc = parseInt(
    readline.question("Numero de parcelas desejadas \n--> ")
  );
  //   console.log("30% da renda: R$", slc_renda * teto_prcl);

  // validando os inputs:
  if (isNaN(slc_renda) || isNaN(req_ttl_emp) || isNaN(req_ttl_prc)) {
    console.clear();
    console.log(
      "Informações inconsistentes, por favor informe apenas valores numéricos"
    );
  }
  // autorização de valor:
  else if (req_ttl_emp > 10 * slc_renda) {
    let excedente = req_ttl_emp - 10 * slc_renda;
    console.log(
      "O valor total do empréstimo solicitado excede o permitido de acordo com a renda em R$",
      excedente.toFixed(2)
    );
    // autorização de numero de parcelas:
  } else {
    let vl_prc = req_ttl_emp / req_ttl_prc;
    let vl_teto_prc = slc_renda * teto_prcl;
    if (vl_prc > vl_teto_prc) {
      console.clear();

      console.log(
        "O número de parcelas escolhido não é permitido, pois o valor da parcela excede o máximo de 30% da renda"
      );
      console.log("Empréstimo não aprovado");

      let min_prc = req_ttl_emp / (slc_renda * teto_prcl);
      min_prc = Math.ceil(min_prc);
      console.clear();

      console.log(
        "O mínimo de parcelas para este valor de empréstimo é de",
        min_prc,
        "parcelas"
      );
      console.log("Empréstimo não aprovado");
    } else {
      console.clear();
      console.log("Empréstimo aprovado");
      console.log("Total do valor do empréstimo R$", req_ttl_emp.toFixed(2));
      console.log("Número de parcelas:", req_ttl_prc);
      console.log("Valor da parcela: R$", vl_prc.toFixed(2));
    }
  }

  //encerrando o do-while:
  fecha = readline.question(
    "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
  );
  fecha = fecha.toLowerCase();
} while (fecha != "s");
