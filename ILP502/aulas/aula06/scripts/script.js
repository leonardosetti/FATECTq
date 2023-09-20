// let _numero = parseInt(prompt('Informe numero:'));

// while (_numero > 10) {
//     _console.log(_numero);
//     _numero--;
// }

// do {
//     console.log(_numero);
//     _numero--
// } while (_numero > 10);

// for (let i=0;i<_numero;i++)
// {
//     console.log(i)
// }

// for (item in document){
//     console.log(item)
// }

// let _times = ["Brasil", "Peru", "Colômbia", "Equador"];
// _times.push("Argentina");
// _times.push("Bolívia");
// //_times[2] = "Chile";

// //_times.splice(0, 2);
// let _auxHtml = "";
// for (let i = 0; i < _times.length; i++) {
//   _auxHtml += _times[i] + "<br />";
// }

// document.write(_auxHtml);

let _tabela = [];
_tabela.push([1, 2, 3]);
_tabela.push([4, 5, 6]);
_tabela.push([7, 8, 9]);

let _auxTabela =
  '<table style="border-collapse: collapse; border: 1px solid black;">';

for (let _linha = 0; _linha < _tabela.length; _linha++) {
  _auxTabela += "<tr>"; // Abertura de uma nova linha (row)
  for (let _col = 0; _col < _tabela[_linha].length; _col++) {
    _auxTabela +=
      "<td style='border: 1px solid black; padding: 10px;'>" +
      _tabela[_linha][_col] +
      "</td>";
  }
  _auxTabela += "</tr>";
}
_auxTabela += "</table>";
document.write(_auxTabela);
