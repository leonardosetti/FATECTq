
public class Professor extends Pessoa {

	private String titulacao;
	private double salario;
	private Orientacao[] orientacao;

	public String getTitulacao() {
		return titulacao;
	}

	public void setTitulacao(String titulacao) {
		this.titulacao = titulacao;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	public Orientacao[] getOrientacao() {
		return orientacao;
	}

	public void setOrientacao(Orientacao[] orientacao) {
		this.orientacao = orientacao;
	}

}
