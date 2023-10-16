package aula10_atividade01;

public class Contador extends Funcionario {
	private double adicional;

	public double calculaRecebimento() {
		return this.getSalario() - this.getIr() + this.adicional;
	}

	public double getAdicional() {
		return adicional;
	}

	public void setAdicional(double adicional) {
		this.adicional = adicional;
	}

}
