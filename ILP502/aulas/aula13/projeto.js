class Produto {
  constructor(codigo, descricao, quantidade, valor) {
    this.codigo = codigo;
    this.descricao = descricao;
    this.quantidade = quantidade;
    this.valor = valor;
  }
}

var listaProdutos = [];

function cadastrar(objeto, lista) {
  lista.push(objeto);
}

function listarProduto(lista) {
  let auxHtml;
  for (let i = 0; i < listaProdutos.length; i++) {
    auxHtml += "<tr>";
    auxHtml += "<td>" + lista[i].codigo + "</td>";
    auxHtml += "<td>" + lista[i].descricao + "</td>";
    auxHtml += "<td>" + lista[i].quantidade + "</td>";
    auxHtml += "<td>" + lista[i].valor + "</td>";
    auxHtml += "</tr>";
  }
  return auxHtml;
}



$(document).ready(() => {
  $("#btCadastrar").click(() => {
    alert("OK!");
  });
});
