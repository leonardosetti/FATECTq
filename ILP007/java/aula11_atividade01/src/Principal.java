
public class Principal {

	Produto pr1;
	Produto pr2;
	Produto pr3;
	Produto pr4;
	Produto pr5;
	Produto pr6;

	Pedido pd1;
	Pedido pd2;

	public double calcPrd1() {
		return pr1.getPreco() + pr2.getPreco() + pr3.getPreco();
	}

	public double calcPrd2() {
		return pr4.getPreco() + pr5.getPreco() + pr6.getPreco();
	}

	public void inputData() {

		pr1 = new Produto();
		pr2 = new Produto();
		pr3 = new Produto();
		pr4 = new Produto();
		pr5 = new Produto();
		pr6 = new Produto();

		pr1.setCodigo(300);
		pr1.setNome("Graxa em pó");
		pr1.setPreco(650.98);

		pr2.setCodigo(400);
		pr2.setNome("Garrafa de Faísca");
		pr2.setPreco(1230.67);

		pr3.setCodigo(500);
		pr3.setNome("Envelope de CD");
		pr3.setPreco(11.75);

		pr4.setCodigo(600);
		pr4.setNome("Fita de Tonner");
		pr4.setPreco(142.30);

		pr5.setCodigo(700);
		pr5.setNome("Sercador de gelo");
		pr5.setPreco(650.98);

		pr6.setCodigo(100);
		pr6.setNome("Desentupidor de cabo de rede");
		pr6.setPreco(225.66);

		Produto vetorProd_01[];
		vetorProd_01 = new Produto[3];
		vetorProd_01[0] = pr1;
		vetorProd_01[1] = pr2;
		vetorProd_01[2] = pr3;

		Produto vetorProd_02[];
		vetorProd_02 = new Produto[3];
		vetorProd_02[0] = pr4;
		vetorProd_02[1] = pr5;
		vetorProd_02[2] = pr6;

		pd1 = new Pedido();
		pd1.setData("2020114");
		pd1.setNumero(1000254);
		pd1.setProduto(vetorProd_01);
		pd1.setTotal(calcPrd1());

		pd2 = new Pedido();
		pd2.setData("22/09/2023");
		pd2.setNumero(1000222);
		pd2.setProduto(vetorProd_02);
		pd2.setTotal(calcPrd2());

	}

	public void outputData() {

		System.out.println();
		System.out.println("----------- Pedidos -------------------");
		System.out.println("Pedido número:		" + pd1.getNumero());
		System.out.println("Data:	" + pd1.getData());
		System.out.println("Total:	" + pd1.getTotal());
		System.out.println("Produtos:");
		for (int i = 0; i < 3; i++) {
			System.out.println("Codigo:		 " + pd1.getProduto()[i].getCodigo());
			System.out.println("Nome:		 " + pd1.getProduto()[i].getNome());
			System.out.println("Preço:		 R$" + pd1.getProduto()[i].getPreco());
			System.out.println("-----------------------------------------------------------------------");
		}
		System.out.println("***********************************************************************");
		System.out.println();
		System.out.println("Pedido número:		" + pd2.getNumero());
		System.out.println("Data:	" + pd2.getData());
		System.out.println("Total:	" + pd2.getTotal());
		System.out.println("Produtos:");
		for (int i = 0; i < 3; i++) {
			System.out.println("Codigo:		 " + pd2.getProduto()[i].getCodigo());
			System.out.println("Nome:		 " + pd2.getProduto()[i].getNome());
			System.out.println("Preço:		 R$" + pd2.getProduto()[i].getPreco());
			System.out.println("-----------------------------------------------------------------------");
		}

	}

	public static void main(String[] args) {

		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}

}
