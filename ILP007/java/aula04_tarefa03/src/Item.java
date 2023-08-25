
public class Item {
	
	private long numero;
	private String nome;
	private String lote;
	private int estoque;
	private double curso;
	
	public void setNumero(long numero) {
		this.numero = numero;
	}	
	public long getNumero() {
		return numero;
	}	
	public void setNome(String nome) {
		this.nome = nome;
	}	
	public String getNome() {
		return nome;
	}	
	public void setLote(String lote) {
		this.lote = lote;
	}	
	public String getLote() {
		return lote;
	}	
	public void setEstoque(int estoque) {
		this.estoque = estoque;
	}	
	public int getEstoque() {
		return estoque;
	}	
	public void setCurso (double curso) {
		this.curso = curso;
	}	
	public double getCurso() {
		return curso;
	}
}