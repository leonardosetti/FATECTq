
public class Cliente extends Pessoa implements Rede, Banco {

	private String cpf;

	public void enviaCarta() {

	}

	public boolean envia(String tt) {
		return true;
	}

	public String recebe() {
		return null;
	}

	public boolean insere(String sql) {
		return false;
	}

	public boolean exclui(int chave) {
		return false;
	}

	public String getCpf() {
		return cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

}
