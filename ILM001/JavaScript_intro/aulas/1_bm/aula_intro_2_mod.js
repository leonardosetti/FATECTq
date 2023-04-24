// Trabalhando com conversão de tipos de variáveis

// Todo parâmetro passado via interface é passado com string,
// portanto os dados devem ser convertidos no formato desejado de cada tipo de dados

// Capturando dados do usuário via console:

// o módulo readline é necessário:
//npm install readline-sync
//npm install express --save

const readline = require("readline-sync");
//var entrada_dados = readline.question("\ninforme o nome de usuário\n");

const title_frame_tcL = "\u250C"; // top corner symbol Left
const title_frame_tcR = "\u2510"; // top corner symbol Right
const title_frame_tbl0 = "\u2500"; // top & bottom line
const title_frame_slb = "\u2502"; // Side Line box
const title_frame_bcL = "\u2514"; // bottom corner symbol Left
const title_frame_bcR = "\u2518"; // bottom corner symbol Right
const title_name = "Cálculo da área do Triângulo";
console.log(title_frame_tcL + title_frame_tbl0.repeat(120) + title_frame_tcR);
console.log(title_frame_slb + " ".repeat(120) + title_frame_slb);
console.log(
  title_frame_slb +
    " ".repeat(60 - title_name.length / 2) +
    title_name +
    " ".repeat(60 - title_name.length / 2) +
    title_frame_slb
);
console.log(
  ("\r\n" + title_frame_slb + " ".repeat(120) + title_frame_slb).repeat(2) // monta linhas em branco
);

var altura_t = parseFloat(
  readline.question(
    title_frame_slb +
      " ".repeat(60 - altura_t.length / 2) + // não funciona porque o número de  posições digitadas pelo usuário ainda é desconhecido. POr tanto o valor deve ser omitido durante o input e revelado no próximo argumento. (eu acho)
      "Informe a altura do triângulo: " +
      " ".repeat(60 - altura_t.length / 2) +
      title_frame_slb
  )
);
var base_t = parseFloat(
  readline.question(
    title_frame_slb +
      " ".repeat(60 - base_t.length / 2) +
      "Informe a base do triângulo: " +
      " ".repeat(60 - base_t.length / 2) +
      title_frame_slb
  )
);
var area_t = ("A área do triângulo é:", (base_t * altura_t) / 2, "cm² ");

console.log(
  title_frame_slb +
    " ".repeat(60 - area_t.length / 2) +
    area_t +
    " ".repeat(60 - area_t.length / 2) +
    title_frame_slb
);
console.log(title_frame_bcL + title_frame_tbl0.repeat(120) + title_frame_bcR);
