let cidade = prompt('Digite a cidade para saber dos eventos');
cidade = cidade.toUpperCase();

let resposta = '';

if (cidade == 'TAQUARITINGA') {
    resposta = (cidade + ' Evento: Carnaval do Batatão')
} else if (cidade == 'MATÃO') {
    resposta = (cidade + ' Evento: Corpus Christi')
} else {
    resposta = 'Cidade não listada'
}



switch (cidade) {
    case 'ARARAQUARA':
    case 'JABOTICABAL':
        resposta = (cidade + ' Evento: Shopping')
        break;

    case 'GUARIBA':
        resposta = (cidade + ' Evento: Usina')
        break;

    case 'SÃO CARLOS':
        resposta = (cidade + ' Evento: TUSCA')
        break;

    default:
        break;
}

document.write(resposta);