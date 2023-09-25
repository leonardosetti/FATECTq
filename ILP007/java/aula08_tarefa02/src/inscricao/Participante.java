package inscricao;

public class Participante {

	private String cpf;
	private String nome;
	private long inscricao;
	private Ficha ficha;
	
	public String getCpf() {
		return cpf;
	}
	public String getNome() {
		return nome;
	}
	public long getInscricao() {
		return inscricao;
	}
	public Ficha getFicha() {
		return ficha;
	}
	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public void setInscricao(long inscricao) {
		this.inscricao = inscricao;
	}
	public void setFicha(Ficha ficha) {
		this.ficha = ficha;
	}
}
