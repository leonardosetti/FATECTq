function alerta() {
  alert("Dios mio!");
}

function trocatexto() {
  document.getElementById("_titulo").innerHTML = "04/04/2024 - AULA JavaScript";
}

function setCss() {
  document.getElementById("_titulo").classList.add("tituloStyle");
}

function trocaCor() {
  document.getElementById("_titulo").style.color = "Yellow";
}

function trocaTextoClasse() {
  var tagsH3 = document.querySelectorAll(".subTitulo3");
}

function trocaTextoH2() {
  document.querySelectorAll("h2").innerHTML = "Trocando o texto do h2";
}

for (var i = 0; i < tagsH3.length; i++) {
  tagsH3[i].innerHTML = "Trocando o texto da classe";
  tagsH3[i].style.color = "blue";
}

function validarEntradaDados(){
    var numero = document.getElementById("numeroDigitado").value;
    var resposta;

    if(numero >= 1 && numero <=10)
resposta = "Número válido";
else
resposta = "Número Inválido";

document.getElementById("mensagemValidacao").innerHTML = resposta;
}