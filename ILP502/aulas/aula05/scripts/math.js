let _opc = prompt(
  "Digite uma das opções:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Módulo\n"
);

let _val1 = prompt("Digite o primeiro valor para a operação");
let _val2 = prompt("Digite o segundo valor para a operação");
let _result;

// Converter as strings para números
_opc = parseInt(_opc);
_val1 = parseFloat(_val1);
_val2 = parseFloat(_val2);

if (isNaN(_opc) || isNaN(_val1) || isNaN(_val2)) {
  alert("Operação não suportada");
} else {
  switch (_opc) {
    case 1:
      _result = _val1 + _val2;
      break;
    case 2:
      _result = _val1 - _val2;
      break;
    case 3:
      _result = _val1 * _val2;
      break;
    case 4:
      _result = _val1 / _val2;
      break;
    case 5:
      _result = _val1 % _val2;
      break;
    default:
      alert("Opção inválida");
      break;
  }
  console.log(_opc, _val1, _val2, _result);
  document.write("<p><h3><b>" + _result + "</p></h3></b>");
}
