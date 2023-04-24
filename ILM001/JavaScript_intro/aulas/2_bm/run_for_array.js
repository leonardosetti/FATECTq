// usando for para listar os elementos de um vetor de 30 posições

var valores = [
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
  24, 25, 26, 27, 28, 29, 30,
];
function showArray() {
  for (let i = 0; i < valores.length; i++) {
    console.log(valores[i]);
  }
}
// showArray();
// console.log(valores);
function showElementUp10() {
  for (let i = 0; i < valores.length; i++) {
    if (valores[i] >= 10) console.log(valores[i]);
  }
}
showElementUp10();
