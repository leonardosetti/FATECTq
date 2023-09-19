let _val1 = prompt('Insir o primeiro valor') ;
let _val2 = prompt('Insira o segundo valor');
let _result;
let _opc = prompt('Escolha a operação conforme opção:\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão')

do{
prompt
    if (isNaN(_val1) || isNaN(_val1)){
        let _auxHtml = '<b>O valor digitado nã corresponde a valor numérico</b>'
        document.write(_auxHtml);

    }
} while (_opc!='N');