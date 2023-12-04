
public class NotaFiscal implements Calculos {

	private double imposto;

	public double calcularJuros() {
		return taxa * this.imposto;
	}

	public double getImposto() {
		return imposto;
	}

	public void setImposto(double imposto) {
		this.imposto = imposto;
	}

}
