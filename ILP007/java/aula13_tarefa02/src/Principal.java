
public class Principal {

	Instituto instituto_A, instituto_B;
	Projeto projeto_01, projeto_02, projeto_03, projeto_04;

	public void inputData() {

		instituto_A = new Instituto();
		instituto_B = new Instituto();
		projeto_01 = new Projeto();
		projeto_02 = new Projeto();
		projeto_03 = new Projeto();
		projeto_04 = new Projeto();

		instituto_A.setNome("Igarapé");
		instituto_A.setCidade("Rio de Janeiro");

		instituto_B.setNome("Instituto Conhecimento Liberta");
		instituto_B.setCidade("São Paulo");

		Instituto vtrInstituto[];
		vtrInstituto = new Instituto[2];
		vtrInstituto[0] = instituto_A;
		vtrInstituto[1] = instituto_B;

		projeto_01.setSigla("AMSF");
		projeto_01.setNome("Amazônia sem Fogo");
		projeto_01.setOrcamento(1300000);
		projeto_01.setInstituto(vtrInstituto);

		projeto_03.setSigla("PMA");
		projeto_03.setNome("Projeto Mães Amamentadoras");
		projeto_03.setOrcamento(250000);
		projeto_03.setInstituto(vtrInstituto);

		projeto_04.setSigla("FIPT");
		projeto_04.setNome("Filosofia Para Todos");
		projeto_04.setOrcamento(140000);
		projeto_04.setInstituto(vtrInstituto);

		projeto_02.setSigla("INVMSTR");
		projeto_02.setNome("Investidor Mestre");
		projeto_02.setOrcamento(650000);
		projeto_02.setInstituto(vtrInstituto);

		Projeto vtrProjeto[];
		vtrProjeto = new Projeto[4];
		vtrProjeto[0] = projeto_01;
		vtrProjeto[1] = projeto_02;
		vtrProjeto[2] = projeto_03;
		vtrProjeto[3] = projeto_04;

		instituto_A.setProjeto(vtrProjeto);
		instituto_B.setProjeto(vtrProjeto);

	}

	public void outputData() {

		System.out.println();
		System.out.println("------------------- Institutos --------------------");
		for (int i = 0; i < 2; i++) {
			System.out.println("___________________________________________________");
			System.out.println("	Nome: " + projeto_01.getInstituto()[i].getNome());
			System.out.println("	Cidade: " + projeto_01.getInstituto()[i].getCidade());
			System.out.println("	Projetos:");
			if (i == 0) {
				for (int j = 0; j < 1; j++) {
					System.out.println("		Sigla:	" + instituto_A.getProjeto()[j].getSigla());
					System.out.println("		Nome:	" + instituto_A.getProjeto()[j].getNome());
					System.out.println("		Orçamento:	R$" + instituto_A.getProjeto()[j].getOrcamento());
					System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
				}
			} else {
				for (int j = 1; j < 4; j++) {
					System.out.println("		Sigla:	" + instituto_A.getProjeto()[j].getSigla());
					System.out.println("		Nome:	" + instituto_A.getProjeto()[j].getNome());
					System.out.println("		Orçamento:	R$" + instituto_A.getProjeto()[j].getOrcamento());
					System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
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
