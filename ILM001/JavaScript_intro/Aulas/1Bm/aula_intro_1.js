// Esta é uma linha de comentário.

/*
Este é
um bloco 
de comentários.
*/

// Definição ed variáveis:

var val_1; // sem atribuição de valor (tipo: undefined)
console.log(val_1, typeof val_1);
var val_1 = null; // sem atribuição de valor (tipo: null)
console.log(val_1, typeof val_1);

// Variáveis em JS são dinâmicas de tipagem fraca, podem ser instanciadas com diferentes valores e/ou tipo a qualquer momento:

var var_mutante = 1;
console.log(
  "O valor da variável mutante é:",
  var_mutante,
  "e seu tipo atual é:",
  typeof var_mutante
);
var_mutante = 0.1;
console.log(
  "O valor da variável mutante é:",
  var_mutante,
  "e seu tipo atual é:",
  typeof var_mutante
);
var_mutante = "Texto - Leonardo Setti";
console.log(
  "O valor da variável mutante é:",
  var_mutante,
  "e seu tipo atual é:",
  typeof var_mutante
);
var_mutante = false;
console.log(
  "O valor da variável mutante é:",
  var_mutante,
  "e seu tipo atual é:",
  typeof var_mutante
);
