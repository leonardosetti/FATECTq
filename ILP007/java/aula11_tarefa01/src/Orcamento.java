
public class Orcamento extends Documento {

	private double pecas;
	private double maoDeObra;
	private Documento documento;

	public double calculaTotal() {
		return this.getValor() + this.getJuros() + pecas + maoDeObra;
	}

	public double getPecas() {
		return pecas;
	}

	public double getMaoDeObra() {
		return maoDeObra;
	}

	public Documento getDocumento() {
		return documento;
	}

	public void setPecas(double pecas) {
		this.pecas = pecas;
	}

	public void setMaoDeObra(double maoDeObra) {
		this.maoDeObra = maoDeObra;
	}

	public void setDocumento(Documento documento) {
		this.documento = documento;
	}

}
