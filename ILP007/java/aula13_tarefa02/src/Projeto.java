
public class Projeto {

	private String sigla;
	private String nome;
	private double orcamento;
	private Instituto instituto[];

	public String getSigla() {
		return sigla;
	}

	public void setSigla(String sigla) {
		this.sigla = sigla;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public double getOrcamento() {
		return orcamento;
	}

	public void setOrcamento(double orcamento) {
		this.orcamento = orcamento;
	}

	public Instituto[] getInstituto() {
		return instituto;
	}

	public void setInstituto(Instituto[] instituto) {
		this.instituto = instituto;
	}

}
