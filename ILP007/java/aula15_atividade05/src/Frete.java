
public class Frete extends Documento {

	private double km;
	private double peso;

	public double calculaTotal() {
		return this.peso * 0.1 + this.km * 0.4;
	}

	public double getKm() {
		return km;
	}

	public void setKm(double km) {
		this.km = km;
	}

	public double getPeso() {
		return peso;
	}

	public void setPeso(double peso) {
		this.peso = peso;
	}

}
