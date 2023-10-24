
public class Principal {

	Equipamento eq1;
	Laboratorio lab1;
	Pecas pc1, pc2;

	public void inputData() {

		eq1 = new Equipamento();
		lab1 = new Laboratorio();
		pc1 = new Pecas();
		pc2 = new Pecas();

		lab1.setNome("Laboratório de Inovação Tecnológica");
		lab1.setSigla("LAB-INVTEC");

		pc1.setNumero(331235428);
		pc1.setNome("Braço Robótico Vertical Móvel");
		pc1.setPreco(6783.71);

		pc2.setNumero(181234421);
		pc2.setNome("Ventilador Ionico");
		pc2.setPreco(4090.14);

		Pecas vetorPecas[];
		vetorPecas = new Pecas[2];
		vetorPecas[0] = pc1;
		vetorPecas[1] = pc2;

		eq1.setNome("Ilha P1 de Robótica Experimental");
		eq1.setId("LIT-202300454-14238ASDF1238798");
		eq1.setModelo("ETCQQ-XX1122-NCPT:092309474734");
		eq1.setLaboratorio(lab1);
		eq1.setPecas(vetorPecas);

	}

	public void outputData() {

		System.out.println("	");
		System.out.println();
		System.out
				.println("Laboratório:	" + eq1.getLaboratorio().getSigla() + " / " + eq1.getLaboratorio().getNome());
		System.out.println("	ID Equipamento:		" + eq1.getId());
		System.out.println("	Modelo Equipamento:	" + eq1.getModelo());
		System.out.println("	Nome do Equipamento:	" + eq1.getNome());
		System.out.println();
		System.out.println();
		System.out.println("Lista de Peças:");
		System.out.println();
		for (int i = 0; i < 2; i++) {
			System.out.println(" Número da peça: " + eq1.getPecas()[i].getNumero());
			System.out.println(" Nome da peça: " + eq1.getPecas()[i].getNome());
			System.out.println(" VAlor da peça: " + eq1.getPecas()[i].getPreco());
			System.out.println();

		}

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}

}
