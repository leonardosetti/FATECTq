const readline = require("readline-sync");

var a = +readline.question("numero:");
var cont = 0;

if (verifica(a)) {
  if (retorna(a)) {
    console.log("Numero é primo");
  } else {
    console.log("Número não é primo");
  }
  console.log("O programa rodou", cont, "vezes");
} else {
  console.log("Digite um número enter 1 e 200");
}

function verifica(a) {
  if (a < 1 || a > 200) return false;
  else return true;
}

function retorna(a) {
  if (a == 1) return false;
  else {
    if (a == 2) return true;
    else if (a % 2 == 0) return false;
    else {
      for (i = 3; i < a; i += 2) {
        if (a % i == 0) return false;
        cont++;
      }
      return true;
    }
  }
}
