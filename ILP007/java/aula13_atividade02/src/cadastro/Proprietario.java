package cadastro;

import imoveis.Propriedade;

public class Proprietario {

	private String nome;
	private String cidade;
	private Propriedade propriedade[];

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCidade() {
		return cidade;
	}

	public void setCidade(String cidade) {
		this.cidade = cidade;
	}

	public Propriedade[] getPropriedade() {
		return propriedade;
	}

	public void setPropriedade(Propriedade[] propriedade) {
		this.propriedade = propriedade;
	}

}
