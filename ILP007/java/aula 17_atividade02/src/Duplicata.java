
public class Duplicata implements Calculos {

	private double atraso;

	public double calcularJuros() {
		return taxa * this.atraso / 30;
	}

	public double getAtraso() {
		return atraso;
	}

	public void setAtraso(double atraso) {
		this.atraso = atraso;
	}

}
