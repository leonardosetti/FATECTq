// Aula 1: Conceitos básicos de sintaxe em JavaScript e trabalhando com variáveis. (28/02/2023)

var str_nome = "Leonardo Setti";
var num_valor = "13";
var boolean_teste = true;
var variavel_mutante = "o valor desta variável vai mudar a cada log.";

var val_1 = 5;
var val_2 = 88;
var aux_;

console.log(str_nome);
console.log(typeof str_nome);

console.log(num_valor);
console.log(typeof num_valor);

console.log(boolean_teste);
console.log(typeof boolean_teste);

boolean_teste != boolean_teste
console.log(boolean_teste);
console.log(typeof boolean_teste);

console.log(variavel_mutante);
console.log(typeof variavel_mutante);

variavel_mutante = str_nome;
console.log(variavel_mutante);
console.log(typeof variavel_mutante);

variavel_mutante = num_valor;
console.log(variavel_mutante);
console.log(typeof variavel_mutante);

variavel_mutante = boolean_teste;
console.log(variavel_mutante);
console.log(typeof variavel_mutante);

console.log(val_1);
console.log(val_2);
console.log(aux_);

aux_=val_1
val_1=val_2
val_2=aux_

console.log(val_1);
console.log(val_2);
console.log(aux_);

val_1++
val_2+=val_1
aux_+=val_1

console.log(val_1);
console.log(val_2);
console.log(aux_);

aux_ = 1
aux_+=aux_

console.log(aux_);