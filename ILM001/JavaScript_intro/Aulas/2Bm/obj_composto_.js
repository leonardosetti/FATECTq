const readline = require("readline-sync");
var a = {
  Nome: "Fulano",
  Idade: 20,
  Endereco: {
    rua: "Rua Tal",
    numero: "12",
    bairro: "Centro",
    cidade: "Matao",
    estado: "SP",
  },
  profissao: ["DEsenvolvedor", "Analista", "Tester"],
};
var pessoa = {
  joao: {
    Idade: 20,
    Sexo: "Masculino",
    Profissao: ["Desenvolvedor", "PO"],
  },
  maria: {
    Idade: 20,
    Sexo: "Masculino",
    Profissao: [
      "Desenvolvedor",
      "Analista1",
      "Analista2",
      "Analista3",
      "Analista4",
    ],
    Endereco: {
      rua: "Rua Tal",
      numero: "12",
      bairro: "Centro",
      cidade: "Matao",
      estado: "SP",
    },
  },
};

console.log(pessoa.maria.Endereco);
