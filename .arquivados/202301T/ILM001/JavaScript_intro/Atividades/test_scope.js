const readline = require("readline-sync");
// // do {
// //   console.log("bloco de instruções antes");

// //   if (0 >= -1) {
// //     console.log("instrução if simples");
// //   } else console.log("nunca sera exibido");

// //   var fecha = readline.question("quer fechar o loop? <S/N>\n--> ");

// //   console.log("entendendo do-while");
// //   console.log("opção com tipo String");
// // } while (fecha != "s" && fecha != "S");

// mes = [
//   "janeiro",
//   "fevereiro", // 28 ou 29 dias
//   "março",
//   "abril", // 30 dias
//   "maio",
//   "junho", // 30 dias
//   "julho",
//   "agosto",
//   "setembro", // 30 dias
//   "outubro",
//   "novembro", // 30 dias
//   "dezembro",
// ];

// console.log(mes[(2, 4, 6)]);
// do {
//   var fecha = readline.question(
//     "\nQer encerrar o Script?\nEnter para continuar\n[S / N ?] ==> "
//   );
//   fecha = fecha.toLowerCase();
// } while (fecha != "s");

// arrays = [1, 3, 7, 4, 3, 10, 6, 11, 21, 44, 13, 10, 0];
// console.log(arrays);

// // arrays.sort();
// console.log(arrays[3]);
// console.log(typeof arrays[3]);

// // uma saída para ordenar elementos de array numericamente
// arrays.sort(function (a, b) {
//   return a - b;
// });
// console.log(arrays);
// console.log(arrays[3]);
// console.log(typeof arrays[3]);

// arrays.push("300");
// console.log(arrays);
// console.log(arrays[12]);
// console.log(typeof arrays[12]);

// const readline = require("readline-sync");

// name_in_array = [];
// name_in_array.push(parseFloat(readline.question("Digite o primeiro Número ")));
// name_in_array.push(parseFloat(readline.question("Digite o segundo Número ")));
// name_in_array.push(parseFloat(readline.question("Digite o terceiro Número ")));
// console.log(name_in_array);

// num_array1 = [1, 4, 10, NaN, 14, 0 / 1, NaN, 40.1, -11, NaN];
// num_array2 = [10, 33, 14, 40.1, -11];

// console.log(num_array1);
// console.log(num_array2);
// console.log(num_array1.length);
// console.log(num_array2.length);

// console.log(isNaN(num_array1));
// console.log(isNaN(num_array2));

// na_len = num_array1.length;
// for (let i = 0; i < na_len; i++) {
//   if (isNaN(num_array1[i])) {
//     console.log("Valor inválido na posição:", i + 1);
//   }
// }

num = [];
num.push(parseFloat(readline.question("Valor para posição Dividendo ---> ")));
num.push(parseFloat(readline.question("Valor para posição Divisor ---> ")));
console.log(num);

num_len = num.length;
for (let i = 0; i < num_len; i++) {
  if (num[i] == 0) {
    if (i == 0) {
      console.log("Use um valor diferente de 0 para o Dividendo:", num[i]);
    } else if (i == 1) {
      console.log("Use um valor diferente de 0 para o Divisor:", num[i]);
    }
  }
}

// console.clear();
// console.log("\nValores ordenados", sort_val);
// val_len = valores.length;
// for (let i = 0; i < val_len; i++) {
//   if (isNaN(valores[i])) {
//     console.log("Valor inválido na posição:", i + 1);
//   }
// }

// obj_num = { dividendo: null, divisor: null };
// obj_num.dividendo = parseFloat(readline.question("Valor para posição 0 ---> "));
// obj_num.divisor = parseFloat(readline.question("Valor para posição 2 ---> "));

// console.log(obj_num);

// if (obj_num.dividendo == 0) {
//   console.log("Pra o dividendo, use um número diferente de 0");
// } else if (obj_num.divisor == 0) {
//   console.log("Pra o divisor, use um número diferente de 0");
// }
// if (opr_div[0] == 0 || opr_div[1] == 0) {
//   console.log(
//     "\n!! --->",
//     opr_div[0],
//     "dividido por",
//     opr_div[1],
//     "não é uma operação válida para esta verificação."
//   );
// }
