var pessoa = {
  nome: "Lucio Silva",
  idade: "34",
  profissao: ["motorsta", "tecnico inf", "padeiro", "pedreiro"],
};

console.log(pessoa.profissao[2]);

// function nome(parametro) {

// }

// function nome(parametro) {
// return valor // toda a função é suybstituida pelo valor retornado
// }

function quadrado(b) {
  b = b * b;
  return b;
}

a = quadrado(3);

console.log(typeof quadrado(1), quadrado(1));
console.log(typeof a, a);

console.log(typeof pessoa);

function calculo(a, vezes) {
  for (let i = 0; i < vezes + 1; i++) {
    console.log(i, "vezes", a, "=", a * i);
  }
}
calculo(6, 12);
