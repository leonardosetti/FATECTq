
public class Conteudo implements Conexao, Transmissao, Qualidade {

	private String data;
	private String texto;

	public boolean status() {
		return true;
	}

	public boolean ajusta() {
		return false;
	}

	public String testa() {
		return null;
	}

	public long obtemMedicao() {
		return 0;
	}

	public String getData() {
		return data;
	}

	public String getTexto() {
		return texto;
	}

	public void setData(String data) {
		this.data = data;
	}

	public void setTexto(String texto) {
		this.texto = texto;
	}

}
