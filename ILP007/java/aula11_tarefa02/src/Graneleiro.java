
public class Graneleiro extends Caminhao {
	private double volume;
	private double comprimento;
	private Caminhao caminhao;

	public double calculaPeso() {
		return this.getTara() + (this.getCombustivel() * 0.9) + ((volume * 0.3) * (comprimento * 0.2));
	}

	public double getVolume() {
		return volume;
	}

	public double getComprimento() {
		return comprimento;
	}

	public Caminhao getCaminhao() {
		return caminhao;
	}

	public void setVolume(double volume) {
		this.volume = volume;
	}

	public void setComprimento(double comprimento) {
		this.comprimento = comprimento;
	}

	public void setCaminhao(Caminhao caminhao) {
		this.caminhao = caminhao;
	}

}
