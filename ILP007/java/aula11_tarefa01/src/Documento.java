
public class Documento {

	private long numero;
	private String data;
	private double valor;
	private double juros;

	public double calculaTotal() {
		return valor + juros;

	}

	public long getNumero() {
		return numero;
	}

	public String getData() {
		return data;
	}

	public double getValor() {
		return valor;
	}

	public double getJuros() {
		return juros;
	}

	public void setNumero(long numero) {
		this.numero = numero;
	}

	public void setData(String data) {
		this.data = data;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public void setJuros(double juros) {
		this.juros = juros;
	}

}
