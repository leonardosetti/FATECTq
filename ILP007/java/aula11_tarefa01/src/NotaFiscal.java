
public class NotaFiscal extends Documento {

	private double desconto;
	private double acrescimo;
	private Documento documento;

	public double calculaTotal() {
		return this.getValor() + this.getJuros() - desconto + acrescimo;
	}

	public double getDesconto() {
		return desconto;
	}

	public double getAcrescimo() {
		return acrescimo;
	}

	public Documento getDocumento() {
		return documento;
	}

	public void setDesconto(double desconto) {
		this.desconto = desconto;
	}

	public void setAcrescimo(double acrescimo) {
		this.acrescimo = acrescimo;
	}

	public void setDocumento(Documento documento) {
		this.documento = documento;
	}

}
