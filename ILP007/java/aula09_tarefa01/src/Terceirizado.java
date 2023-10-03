
public class Terceirizado extends Empregado {
	private double valorHora;
	private String setor;
	private Empregado empregado;

	public double getValorHora() {
		return valorHora;
	}

	public String getSetor() {
		return setor;
	}

	public void setValorHora(double valorHora) {
		this.valorHora = valorHora;
	}

	public void setSetor(String setor) {
		this.setor = setor;
	}

	public Empregado getEmpregado() {
		return empregado;
	}

	public void setEmpregado(Empregado empregado) {
		this.empregado = empregado;
	}

}
