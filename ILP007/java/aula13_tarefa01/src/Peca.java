
public class Peca {

	private String id;
	private String name;
	private String especificacao;
	private Componente componente[];
	private Projeto projeto[];

	public String getId() {
		return id;
	}

	public String getName() {
		return name;
	}

	public String getEspecificacao() {
		return especificacao;
	}

	public Componente[] getComponente() {
		return componente;
	}

	public Projeto[] getProjeto() {
		return projeto;
	}

	public void setId(String id) {
		this.id = id;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setEspecificacao(String especificacao) {
		this.especificacao = especificacao;
	}

	public void setComponente(Componente[] componente) {
		this.componente = componente;
	}

	public void setProjeto(Projeto[] projeto) {
		this.projeto = projeto;
	}

}
