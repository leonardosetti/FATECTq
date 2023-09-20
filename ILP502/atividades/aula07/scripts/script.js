function calcJuros(_valor, _taxa) {
    let _juros = _valor * (_taxa / 100);
    return _juros

}

window.onload = function () {
    document.getElementById('btnCalcular').onclick = function () {

        let _valor = document.getElementById('_valor').value;
        let _taxa = document.getElementById('_taxa').value;

        if (!isNaN(_valor) && _valor != '') {

            _taxa = parseFloat(_taxa);
            _valor = parseFloat(_valor);

            //alert(calcJuros(_valor, _taxa).toFixed(2).replace('.',','));
            //document.write(calcJuros(_valor, _taxa).toFixed(2).replace('.',','));

            document.getElementById('resultado').innerHTML = (calcJuros(_valor, _taxa).toFixed(2).replace('.', ','));

        } else {
            alert('Valor não suportado');

        }
    }
}