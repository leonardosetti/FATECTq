let _num1 = +prompt("Insira um número para o primeiro parâmetro: ");
let _num2 = +prompt("Insira um número para o segundo parâmetro: ");
let _opc = +prompt(
  "Escolha a operação que deseja realizar\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão"
);
let _resultado;

if (_opc == 1) {
  _resultado = _num1 + _num2;
  alert("Soma!\nO resultado é: " + _resultado);
} else if (_opc == 2) {
  _resultado = _num1 - _num2;
  alert("Subtração!\nO resultado é: " + _resultado);
} else if (_opc == 3) {
  _resultado = _num1 * _num2;
  alert("Multiplicação!\nO resultado é: " + _resultado);
} else if (_opc == 4) {
  _resultado = _num1 / _num2;
  alert("Divisão!\nO resultado é: " + _resultado);
} else {
  alert("Operação inválida");
}
