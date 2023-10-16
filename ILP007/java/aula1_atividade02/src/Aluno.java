
public class Aluno {

	private long ra;
	private String nome;
	private double prova;
	private double trabalho;

	public double calculaMedia() {
		return prova * 0.6 + trabalho * 0.4;

	}

	public long getRa() {
		return ra;
	}

	public void setRa(long ra) {
		this.ra = ra;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public double getProva() {
		return prova;
	}

	public void setProva(double prova) {
		this.prova = prova;
	}

	public double getTrabalho() {
		return trabalho;
	}

	public void setTrabalho(double trabalho) {
		this.trabalho = trabalho;
	}

}
