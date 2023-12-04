
public class Operacional extends Funcionario {

	private int horas;
	private double valor;

	public double calculaSalario() {
		return getSalario() + this.horas * this.valor;
	}

	public int getHoras() {
		return horas;
	}

	public double getValor() {
		return valor;
	}

	public void setHoras(int horas) {
		this.horas = horas;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

}
