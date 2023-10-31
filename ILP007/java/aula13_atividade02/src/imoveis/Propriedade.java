package imoveis;

import cadastro.Proprietario;

public class Propriedade {
	private String endereco;
	private double area;
	private double valor;
	private Proprietario proprietario[];

	public String getEndereco() {
		return endereco;
	}

	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}

	public double getArea() {
		return area;
	}

	public void setArea(double area) {
		this.area = area;
	}

	public double getValor() {
		return valor;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public Proprietario[] getProprietario() {
		return proprietario;
	}

	public void setProprietario(Proprietario[] proprietario) {
		this.proprietario = proprietario;
	}

}
