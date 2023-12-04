
public class Orcamento extends Documento {

	private double servico;
	private double peca;

	public double calculaTotal() {
		return this.peca + this.servico;
	}

	public double getServico() {
		return servico;
	}

	public void setServico(double servico) {
		this.servico = servico;
	}

	public double getPeca() {
		return peca;
	}

	public void setPeca(double peca) {
		this.peca = peca;
	}

}
