import crm.Cliente;
import delivery.Pedido;
import estoque.Produto;

public class Principal {

	Pedido pd1, pd2;
	Produto pr1, pr2, pr3;
	Cliente cli1, cli2;

	public void inputData() {

		pr1 = new Produto();
		pr2 = new Produto();
		pr3 = new Produto();

		cli1 = new Cliente();
		cli2 = new Cliente();

		pd1 = new Pedido();
		pd2 = new Pedido();

		pr1.setNumero(10023);
		pr1.setDescricao("Coca-Cola");
		pr1.setPreco(6.99);

		pr2.setNumero(52027);
		pr2.setDescricao("Batatinha");
		pr2.setPreco(13.55);

		pr3.setNumero(36011);
		pr3.setDescricao("Pizza");
		pr3.setPreco(34.99);

		cli1.setNome("João César Silva");
		cli1.setEndereco("Rua Érico de Abreu e Lima - 871 - Ap. 22 - Centro");
		cli1.setCelular("(16)997781869");

		cli2.setNome("Antonio Cláudio Sanchez");
		cli2.setEndereco("Rua 28 de Agosto - 117- Jd das Palmeiras");
		cli2.setCelular("(16)997415585");

		Produto vtrProduto[];
		vtrProduto = new Produto[3];
		vtrProduto[0] = pr2;
		vtrProduto[1] = pr1;
		vtrProduto[2] = pr3;

		pd1.setNumero(2994452);
		pd1.setData("17/10/2023");
		pd1.setProduto(vtrProduto);
		pd1.setCliente(cli1);
		pd1.setTotal(6.99 + 13.55);

		pd2.setNumero(2994452);
		pd2.setData("17/10/2023");
		pd2.setProduto(vtrProduto);
		pd2.setCliente(cli2);
		pd2.setTotal(6.99 + 34.99);

	}

	public void outputData() {

		System.out.println();
		System.out.println("-------------------------- Lista de Pedidos --------------------------");
		System.out.println();
		for (int i = 0; i < 2; i++) {
			System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
			System.out.println("Pedido #" + (i + 1));
			if (i == 0) {
				System.out.println("Nome:" + pd1.getCliente().getNome());
				System.out.println("Endereço: " + pd1.getCliente().getEndereco());
				System.out.println("Celular: " + pd1.getCliente().getCelular());
				System.out.println("Detalhes do Pedido");
				System.out.println("	Pedido Número: " + pd1.getNumero());
				for (int j = 0; j < 2; j++) {
					System.out.println("	Endereço: " + pd1.getProduto()[j].getNumero());
					System.out.println("	Descrição: " + pd1.getProduto()[j].getDescricao());
					System.out.println("	Preço: R$" + pd1.getProduto()[j].getPreco());
				}
				System.out.println("		Total: R$" + pd1.getTotal());

			} else {
				System.out.println("Nome:" + pd2.getCliente().getNome());
				System.out.println("Endereço: " + pd2.getCliente().getEndereco());
				System.out.println("Celular: " + pd2.getCliente().getCelular());
				System.out.println("Detalhes do Pedido");
				System.out.println("Pedido Número: " + pd2.getNumero());
				for (int j = 0; j < 2; j++) {
					System.out.println("	Endereço: " + pd2.getProduto()[j + 1].getNumero());
					System.out.println("	Descrição: " + pd2.getProduto()[j + 1].getDescricao());
					System.out.println("	Preço: R$" + pd2.getProduto()[j + 1].getPreco());
				}
				System.out.println("		Total: R$" + pd2.getTotal());
			}
		}
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
	}

	public static void main(String[] args) {

		Principal principal = new Principal();
		principal.inputData();
		principal.outputData();
	}

}
