package cliente;

import crm.Pessoa;

public class Juridica extends Pessoa{
	
	private String razaoSocial;
	private String fundacao;
	public String getRazaoSocial() {
		return razaoSocial;
	}
	public void setRazaoSocial(String razaoSocial) {
		this.razaoSocial = razaoSocial;
	}
	public String getFundacao() {
		return fundacao;
	}
	public void setFundacao(String fundacao) {
		this.fundacao = fundacao;
	}
	
	

}
