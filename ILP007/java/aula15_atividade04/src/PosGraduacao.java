
public class PosGraduacao extends Aluno {

	private double banca;
	private double artigo;

	public double calculaMedia() {
		return this.banca * 0.8 + this.artigo * 0.2;
	}

	public double getBanca() {
		return banca;
	}

	public void setBanca(double banca) {
		this.banca = banca;
	}

	public double getArtigo() {
		return artigo;
	}

	public void setArtigo(double artigo) {
		this.artigo = artigo;
	}

}
