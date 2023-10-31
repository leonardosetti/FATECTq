
public class Professor {

	private String nome;
	private String titulacao;
	private Universidade universidade;
	private Artigo artigo[];

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getTitulacao() {
		return titulacao;
	}

	public void setTitulacao(String titulacao) {
		this.titulacao = titulacao;
	}

	public Universidade getUniversidade() {
		return universidade;
	}

	public void setUniversidade(Universidade universidade) {
		this.universidade = universidade;
	}

	public Artigo[] getArtigo() {
		return artigo;
	}

	public void setArtigo(Artigo[] artigo) {
		this.artigo = artigo;
	}

}
