// // arrays: Variável para multiplos valores indexados.

// nome = [1, 2, 3, 4, 5, 6];

// console.log(nome.slice(2, 4)); // range de dados dentro do rray array.slice(a,b)

// multi_type = ["Leonardo", "20", 13.1, true, (sexo = ["m", "f"]), 0];

// console.log(multi_type);
// console.log(typeof multi_type.slice(0, 6));

// multi_type.push("Amazonas");
// console.log(multi_type);

// multi_type.pop();
// console.log(multi_type);

// multi_type.shift(); // insere na posição 0
// console.log(multi_type);

// console.log(typeof multi_type[1]);
// console.log(multi_type);

// multi_type.splice(3, 0, "NOVO ELEMENTO COM SPLICE"); // insere na posição à direita após o índice
// console.log(multi_type);

// multi_type.splice(4, 1); // remove conteúdo da posicção do índice
// console.log(multi_type);

// multi_type.splice(5, 1, "SUBSTITUI ELEMENTO NA POSIÇÂO DO ÍNDICE"); // insere na posição à direita após o índice
// console.log(multi_type);

// teste de array:

vetor_str = [
  "casa",
  "carro",
  "fruta",
  "martelo",
  "chave",
  "flor",
  "árvore",
  "sol",
  "lua",
  "mar",
  "rua",
];
console.log(vetor_str);

vetor_str.pop(); // remove último elemento ["rua"]
console.log(vetor_str);

vetor_str.shift();
console.log(vetor_str);
