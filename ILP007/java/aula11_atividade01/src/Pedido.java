
public class Pedido {

	private long numero;
	private String data;
	private double total;
	private Produto produto[];

	public long getNumero() {
		return numero;
	}

	public void setNumero(long numero) {
		this.numero = numero;
	}

	public double getTotal() {
		return total;
	}

	public void setTotal(double total) {
		this.total = total;
	}

	public String getData() {
		return data;
	}

	public void setData(String data) {
		this.data = data;
	}

	public Produto[] getProduto() {
		return produto;
	}

	public void setProduto(Produto[] produto) {
		this.produto = produto;
	}

}
