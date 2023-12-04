
public class Pedido extends Documento {

	private long numero;

	public boolean verificaStatus() {
		return true;
	}

	public boolean insere(String sql) {
		return false;
	}

	public boolean exclui(int chave) {
		return false;
	}

	public boolean grava() {
		return true;

	}

	public boolean copia(String destino) {
		return true;
	}

	public long getNumero() {
		return numero;
	}

	public void setNumero(long numero) {
		this.numero = numero;
	}

}
