//var _nome = prompt("Informe o nome do usuário");
//var _sobreNome = prompt("Informe o sobrenome do usuário");
//var _nomeCompleto = _nome + " " + _sobreNome;
//alert("Seu nomezinho é: "+_nomeCompleto+"!")

//var _cidade = "Taquaritinga";
//let _faculdade = "FATEC";

/*let _val_1 = +(prompt('informe o valor para valor 1:'));
        let _val_2 = +(prompt('informe o valor para valor 2:'));
        //let _result = (_val_1 + _val_2);
        //alert('O resultado é: '+_result );
        alert('O resultado é: '+ (_val_1 + _val_2) );
        
        const PI = 3.1415926535897932;*/

/*let _resposta = confirm("Tem Certeza");
      alert(_resposta);*/

/* if (confirm("Deseja infomar sua idade?")) {
        let _idade = prompt("Informe a idade:");
        _idade = +_idade;
        if (_idade >= 18) {
          alert("Maior de idade");
        } else {
          alert("Menor de idade");
        }
      }*/

//let _val = +prompt("Informe um numero");

//if (_val < 0) {
//  alert("Negativo");
//} else if (_val > 0) {
//  alert("Positivo");
//} else {
//  alert("Zero");
//}

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
