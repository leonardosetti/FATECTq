
const body = document.createElement('body');
const header = document.createElement('header');
const h1 = document.createElement('h1');
h1.textContent = 'Cálculo';
header.appendChild(h1);

const main = document.createElement('main');
const fieldset = document.createElement('fieldset');

const label1 = document.createElement('label');
label1.setAttribute('for', 'numero1');
label1.textContent = 'Número 1';
const input1 = document.createElement('input');
input1.setAttribute('type', 'number');
input1.setAttribute('id', 'numero1');
input1.setAttribute('minlength', '1');
input1.setAttribute('placeholder', 'Preencha com o primeiro valor');

const label2 = document.createElement('label');
label2.setAttribute('for', 'numero2');
label2.textContent = 'Número 2';
const input2 = document.createElement('input');
input2.setAttribute('type', 'number');
input2.setAttribute('id', 'numero2');
input2.setAttribute('minlength', '1');
input2.setAttribute('placeholder', 'Preencha com o segundo valor');

const label3 = document.createElement('label');
label3.setAttribute('for', 'operacao');
label3.textContent = 'Operação';
const select = document.createElement('select');
select.setAttribute('name', 'operacao');
select.setAttribute('id', 'operacao');

const option1 = document.createElement('option');
option1.setAttribute('value', '+');
option1.textContent = 'Adição';

const option2 = document.createElement('option');
option2.setAttribute('value', '-');
option2.textContent = 'Subtração';

const option3 = document.createElement('option');
option3.setAttribute('value', '*');
option3.textContent = 'Multiplicação';

const option4 = document.createElement('option');
option4.setAttribute('value', '/');
option4.textContent = 'Divisão';

const option5 = document.createElement('option');
option5.setAttribute('value', '%');
option5.textContent = 'Módulo';

const button = document.createElement('button');
button.setAttribute('type', 'button');
button.setAttribute('id', 'btnCalculo');
button.textContent = 'Calcular';

fieldset.appendChild(label1);
fieldset.appendChild(input1);
fieldset.appendChild(label2);
fieldset.appendChild(input2);
fieldset.appendChild(label3);
select.appendChild(option1);
select.appendChild(option2);
select.appendChild(option3);
select.appendChild(option4);
select.appendChild(option5);
fieldset.appendChild(select);
fieldset.appendChild(button);

const br = document.createElement('br');
fieldset.appendChild(br);

const fieldset2 = document.createElement('fieldset');
const legend = document.createElement('legend');
legend.textContent = 'Resultado';
const p = document.createElement('p');
p.setAttribute('id', 'resultado');
const b = document.createElement('b');
b.textContent = 'Resultado aqui!';
p.appendChild(b);
fieldset2.appendChild(legend);
fieldset2.appendChild(p);

main.appendChild(fieldset);
main.appendChild(fieldset2);

body.appendChild(header);
body.appendChild(main);

// Adicione o corpo ao documento
document.documentElement.appendChild(body);

