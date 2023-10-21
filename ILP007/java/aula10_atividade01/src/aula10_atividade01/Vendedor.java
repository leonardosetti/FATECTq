package aula10_atividade01;

public class Vendedor extends Funcionario {

	private double comissao;
	private double totalVendas;

	public double calculaRecebimento() {
		return this.getSalario() - this.getIr() + (comissao * totalVendas);
	}

	public double getComissao() {
		return comissao;
	}

	public void setComissao(double comissao) {
		this.comissao = comissao;
	}

	public double getTotalVendas() {
		return totalVendas;
	}

	public void setTotalVendas(double totalVendas) {
		this.totalVendas = totalVendas;
	}

}
