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
   /* // let codigo = document.getElementById('codigo').value // jeitinho sem JQuery
    let codigo = $("#codigo").val();
    let descricao = $("#descricao").val();
    let quantidade = $("#quantidade").val();
    let valor = $("#valor").val();

    let produto = new Produto(codigo, descricao, quantidade, valor);
    cadastrar(produto, listaProdutos);
    $("#tbProduto").html(listarProduto(listaProdutos));*/

    //short-code:
    cadastrar (new Produto($('#codigo').val(),$('#descricao').val(),$('#quantidade').val(),$('#valor').val()), listaProdutos);
    $("#tbProduto").html(listarProduto(listaProdutos));

    $('input').val('');
  });
});
