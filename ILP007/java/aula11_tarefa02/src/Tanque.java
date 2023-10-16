
public class Tanque extends Caminhao {
	private double litros;
	private Caminhao caminhao;

	public double calculaPeso() {
		return this.getTara() + (this.getCombustivel() * 0.9) + (litros * 0.6);
	}

	public double getLitros() {
		return litros;
	}

	public Caminhao getCaminhao() {
		return caminhao;
	}

	public void setLitros(double litros) {
		this.litros = litros;
	}

	public void setCaminhao(Caminhao caminhao) {
		this.caminhao = caminhao;
	}

}
