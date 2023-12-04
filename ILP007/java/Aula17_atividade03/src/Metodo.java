
public class Metodo implements Rede, Banco {

	private String codigo;
	private String returno;

	public String recebe() {
		return null;
	}

	public boolean conecta() {
		return false;
	}

	public boolean envia() {
		return false;
	}

	public String getCodigo() {
		return codigo;
	}

	public String getReturno() {
		return returno;
	}

	public void setCodigo(String codigo) {
		this.codigo = codigo;
	}

	public void setReturno(String returno) {
		this.returno = returno;
	}

}
