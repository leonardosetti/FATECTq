
public class Funcionario {

	private String nome;
	private String ctps;
	private double salario;
	private Departamento departamento;
	private Relatorio relatorio[];

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCtps() {
		return ctps;
	}

	public void setCtps(String ctps) {
		this.ctps = ctps;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	public Departamento getDepartamento() {
		return departamento;
	}

	public void setDepartamento(Departamento departamento) {
		this.departamento = departamento;
	}

	public Relatorio[] getRelatorio() {
		return relatorio;
	}

	public void setRelatorio(Relatorio[] relatorio) {
		this.relatorio = relatorio;
	}

}
