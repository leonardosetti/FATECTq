package fabrica;

public class Manual extends Equipamento {
	
	private long licenca;
	private String versao;
	
	public long getLicenca() {
		return licenca;
	}
	public String getVersao() {
		return versao;
	}
	public void setLicenca(long licenca) {
		this.licenca = licenca;
	}
	public void setVersao(String versao) {
		this.versao = versao;
	}


}
