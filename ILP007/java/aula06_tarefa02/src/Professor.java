
public class Professor extends Pessoa{

	private String titulacao;
	private Endereco endereco;
	
	public String getTitulacao() {
		return titulacao;
	}
	public Endereco getEndereco() {
		return endereco;
	}
	public void setTitulacao(String titulacao) {
		this.titulacao = titulacao;
	}
	public void setEndereco(Endereco endereco) {
		this.endereco = endereco;
	}
}