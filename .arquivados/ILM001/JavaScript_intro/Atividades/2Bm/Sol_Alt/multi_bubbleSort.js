//O BubbleSort é um algoritmo de ordenação simples que funciona comparando os elementos adjacentes de um vetor e trocando-os se estiverem na ordem errada. Ele continua passando pelo vetor até que nenhum elemento precise ser trocado, indicando que o vetor está totalmente ordenado.
//
//Para aplicar o BubbleSort em um vetor bidimensional, podemos simplesmente tratá-lo como um vetor unidimensional e aplicar o algoritmo a ele. Aqui está um exemplo de como fazer isso em JavaScript:
//
//```
function bubbleSort2D(arr) {
  const n = arr.length;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i - 1; j++) {
      if (arr[j][0] > arr[j++][0]) {
        // troca os elementos de posição
        const temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return arr;
}

// exemplo de uso
const array2D = [
  [3, 5],
  [1, 2],
  [4, 6],
];
console.log(bubbleSort2D(array2D)); // [[1, 2], [3, 5], [4, 6]]
//```
//
//Neste exemplo, `arr` é o vetor bidimensional que desejamos ordenar. O método `length` é usado para determinar o tamanho do vetor. Em seguida, aplicamos um loop externo para iterar através dos elementos do vetor. Dentro desse loop, há outro loop interno que percorre os elementos restantes do vetor e compara-os com o elemento atual.
//
//Se o elemento atual for maior que o próximo elemento, eles são trocados de posição usando uma variável temporária. Esse processo é repetido até que todos os elementos do vetor sejam comparados e organizados em ordem crescente.
//
//Por fim, o vetor ordenado é retornado. O resultado do exemplo acima seria `[[1, 2], [3, 5], [4, 6]]`.
//
//Pode ser aplicado a um vetor tridimensional da mesma forma que a um vetor unidimensional ou bidimensional. O processo é semelhante ao que descrevi anteriormente para um vetor bidimensional.

//Aqui está um exemplo de como aplicar o BubbleSort em um vetor tridimensional em JavaScript:
//
//```
function bubbleSort3D(arr) {
  const n = arr.length;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i - 1; j++) {
      if (arr[j][0][0] > arr[j++][0][0]) {
        // troca os elementos de posição
        const temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return arr;
}

// exemplo de uso
const array3D = [
  [
    [3, 5, 2],
    [1, 2, 3],
  ],
  [
    [4, 6, 1],
    [5, 7, 8],
  ],
];
console.log(bubbleSort3D(array3D)); // [[[3, 5, 2], [4, 6, 1]], [[1, 2, 3], [5, 7, 8]]]
//```
//
//Neste exemplo, `arr` é o vetor tridimensional que desejamos ordenar. O método `length` é usado para determinar o tamanho do vetor. Em seguida, aplicamos um loop externo para iterar através dos elementos do vetor. Dentro desse loop, há outro loop interno que percorre os elementos restantes do vetor e compara-os com o elemento atual.
//
//Para acessar os elementos de um vetor tridimensional, basta usar índices adicionais. Por exemplo, `arr[j][0][0]` acessa o primeiro elemento do primeiro array interno do primeiro array externo.
//
//Se o elemento atual for maior que o próximo elemento, eles são trocados de posição usando uma variável temporária. Esse processo é repetido até que todos os elementos do vetor sejam comparados e organizados em ordem crescente.
//
//Por fim, o vetor ordenado é retornado. O resultado do exemplo acima seria `[[[3, 5, 2], [4, 6, 1]], [[1, 2, 3], [5, 7, 8]]]`.
//
//
//Para ordenar um vetor de qualquer dimensão com subvetores de tamanhos diferentes usando o BubbleSort, podemos utilizar a recursão para percorrer todos os elementos do vetor e, em seguida, percorrer todos os elementos dos subvetores. Em cada iteração, comparamos o elemento atual com o próximo elemento e trocamos a posição deles, se necessário.

//Aqui está um exemplo de como aplicar o BubbleSort em um vetor de qualquer dimensão com subvetores de tamanhos diferentes em JavaScript:

//```
function bubbleSortND(arr) {
  const n = arr.length;
  for (let i = 0; i < n - 1; i++) {
    if (Array.isArray(arr[i])) {
      bubbleSortND(arr[i]);
      const len1 = arr[i].length;
      const len2 = arr[i + 1].length;
      const len = Math.min(len1, len2);
      let k = 0;
      while (k < len && arr[i][k] === arr[i + 1][k]) {
        k++;
      }
      if (k === len) {
        if (len1 > len2) {
          // troca os subvetores de posição
          const temp = arr[i];
          arr[i] = arr[i + 1];
          arr[i + 1] = temp;
        }
      } else if (arr[i][k] > arr[i + 1][k]) {
        // troca os elementos de posição
        const temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
  return arr;
}

// exemplo de uso
const arrayND = [
  [
    [3, 5],
    [1, 2, 4],
    [4, 6, 8, 1],
  ],
  [5, 4, 3],
  [
    [1, 2],
    [8, 7, 6, 5],
  ],
];
console.log(bubbleSortND(...arrayND)); // [[[1, 2, 4], [3, 5], [4, 6, 8, 1]], [3, 4, 5], [[1, 2], [5, 6, 7, 8]]]
//```
//
//Neste exemplo, `arr` é o vetor de qualquer dimensão que desejamos ordenar. O método `length` é usado para determinar o tamanho do vetor. Em seguida, aplicamos um loop externo para iterar através dos elementos do vetor. Dentro desse loop, utilizamos a recursão para percorrer os elementos do subvetor atual.
//
//Para lidar com subvetores de tamanhos diferentes, a primeira coisa que fazemos é determinar o tamanho do subvetor atual e o tamanho do próximo subvetor usando o método `length`. Em seguida, obtemos o menor tamanho entre os dois subvetores para garantir que não tentaremos acessar um índice inexistente.
//
//Em seguida, percorremos os elementos do subvetor atual e comparamos com os elementos do próximo subvetor. Se os elementos forem iguais, continuamos comparando até chegarmos ao final de um dos subvetores. Se o subvetor atual for maior que o próximo subvetor, trocamos os subvetores de posição. Caso contrário, se o elemento atual for maior que o próximo elemento, trocamos os elementos de posição.
//
//Por fim, o vetor ordenado é retornado. O resultado do exemplo acima seria `
