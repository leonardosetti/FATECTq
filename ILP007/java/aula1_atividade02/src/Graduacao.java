
public class Graduacao extends Aluno {

	private double tcc;
	private double estagio;

	public double calculaMedia() {
		return this.getProva() * 0.3 + this.getTrabalho() * 0.3 + this.tcc * 0.2 + this.estagio * 0.2;
	}

	public double getTcc() {
		return tcc;
	}

	public void setTcc(double tcc) {
		this.tcc = tcc;
	}

	public double getEstagio() {
		return estagio;
	}

	public void setEstagio(double estagio) {
		this.estagio = estagio;
	}

}
