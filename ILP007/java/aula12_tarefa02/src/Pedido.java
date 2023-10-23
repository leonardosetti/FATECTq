
public class Pedido {

	private long numero;
	private String data;
	private Produto produto[];

	public long getNumero() {
		return numero;
	}

	public String getData() {
		return data;
	}

	public Produto[] getProduto() {
		return produto;
	}

	public void setNumero(long numero) {
		this.numero = numero;
	}

	public void setData(String data) {
		this.data = data;
	}

	public void setProduto(Produto[] produto) {
		this.produto = produto;
	}

}
