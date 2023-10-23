
public class Boleto extends Prestacao {

	private long numero;
	private Prestacao prestacao[];
	private Cliente cliente;

	public long getNumero() {
		return numero;
	}

	public Prestacao[] getPrestacao() {
		return prestacao;
	}

	public Cliente getCliente() {
		return cliente;
	}

	public void setNumero(long numero) {
		this.numero = numero;
	}

	public void setPrestacao(Prestacao[] prestacao) {
		this.prestacao = prestacao;
	}

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

}
