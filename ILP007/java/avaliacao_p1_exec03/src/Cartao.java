
public class Cartao {

	private String numero;
	private int validade;
	private double total;
	private Cidade cidade;
	private Portador portador;

	public Portador getPortador() {
		return portador;
	}

	public void setPortador(Portador portador) {
		this.portador = portador;
	}

	public String getNumero() {
		return numero;
	}

	public void setNumero(String numero) {
		this.numero = numero;
	}

	public int getValidade() {
		return validade;
	}

	public void setValidade(int validade) {
		this.validade = validade;
	}

	public double getTotal() {
		return total;
	}

	public void setTotal(double total) {
		this.total = total;
	}

	public Cidade getCidade() {
		return cidade;
	}

	public void setCidade(Cidade cidade) {
		this.cidade = cidade;
	}

}
