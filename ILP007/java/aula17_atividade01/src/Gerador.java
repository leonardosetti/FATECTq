
public class Gerador implements Operacoes {

	private long numero;
	private String modelo;
	private double rotacao;
	private double forca;

	public double ajustaFrequencia() {
		return hertz * this.rotacao / this.forca;
	}

	public long getNumero() {
		return numero;
	}

	public String getModelo() {
		return modelo;
	}

	public double getRotacao() {
		return rotacao;
	}

	public double getForca() {
		return forca;
	}

	public void setNumero(long numero) {
		this.numero = numero;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public void setRotacao(double rotacao) {
		this.rotacao = rotacao;
	}

	public void setForca(double forca) {
		this.forca = forca;
	}

}
