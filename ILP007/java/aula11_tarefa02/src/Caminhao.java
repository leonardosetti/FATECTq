
public class Caminhao {

	private String placa;
	private String cor;
	private double tara;
	private double combustivel;

	public double calculaPeso() {
		return tara + (combustivel * 0.9);
	}

	public String getPlaca() {
		return placa;
	}

	public String getCor() {
		return cor;
	}

	public double getTara() {
		return tara;
	}

	public double getCombustivel() {
		return combustivel;
	}

	public void setPlaca(String placa) {
		this.placa = placa;
	}

	public void setCor(String cor) {
		this.cor = cor;
	}

	public void setTara(double tara) {
		this.tara = tara;
	}

	public void setCombustivel(double combustivel) {
		this.combustivel = combustivel;
	}

}
