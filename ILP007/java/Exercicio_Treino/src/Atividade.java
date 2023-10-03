import java.sql.Blob;

public class Atividade extends Funcionario {

	private int cod_atividade;
	private int nome_atividade;
	private int horas_demanda;
	private Blob descricao_atv;
	private double orcamento;
	private double meta_mensal;

	public int getCod_atividade() {
		return cod_atividade;
	}

	public int getNome_atividade() {
		return nome_atividade;
	}

	public int getHoras_demanda() {
		return horas_demanda;
	}

	public Blob getDescricao_atv() {
		return descricao_atv;
	}

	public double getOrcamento() {
		return orcamento;
	}

	public double getMeta_mensal() {
		return meta_mensal;
	}

	public void setCod_atividade(int cod_atividade) {
		this.cod_atividade = cod_atividade;
	}

	public void setNome_atividade(int nome_atividade) {
		this.nome_atividade = nome_atividade;
	}

	public void setHoras_demanda(int horas_demanda) {
		this.horas_demanda = horas_demanda;
	}

	public void setDescricao_atv(Blob descricao_atv) {
		this.descricao_atv = descricao_atv;
	}

	public void setOrcamento(double orcamento) {
		this.orcamento = orcamento;
	}

	public void setMeta_mensal(double meta_mensal) {
		this.meta_mensal = meta_mensal;
	}

}
