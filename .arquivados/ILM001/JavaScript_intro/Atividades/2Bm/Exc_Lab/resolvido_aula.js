serie_Elementos = [67, 58, 33, 29, 12, 90, 5, 1, 100, 6, 10, 18];
//serie_Elementos = [9.2,52,978,5.69,72,43.590,-28,-0.87,293,4,-5.2,4,357,-24,8,7,2,6,5];
//serie_Elementos = [67, 58, 33, 29, 12, 90, 5, 1, 100, 6, 10, 18];
//serie_Elementos = [ -0.45, -0.62, -0.84, 0.37, 0.56,  -0.295, 0.672, -0.934, 0.875, .23, 0.745, 0.027, 0.24];
//serie_Elementos = [[71,86], [72, 62], [45, 62, 84, 37], [56, 672, 934], [875, 023, 745, 027], 24];
//serie_Elementos = [-71, -34, -62, -45, -62, -37, 0.001, -56, -95, -672, -934, -875, -023, -745];
console.clear();
tamanho_Vetor = serie_Elementos.length;
sE_Original = [];
for (let i = 0; i < tamanho_Vetor; i++) {
  sE_Original.push(serie_Elementos[i]);
}
cont = 0;
for (let i = 0; i < tamanho_Vetor; i++) {
  for (let j = i + 1; j < tamanho_Vetor; j++) {
    if (serie_Elementos[i] > serie_Elementos[j]) {
      let troca_Elemento = serie_Elementos[i];
      serie_Elementos[i] = serie_Elementos[j];
      serie_Elementos[j] = troca_Elemento;
    }
    cont++;
  }
}
console.log("Número de iterações com o For:", cont);
console.log("Vetor na ordem original:", ...sE_Original);
console.log("Vetor ordenado:", ...serie_Elementos);
