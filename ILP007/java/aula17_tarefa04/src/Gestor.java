
public abstract class Gestor {

	private String cpf;
	private String nome;
	
	public abstract double calculaPontuacao();

	public String getCpf() {
		return cpf;
	}

	public String getNome() {
		return nome;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}
	
	
}
