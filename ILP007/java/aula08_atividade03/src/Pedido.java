
public class Pedido {
	
	private long numero;
	private String data;
	private double total;
	
	private Cliente cliente;
	public long getNumero() {
		return numero;
	}
	public String getData() {
		return data;
	}
	public double getTotal() {
		return total;
	}
	public Cliente getCliente() {
		return cliente;
	}
	public void setNumero(long numero) {
		this.numero = numero;
	}
	public void setData(String data) {
		this.data = data;
	}
	public void setTotal(double total) {
		this.total = total;
	}
	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}
	
}
