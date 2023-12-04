
public class Graduacao extends Aluno {

	private double prova;
	private double trabalho;

	public double calculaMedia() {
		return this.prova * 0.6 + this.trabalho * 0.4;
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
