
public class Principal {

	Orcamento orc1;
	NotaFiscal nf;

	public void inputData() {

		orc1 = new Orcamento();
		orc1.setNumero(65496846);
		orc1.setData("29/03/2023");
		orc1.setJuros(10);
		orc1.setPecas(25);
		orc1.setValor(60);
		orc1.setDocumento(orc1);

		nf = new NotaFiscal();
		nf.setNumero(554784);
		nf.setData("29/03/2023");
		nf.setValor(60);
		nf.setDesconto(5);
		nf.setAcrescimo(12);
		nf.setJuros(10);
		nf.setDocumento(nf);

	}

	public void outputData() {

		System.out.println();
		System.out.println("----- Orçamento ----");
		System.out.println("Numero:			" + orc1.getDocumento().getNumero());
		System.out.println("Data:			" + orc1.getDocumento().getData());
		System.out.println("Valor:			R$" + orc1.getDocumento().getValor());
		System.out.println("Juros:			R$" + orc1.getDocumento().getJuros());
		System.out.println("Peças:			R$" + orc1.getPecas());
		System.out.println("Total pagamento:	R$" + orc1.getDocumento().calculaTotal());
		System.out.println();
		System.out.println("----- Nota Fiscal ----");
		System.out.println("Número:			"+nf.getDocumento().getNumero());
		System.out.println("Data:			"+nf.getDocumento().getData());
		System.out.println("Valor:			R$"+nf.getDocumento().getValor());
		System.out.println("Desconto:		R$"+nf.getDesconto());
		System.out.println("Acréscimo:		R$"+nf.getAcrescimo());
		System.out.println("Juros:			R$"+nf.getDocumento().getJuros());
		System.out.println("Valor Total:		R$"+nf.calculaTotal());
		System.out.println();


	}
	
	public static void main(String args[]) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();

	}
}
