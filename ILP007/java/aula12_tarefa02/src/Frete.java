
public class Frete {

	private long numero;
	private String data;
	private double valor;
	private Pedido pedido;

	public long getNumero() {
		return numero;
	}

	public String getData() {
		return data;
	}

	public double getValor() {
		return valor;
	}

	public Pedido getPedido() {
		return pedido;
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

	public void setPedido(Pedido pedido) {
		this.pedido = pedido;
	}

}
