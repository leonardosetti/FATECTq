function validarValor(_val) {
    if (!isNaN(_val) && _val !== '') {
        return true;
    } else {
        return false;
    }
}

window.onload = () => {
    document.getElementById('btnCalculo').onclick = () => {

        let _val1 = document.getElementById('numero1').value;
        let _val2 = document.getElementById('numero2').value;
        let _oper = document.getElementById('operacao').value;
        let _result = '';

        if (validarValor(_val1) && validarValor(_val2)) {
            _val1 = parseFloat(_val1);
            _val2 = parseFloat(_val2);
            switch (_oper) { // Corrigido para _oper
                case '+':
                    _result = _val1 + _val2;
                    break;
                case '-':
                    _result = _val1 - _val2;
                    break;
                case '*':
                    _result = _val1 * _val2;
                    break;
                case '/':
                    if (_val2 !== 0) {
                        _result = _val1 / _val2;
                    } else {
                        _result = 'Número 2 não pode ser 0';
                    }
                    break;
                case '%':
                    if (_val2 !== 0) {
                        _result = _val1 % _val2;
                    } else {
                        _result = 'Número 2 não pode ser 0';
                    }
                    break;
                default:
                    _result = 'Operação inválida';
            }
        } else {
            _result = 'Informe apenas números!';
        }

        document.getElementById('resultado').innerHTML = _result;
    }
    document.getElementById('numero2').onkeypress = (evento)=>{
        let _tecla = evento.which;
        //alert(evento.which);
        // if (tecla == 13){
        //     document.getElementById('btnCalculo').focus();

        // }
        if(_tecla < 48 || _tecla > 57){
            evento.preventDefault();
        }
    }
}
