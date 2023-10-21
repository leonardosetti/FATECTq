package aula10_atividade01;

public class Funcionario {

	private long ctps;
	private String nome;
	private double salario;
	private double ir;

	public double calculaRecebimento() {
		return salario - ir;
	}

	public long getCtps() {
		return ctps;
	}

	public void setCtps(long ctps) {
		this.ctps = ctps;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	public double getIr() {
		return ir;
	}

	public void setIr(double ir) {
		this.ir = ir;
	}

}
