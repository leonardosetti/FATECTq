
public class Sistema implements Conexao, Transmissao, Qualidade {

	private String autor;
	private String parametros;

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

	public String getAutor() {
		return autor;
	}

	public String getParametros() {
		return parametros;
	}

	public void setAutor(String autor) {
		this.autor = autor;
	}

	public void setParametros(String parametros) {
		this.parametros = parametros;
	}

}
