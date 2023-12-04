
public class Motor implements Operacoes {

	private long id;
	private String descricao;
	private double potencia;

	public double ajustaFrequencia() {
		return hertz * this.potencia;
	}

	public long getId() {
		return id;
	}

	public String getDescricao() {
		return descricao;
	}

	public double getPotencia() {
		return potencia;
	}

	public void setId(long id) {
		this.id = id;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public void setPotencia(double potencia) {
		this.potencia = potencia;
	}

}
