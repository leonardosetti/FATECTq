package juridico;

import estoque.Produto;

public class Fornecedor {

	private String cnpj;
	private String nome;
	private String cidade;
	private Produto produto[];

	public String getCnpj() {
		return cnpj;
	}

	public String getNome() {
		return nome;
	}

	public String getCidade() {
		return cidade;
	}

	public Produto[] getProduto() {
		return produto;
	}

	public void setCnpj(String cnpj) {
		this.cnpj = cnpj;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setCidade(String cidade) {
		this.cidade = cidade;
	}

	public void setProduto(Produto[] produto) {
		this.produto = produto;
	}

}
