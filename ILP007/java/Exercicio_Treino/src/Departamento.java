
public class Departamento {

	private String cod_departamento;
	private String nome_departamento;
	private String responsavel;
	private String localizacao;
	private Area area;

	public String getCod_departamento() {
		return cod_departamento;
	}

	public String getNome_departamento() {
		return nome_departamento;
	}

	public String getResponsavel() {
		return responsavel;
	}

	public String getLocalizacao() {
		return localizacao;
	}

	public Area getArea() {
		return area;
	}

	public void setCod_departamento(String cod_departamento) {
		this.cod_departamento = cod_departamento;
	}

	public void setNome_departamento(String nome_departamento) {
		this.nome_departamento = nome_departamento;
	}

	public void setResponsavel(String responsavel) {
		this.responsavel = responsavel;
	}

	public void setLocalizacao(String localizacao) {
		this.localizacao = localizacao;
	}

	public void setArea(Area area) {
		this.area = area;
	}

}
