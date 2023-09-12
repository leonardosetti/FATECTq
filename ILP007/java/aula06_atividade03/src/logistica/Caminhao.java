package logistica;

public class Caminhao {

	private String placa;
	private int ano;
	private String chassi;
	private Carreta carreta;

	public String getPlaca() {
		return placa;
	}
	public void setPlaca(String placa) {
		this.placa = placa;
	}
	public int getAno() {
		return ano;
	}
	public void setAno(int ano) {
		this.ano = ano;
	}
	public String getChassi() {
		return chassi;
	}
	public void setChassi(String chassi) {
		this.chassi = chassi;
	}
	public Carreta getCarreta() {
		return carreta;
	}
	public void setCarreta(Carreta carreta) {
		this.carreta = carreta;
	}

}
