package aula10_atividade01;

public class Principal {

	Contador c1;
	Vendedor v1;

	public void inputData() {

		c1 = new Contador();
		c1.setCtps(545878);
		c1.setNome("Márcio Wanabe");
		c1.setSalario(100.00);
		c1.setIr(10.00);
		c1.setAdicional(500.00);

		v1 = new Vendedor();
		v1.setCtps(66545);
		v1.setNome("Sonia Tereza Batista");
		v1.setSalario(100.00);
		v1.setComissao(0.10);
		v1.setTotalVendas(100000.00);
		v1.setIr(10.00);

	}

	public void outputData() {

		System.out.println("**************************************************************");
		System.out.println("Contador");
		System.out.println("CTPS:		" + c1.getCtps());
		System.out.println("Nome:		" + c1.getNome());
		System.out.println("Salário:		R$" + c1.getSalario());
		System.out.println("IR:		R$" + c1.getIr());
		System.out.println("Adicional:	R$" + c1.getAdicional());
		System.out.println("RECEBIMENTO:	R$" + c1.calculaRecebimento());
		System.out.println();
		System.out.println("**************************************************************");
		System.out.println();
		System.out.println("Vendedor");
		System.out.println("CTPS:		" + v1.getCtps());
		System.out.println("Nome:		" + v1.getNome());
		System.out.println("Salário:		R$" + v1.getSalario());
		System.out.println("IR:		R$" + v1.getIr());
		System.out.println("Comissão:	R$" + v1.getComissao());
		System.out.println("Total Vendas:	R$" + v1.getTotalVendas());
		System.out.println("RECEBIMENTO:	R$" + v1.calculaRecebimento());
		
	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();

	}
}
