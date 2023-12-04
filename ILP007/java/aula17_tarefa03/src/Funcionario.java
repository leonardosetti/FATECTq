
public abstract class Funcionario {

	private long ctps;
	private String nome;
	private double salario;

	public abstract double calculaSalario();

	public long getCtps() {
		return ctps;
	}

	public String getNome() {
		return nome;
	}

	public double getSalario() {
		return salario;
	}

	public void setCtps(long ctps) {
		this.ctps = ctps;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

}
