
public class Principal {

	Produto prod1, prod2;
	Pedido pedido;
	Frete frete;

	public void inputData() {

		prod1 = new Produto();
		prod2 = new Produto();

		prod1.setCodigo(1002200001);
		prod1.setNome("Placa Raspberry Pi Zero 2 W");
		prod1.setPreco(354.86);

		prod2.setCodigo(1013300660);
		prod2.setNome("10x Ds3231 Rtc Módulo Hora Tempo P/ Raspberry");
		prod2.setPreco(311.70);

		Produto vetorProduto[];
		vetorProduto = new Produto[2];
		vetorProduto[0] = prod1;
		vetorProduto[1] = prod2;

		pedido = new Pedido();
		pedido.setNumero(1000000002);
		pedido.setData("21/10/2023");
		pedido.setProduto(vetorProduto);

		frete = new Frete();
		frete.setNumero(65);
		frete.setData("23/10/2023");
		frete.setPedido(pedido);
		frete.setValor(19.26);

	}

	public void outputData() {
		System.out.println();
		System.out.println("--------------------- Registro de Pedido e Frete ---------------------");
		System.out.println();
		System.out.println("Pedido número:	" + frete.getPedido().getNumero());
		System.out.println("Data do Pedido:	" + frete.getPedido().getData());
		System.out.println("	* Itens do Pedido:");
		System.out.println();
		for (int i = 0; i < 2; i++) {
			System.out.println("	>> Cód: 	" + frete.getPedido().getProduto()[i].getCodigo());
			System.out.println("	>> Desc:	 " + frete.getPedido().getProduto()[i].getNome());
			System.out.println("	>> Valor:	 R$" + frete.getPedido().getProduto()[i].getPreco());
			System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
			System.out.println();
		}
		System.out.println();
		System.out.println("Data do Frete:	" + frete.getData());
		System.out.println("Valor do frete:	R$" + frete.getValor());
		System.out.println("Número do Frete:	" + frete.getNumero());

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}

}
