
public class NotaFiscal extends Documento {

	private double valor;
	private double imposto;

	public double calculaTotal() {
		return this.imposto * this.valor;
	}

	public double getValor() {
		return valor;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public double getImposto() {
		return imposto;
	}

	public void setImposto(double imposto) {
		this.imposto = imposto;
	}

}
