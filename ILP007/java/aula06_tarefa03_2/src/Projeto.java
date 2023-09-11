
public class Projeto {
	
	private String nome;
	private Teorico teorico;
	private Pratico pratico;
	
	public void setNome (String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setTeorico (Teorico teorico) {
		this.teorico=teorico;
	}
	
	public Teorico getTeorico () {
		return teorico;		
	}
	
	public void setPratico (Pratico pratico) {
		this.pratico = pratico;
	}
	
	public Pratico getPratico() {
		return pratico;
	}

}
