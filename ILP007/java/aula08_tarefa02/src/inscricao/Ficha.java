package inscricao;

import organizacao.comissao.Faculdade;

public class Ficha {

	private long numero;
	private String data;
	private double valor;
	private Faculdade faculdade;
	
	public long getNumero() {
		return numero;
	}
	public String getData() {
		return data;
	}
	public double getValor() {
		return valor;
	}
	public void setNumero(long numero) {
		this.numero = numero;
	}
	public void setData(String data) {
		this.data = data;
	}
	public void setValor(double valor) {
		this.valor = valor;
	}
	public Faculdade getFaculdade() {
		return faculdade;
	}
	public void setFaculdade(Faculdade faculdade) {
		this.faculdade = faculdade;
	}
}
