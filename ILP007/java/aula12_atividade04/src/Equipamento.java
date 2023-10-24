
public class Equipamento {

	private String id;
	private String nome;
	private String modelo;
	private Laboratorio laboratorio;
	private Pecas pecas[];

	public String getId() {
		return id;
	}

	public String getNome() {
		return nome;
	}

	public String getModelo() {
		return modelo;
	}

	public Laboratorio getLaboratorio() {
		return laboratorio;
	}

	public Pecas[] getPecas() {
		return pecas;
	}

	public void setId(String id) {
		this.id = id;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public void setLaboratorio(Laboratorio laboratorio) {
		this.laboratorio = laboratorio;
	}

	public void setPecas(Pecas[] pecas) {
		this.pecas = pecas;
	}

}
