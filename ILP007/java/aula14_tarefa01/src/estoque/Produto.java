package estoque;

import juridico.Fornecedor;

public class Produto {

	private String nome;
	private int estoque;
	private double preco;
	private Fornecedor fornecedor;

	public String getNome() {
		return nome;
	}

	public int getEstoque() {
		return estoque;
	}

	public double getPreco() {
		return preco;
	}

	public Fornecedor getFornecedor() {
		return fornecedor;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setEstoque(int estoque) {
		this.estoque = estoque;
	}

	public void setPreco(double preco) {
		this.preco = preco;
	}

	public void setFornecedor(Fornecedor fornecedor) {
		this.fornecedor = fornecedor;
	}

}
