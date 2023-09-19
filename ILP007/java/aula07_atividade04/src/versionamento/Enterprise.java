package versionamento;

import crm.Empresa;

public class Enterprise extends Empresa{
	private String licenca;
	private String validade;
	public String getLicenca() {
		return licenca;
	}
	public void setLicenca(String licenca) {
		this.licenca = licenca;
	}
	public String getValidade() {
		return validade;
	}
	public void setValidade(String validade) {
		this.validade = validade;
	}
}
