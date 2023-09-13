package departamento.vendas.crm;
import departamentos.estoque.itens.Produto;

public class Cliente {
	
	private long id;
	private String nome;
	private String documento;
	private char tipoDocumento;
	private Produto produto;

	public long getId() {
		return id;
	}
	public String getNome() {
		return nome;
	}
	public String getDocumento() {
		return documento;
	}
	public char getTipoDocumento() {
		return tipoDocumento;
	}
	public Produto getProduto() {
		return produto;
	}
	public void setId(long id) {
		this.id = id;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public void setDocumento(String documento) {
		this.documento = documento;
	}
	public void setTipoDocumento(char tipoDocumento) {
		this.tipoDocumento = tipoDocumento;
	}
	public void setProduto(Produto produto) {
		this.produto = produto;
	}
}
