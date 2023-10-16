window.onload = () => {
    document.getElementById("frmProva").onsubmit = (evento) => {
        evento.preventDefault();

        let _tableHist = [];

        let respostas = ['Resposta1', "Resposta2", "Resposta3", "Resposta4", "Resposta5"];
        let rsp;
        let linha = 1;
        if (document.getElementById('q1').value) {
            rsp = respostas[0];
            _tableHist.push(
                "Resposta da Questão1" +
                linha +
                rsp
            );
        } else if (document.getElementById('q2').value) {
            rsp = respostas[1];
            _tableHist.push(
                "Resposta da Questão1" +
                linha +
                rsp
            );
        }
        else if (document.getElementById('q3').value) {
            rsp = respostas[2];
            _tableHist.push(
                "Resposta da Questão1" +
                linha +
                rsp
            );
        }
        else if (document.getElementById('q4').value) {
            rsp = respostas[3];
            _tableHist.push(
                "Resposta da Questão1" +
                linha +
                rsp
            );

        } else if (document.getElementById('q5').value) {
            rsp = respostas[4];
            _tableHist.push(
                "Resposta da Questão1" +
                linha +
                rsp
            );
        }

        linha++;
        let _auxTabela =
        '<table style="border-collapse: collapse; border: 2px solid black; padding: 5px;">';

    for (let _setLine = 0; _setLine < _tableHist.length; _setLine++) {
        _auxTabela += "<tr>";
        _auxTabela += "<td>" + _tableHist[_setLine] + "</td>";
        _auxTabela += "</tr>";
    }

    _auxTabela += "</table>";
    document.getElementById("respostas").innerHTML = _auxTabela;


    }


};

