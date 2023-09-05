
public class Disciplina {

	private String sigla;
	private String nome;
	private int cargaHoraria;
	private Ementa ementa;
	private Programa programa;
	private Bibliografia bibliografia;
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
	public int getCargaHoraria() {
		return cargaHoraria;
	}
	public void setCargaHoraria(int cargaHoraria) {
		this.cargaHoraria = cargaHoraria;
	}
	public Ementa getEmenta() {
		return ementa;
	}
	public void setEmenta(Ementa ementa) {
		this.ementa = ementa;
	}
	public Programa getPrograma() {
		return programa;
	}
	public void setPrograma(Programa programa) {
		this.programa = programa;
	}
	public Bibliografia getBibliografia() {
		return bibliografia;
	}
	public void setBibliografia(Bibliografia bibliografia) {
		this.bibliografia = bibliografia;
	}
}
