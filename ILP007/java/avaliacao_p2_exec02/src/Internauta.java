import java.util.ArrayList;

public class Internauta extends Usuario implements Sessao, Banco, Rede, Chat, Patch {

	private String email;
	private Internauta internauta;

	public void gravaCookie(String dados) {

	}

	public String leCookie() {
		return null;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public Internauta getInternauta() {
		return internauta;
	}

	public void setInternauta(Internauta internauta) {
		this.internauta = internauta;
	}

	public boolean envia(String mensagem) {

		return false;
	}

	public String recebe() {

		return null;
	}

	public boolean entrar() {

		return false;
	}

	public void sair() {

	}

	public boolean create(String dados) {

		return false;
	}

	public ArrayList<String> realAll(String dados) {

		return null;
	}

	public void grava(String dados) {

	}

	public String le() {

		return null;
	}

}
