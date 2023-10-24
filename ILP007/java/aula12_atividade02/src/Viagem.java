
public class Viagem {

	private String data;
	private String cidade;
	private double valor;
	private Passageiro passageiro[];

	public String getData() {
		return data;
	}

	public void setData(String data) {
		this.data = data;
	}

	public String getCidade() {
		return cidade;
	}

	public void setCidade(String cidade) {
		this.cidade = cidade;
	}

	public double getValor() {
		return valor;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public Passageiro[] getPassageiro() {
		return passageiro;
	}

	public void setPassageiro(Passageiro[] passageiro) {
		this.passageiro = passageiro;
	}

}
