let _tableHist = [];
let linha = 1;

do {
  let _opc = prompt(
    "Escolha a operação conforme opção:\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Módulo"
  );

  let _val1 = parseFloat(prompt("Insira o primeiro valor"));
  let _val2 = parseFloat(prompt("Insira o segundo valor"));
  let _result;

  if (isNaN(_val1) || isNaN(_val2)) {
    _tableHist.push(
      "# " + linha + ": O valor digitado não corresponde a valor numérico"
    );
  } else {
    if (_opc == 1) {
      _result = _val1 + _val2;
      _tableHist.push(
        "# " +
          linha +
          ": Operação <i>SOMA</i>: " +
          _val1 +
          " + " +
          _val2 +
          " = " +
          _result.toFixed(2).replace(".", ",")
      );
    } else if (_opc == 2) {
      _result = _val1 - _val2;
      _tableHist.push(
        "# " +
          linha +
          ": Operação <i>SUBTRAÇÃO</i>: " +
          _val1 +
          " - " +
          _val2 +
          " = " +
          _result.toFixed(2).replace(".", ",")
      );
    } else if (_opc == 3) {
      _result = _val1 * _val2;
      _tableHist.push(
        "# " +
          linha +
          ": Operação <i>MULTIPLICAÇÃO</i>: " +
          _val1 +
          " * " +
          _val2 +
          " = " +
          _result.toFixed(2).replace(".", ",")
      );
    } else if (_opc == 4) {
      _result = _val1 / _val2;
      _tableHist.push(
        "# " +
          linha +
          ": Operação <i>DIVISÃO</i>: " +
          _val1 +
          " / " +
          _val2 +
          " = " +
          _result.toFixed(2).replace(".", ",")
      );
    } else if (_opc == 5) {
      _result = _val1 % _val2;
      _tableHist.push(
        "# " +
          linha +
          ": Operação <i>MÓDULO</i>: " +
          _val1 +
          " % " +
          _val2 +
          " = " +
          _result.toFixed(2).replace(".", ",")
      );
    } else {
      _tableHist.push("# " + linha + ": <b>Operação inválida </b>");
    }
  }

  linha++;

  _end = prompt(
    "Deseja realizar outra operação?\n(N para sair ou Enter (OK) para continuar)"
  );
} while (_end !== "N" && _end !== "n");

let _auxTabela =
  '<table style="border-collapse: collapse; border: 2px solid black; padding: 5px;">';

for (let _setLine = 0; _setLine < _tableHist.length; _setLine++) {
  _auxTabela += "<tr>";
  _auxTabela += "<td>" + _tableHist[_setLine] + "</td>";
  _auxTabela += "</tr>";
}

_auxTabela += "</table>";
document.getElementById("_result").innerHTML = _auxTabela;
