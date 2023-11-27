class Produto {
  constructor(codigo, descricao, quantidade, valor) {
    this.codigo = codigo;
    this.descricao = descricao;
    this.quantidade = quantidade;
    this.valor = valor;
  }
}

var listaProdutos = [];
var posicao = -1; // deve ser feito o parseInt desta variável no método de alteração
// foi usado o valor -1 por causa do parse int quando o valor é vazio
var posX = -1;

function cadastrar(objeto, lista) {
  lista.push(objeto);
}

function alterar(objeto, lista, pos) {
  lista[pos] = objeto;
}

function excluir(lista, pos) {
  lista.splice(pos, 1);
}

function listarProduto(lista) {
  let auxHtml;
  for (let i = 0; i < listaProdutos.length; i++) {
    auxHtml += "<tr>";
    auxHtml += "<td>" + lista[i].codigo + "</td>";
    auxHtml += "<td>" + lista[i].descricao + "</td>";
    auxHtml += "<td>" + lista[i].quantidade + "</td>";
    auxHtml += "<td>" + lista[i].valor + "</td>";
    auxHtml += '<td><a href"#" class="btAlterar" rel=" ' + i + '"></a></td>';
    auxHtml += '<td><a href"#" class="btExcluir" rel=" ' + i + '"></a></td>';
    auxHtml += "</tr>";
  }
  return auxHtml;
}

$(document).ready(() => {
  $("#btSalvar").click(() => {
    /* // let codigo = document.getElementById('codigo').value // jeitinho sem JQuery
     let codigo = $("#codigo").val();
     let descricao = $("#descricao").val();
     let quantidade = $("#quantidade").val();
     let valor = $("#valor").val();
 
     let produto = new Produto(codigo, descricao, quantidade, valor);
     cadastrar(produto, listaProdutos);
     $("#tbProduto").html(listarProduto(listaProdutos));*/

    //short-code:

    let produto = new Produto(
      $("#codigo").val(),
      $("#descricao").val(),
      $("#quantidade").val(),
      $("#valor").val()
    );

    if (posicao == -1) {
      cadastrar(produto, listaProdutos);
    } else {
      alterar(produto, listaProdutos, posicao);
      posicao = -1;
    }

    $("#tbProduto").html(listarProduto(listaProdutos));
    $("input").val("");
  });

  $("#tbProduto").on("click", ".btAlterar", (evento) => {
    posicao = evento.target.getAttribute("rel");
    posicao = parseInt(posicao); // Importante para browser Chrome

    $("#codigo").val(listaProdutos[posicao].codigo);
    $("#descricao").val(listaProdutos[posicao].descricao);
    $("#quantidade").val(listaProdutos[posicao].quantidade);
    $("#valor").val(listaProdutos[posicao].valor);
  });

  $("#tbProduto").on("click", ".btExcluir", (evento) => {
    posX = evento.target.getAttribute("rel");
    posX = parseInt(posX);

    excluir(listaProdutos, posX);
    $("#tbProduto").html("");
    $("#tbProduto").html(listarProduto(listaProdutos));
  });

  $("#btAjax").click(() => {
    $.ajax({
      url: "http://date.jsontest.com/",
      method: "GET",
    }).done(function (retorno) {
      $("#resposta").html(retorno.time);
    });
  });
});
