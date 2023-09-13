package logistica.carga;
import logistica.Terrestre;

public class Caminhao {
	
	private long peso;
	private Terrestre terrestre;
	public long getPeso() {
		return peso;
	}
	public Terrestre getTerrestre() {
		return terrestre;
	}
	public void setPeso(long peso) {
		this.peso = peso;
	}
	public void setTerrestre(Terrestre terrestre) {
		this.terrestre = terrestre;
	}

}
