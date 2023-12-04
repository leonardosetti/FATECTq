
public class Vendedor extends Funcionario {

	private double vendas, comissao;

	public double calculaSalario() {
		return getSalario() + this.vendas * this.comissao;
	}

	public double getVendas() {
		return vendas;
	}

	public double getComissao() {
		return comissao;
	}

	public void setVendas(double vendas) {
		this.vendas = vendas;
	}

	public void setComissao(double comissao) {
		this.comissao = comissao;
	}

}
