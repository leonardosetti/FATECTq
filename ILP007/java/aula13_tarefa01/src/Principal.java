
public class Principal {

	Componente comp1, comp2;
	Peca pc1;
	Projeto prj1, prj2;

	public void inputData() {

		comp1 = new Componente();
		comp2 = new Componente();
		prj1 = new Projeto();
		prj2 = new Projeto();
		pc1 = new Peca();

		comp1.setId(6713);
		comp1.setNome("CI-LDA:123987660000");
		comp1.setPreco(174.99);

		comp2.setId(8732);
		comp2.setNome("HDW-IV:234098000000");
		comp2.setPreco(567.35);

		prj1.setSigla("DXC-PMA");
		prj1.setNome("Desenvolvimento de Circuitos");

		prj2.setSigla("DXT-KTM");
		prj2.setNome("Integração de Componentes");

		Componente vetorComp1[];
		vetorComp1 = new Componente[2];
		vetorComp1[0] = comp1;
		vetorComp1[1] = comp2;

		Projeto vetorPrj1[];
		vetorPrj1 = new Projeto[2];
		vetorPrj1[0] = prj1;
		vetorPrj1[1] = prj2;

		pc1.setId("PLC-123487890000");
		pc1.setName("Placa de controle nativa");
		pc1.setEspecificacao("ISO / IEE [****DEFAULT****]");
		pc1.setComponente(vetorComp1);
		pc1.setProjeto(vetorPrj1);

	}

	public void outputData() {

		System.out.println("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
		System.out.println("Peça:		" + pc1.getId() + " - " + pc1.getName());
		System.out.println("Especificações:		" + pc1.getEspecificacao());
		System.out.println();
		System.out.println("Detalhes atribuídos:");
		for (int i = 0; i < 2; i++) {
			System.out.println(
					"Componente:		" + pc1.getComponente()[i].getId() + " - " + pc1.getComponente()[i].getNome());
			System.out.println("Preço:		R$" + pc1.getComponente()[i].getPreco());
			System.out
					.println("Projeto:		" + pc1.getProjeto()[i].getSigla() + " - " + pc1.getProjeto()[i].getNome());
			System.out.println("^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ");
			System.out.println();
		}
	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}
}
