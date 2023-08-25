
public class Orcamento {
	
	private long codigo;
	private String nome;
	private String descricao;
	private double preco;
	private int estoque;
	
	public void setCodigo(long codigo) {
		this.codigo = codigo;
	}
	
	public long getCodigo() {
		return codigo;
	}
	
	public void setNome(String nome ) {
		this.nome = nome;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
	
	public String getDescricao() {
		return descricao;
	}
	
	public void setPreco(double preco) {
		this.preco = preco;
	}
	
	public double getPreco() {
		return preco;
	}
	
	public void setEstoque(int estoque) {
		this.estoque = estoque;
	}
	
	public int getEstoque() {
		return estoque;
	}
	
}
