
public class Especialidade extends Funcionario {

	private String cod_especialidade;
	private String nome_especialidade;
	private int nivel;
	private int tempo_exp;
	private Atividade atividade;

	public Atividade getAtividade() {
		return atividade;
	}

	public void setAtividade(Atividade atividade) {
		this.atividade = atividade;
	}

	public String getCod_especialidade() {
		return cod_especialidade;
	}

	public String getNome_especialidade() {
		return nome_especialidade;
	}

	public int getNivel() {
		return nivel;
	}

	public int getTempo_exp() {
		return tempo_exp;
	}

	public void setCod_especialidade(String cod_especialidade) {
		this.cod_especialidade = cod_especialidade;
	}

	public void setNome_especialidade(String nome_especialidade) {
		this.nome_especialidade = nome_especialidade;
	}

	public void setNivel(int nivel) {
		this.nivel = nivel;
	}

	public void setTempo_exp(int tempo_exp) {
		this.tempo_exp = tempo_exp;
	}

}
