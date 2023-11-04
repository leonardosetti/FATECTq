import estoque.Produto;
import juridico.Fornecedor;

public class Principal {

	Fornecedor fn1, fn2;
	Produto pr1, pr2, pr3, pr4, pr5;

	public void inputData() {

		fn1 = new Fornecedor();
		fn2 = new Fornecedor();

		pr1 = new Produto();
		pr2 = new Produto();
		pr3 = new Produto();
		pr4 = new Produto();
		pr5 = new Produto();

		fn1.setCnpj("23.318.548/0001-80");
		fn1.setNome("Millo & Arantes Peças Industriais LTDA");
		fn1.setCidade("Dracena");

		fn2.setCnpj("50.575.019/0001-34");
		fn2.setNome("Tylon Embalagens");
		fn2.setCidade("Palhoça");

		pr1.setNome("Rolamento Axial 40/50/60hp 1980/1990");
		pr1.setEstoque(158);
		pr1.setFornecedor(fn1);
		pr1.setPreco(306.88);

		pr2.setNome("Válvula Hidráulica Yuken EFBG-06-500-C-5120");
		pr2.setEstoque(32);
		pr2.setFornecedor(fn1);
		pr2.setPreco(963.21);

		pr3.setNome("Prensa Hidráulica 30 ST 30 Toneladas");
		pr3.setEstoque(6);
		pr3.setFornecedor(fn1);
		pr3.setPreco(2569.90);

		pr4.setNome("Cx PPL 70x200x20");
		pr4.setEstoque(6000);
		pr4.setFornecedor(fn2);
		pr4.setPreco(3.26);

		pr5.setNome("Bobina PstBolha 3mx48m");
		pr5.setEstoque(380);
		pr5.setFornecedor(fn2);
		pr5.setPreco(0.79);

		Produto vtr_F1_Produto[];
		vtr_F1_Produto = new Produto[3];
		vtr_F1_Produto[0] = pr1;
		vtr_F1_Produto[1] = pr2;
		vtr_F1_Produto[2] = pr3;

		Produto vtr_F2_Produto[];
		vtr_F2_Produto = new Produto[3];
		vtr_F2_Produto[0] = pr4;
		vtr_F2_Produto[1] = pr5;

		fn1.setProduto(vtr_F1_Produto);
		fn2.setProduto(vtr_F2_Produto);

	}

	public void outputData() {

		System.out.println("=================== Relação Fornecedores <--> Produtos ===================");
		for (int i = 0; i < 2; i++) {
			System.out.println();
			System.out.println("__________________________________________________________________________");
			if (i == 0) {
				System.out.println("Fornecedor #" + (i + 1));
				System.out.println("Nome: " + fn1.getNome() + " / CNPJ:	" + fn1.getCnpj());
				System.out.println("Cidade de origem: " + fn1.getCidade());
				System.out.println("Tabela de produtos / Estoque");
				for (int j = 0; j < 3; j++) {
					System.out.println("	^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
					System.out.println("	Produto:	" + fn1.getProduto()[j].getNome());
					System.out.println("	Quantidade em stoque:	#" + fn1.getProduto()[j].getEstoque());
					System.out.println("	Valor por unidade:	R$" + fn1.getProduto()[j].getPreco());
					System.out.println(
							"		Fornecedor de origem (CNPJ):	" + fn1.getProduto()[j].getFornecedor().getCnpj());
				}

			} else {
				System.out.println("Fornecedor #" + (i + 1));
				System.out.println("Nome: " + fn2.getNome() + " / CNPJ:	" + fn2.getCnpj());
				System.out.println("Cidade de origem: " + fn2.getCidade());
				System.out.println("Tabela de produtos / Estoque");
				for (int j = 0; j < 2; j++) {
					System.out.println("	^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
					System.out.println("	Produto:	" + fn2.getProduto()[j].getNome());
					System.out.println("	Quantidade em stoque:	#" + fn2.getProduto()[j].getEstoque());
					System.out.println("	Valor por unidade:	R$" + fn2.getProduto()[j].getPreco());
					System.out.println(
							"		Fornecedor de origem (CNPJ):	" + fn2.getProduto()[j].getFornecedor().getCnpj());
				}

			}
		}

	}

	public static void main(String[] args) {
		Principal principal = new Principal();
		principal.inputData();
		principal.outputData();
	}
}
