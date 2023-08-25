
public class NotaFiscal {
	
	private long numero;
	private String data;
	private String serie;
	private double total;
	private double imposto;
	
	public void setNumero(long numero) {
		this.numero = numero;
	}	
	public long getNumero() {
		return numero;
	}	
	public void setData(String data) {
		this.data = data;
	}	
	public String getData() {
		return data;
	}	
	public void setSerie(String serie) {
		this.serie = serie;
	}	
	public String getSerie() {
		return serie;
	}	
	public void setTotal(double total) { 
		this.total = total;
	}	
	public double getTotal() {
		return total;
	}	
	public void setImposto(double imposto) {
		this.imposto = imposto;
	}	
	public double getImposto() {
		return imposto;
	}	
}