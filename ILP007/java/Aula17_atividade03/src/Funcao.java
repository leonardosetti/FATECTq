
public class Funcao implements Banco, Rede {

	private String id;
	private String path;

	public String recebe() {
		return null;
	}

	public boolean conecta() {
		return false;
	}

	public boolean envia() {
		return false;
	}

	public String getId() {
		return id;
	}

	public String getPath() {
		return path;
	}

	public void setId(String id) {
		this.id = id;
	}

	public void setPath(String path) {
		this.path = path;
	}

}
