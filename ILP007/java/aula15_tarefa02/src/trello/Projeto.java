package trello;

import rh.Funcionario;

public class Projeto {

	private String titulo;
	private double orcamento;
	private Funcionario[] funcionario;

	public String getTitulo() {
		return titulo;
	}

	public double getOrcamento() {
		return orcamento;
	}

	public Funcionario[] getFuncionario() {
		return funcionario;
	}

	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}

	public void setOrcamento(double orcamento) {
		this.orcamento = orcamento;
	}

	public void setFuncionario(Funcionario[] funcionario) {
		this.funcionario = funcionario;
	}

}
