
public class PosGraduacao extends Aluno {

	private double artigo;
	private double banca;

	public double calculaMedia() {
		return this.getProva() * 0.4 + this.getTrabalho() * 0.1 + this.artigo * 0.2 + this.banca * 0.3;
	}

	public double getArtigo() {
		return artigo;
	}

	public void setArtigo(double artigo) {
		this.artigo = artigo;
	}

	public double getBanca() {
		return banca;
	}

	public void setBanca(double banca) {
		this.banca = banca;
	}

}
