
public abstract class Documento {

	private double valor;

	public abstract boolean verificaStatus();

	public double getValor() {
		return valor;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

}
