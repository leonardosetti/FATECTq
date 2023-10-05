class Cliente {
  constructor(cpf, nome, endereco, telefone) {
    this.cpf = cpf;
    this.nome = nome;
    this.endereco = endereco;
    this.telefone = telefone;
  }
  mostraNomeCpf() {
    return this.nome + " " + this.cpf;
  }
}
let cliente1 = new Cliente(
  "32954292864",
  "Michal Jackson",
  "Rua Esquerda - 1917",
  "+551699787-2885"
);
let cliente2 = new Cliente(
  "54811265455",
  "Maria Antonian",
  "Rua Esquerda - 1911",
  "+551698878-9544"
);

// alert(cliente1.mostraNomeCpf());
// alert(cliente2.nome);
// alert(cliente2.cpf);

window.onload = () => {
  document.getElementById("frmCadastro").onsubmit = (evento) => {
    evento.preventDefault();
    let cpf = document.getElementById("cpf").value;
    let nome = document.getElementById("nome").value;
    let endereco = document.getElementById("endereco").value;
    let telefone = document.getElementById("telefone").value;

    let novoCliente = new Cliente(cpf, nome, endereco, telefone);
    let auxHtml = "CPF: " + novoCliente.cpf + "<br />";
    auxHtml += "Nome: " + novoCliente.nome + "<br />";
    auxHtml += "Endereço: " + novoCliente.endereco + "<br />";
    auxHtml += "Telefone: " + novoCliente.telefone + "<br />";

    document.getElementById("dados").innerHTML = auxHtml;
  };
};
