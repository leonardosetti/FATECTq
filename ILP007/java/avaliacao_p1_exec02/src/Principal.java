public class Principal {
	Alternativa alt_1, alt_2, alt_3;
	Demanda dem_1, dem_2, dem_3, dem_4, dem_5;
	Essencial esc_1, esc_2, esc_3;
	Prioridade prd_1, prd_2, prd_3;
	Projeto prj_1, prj_2, prj_3, prj_4;

	public void inputData() {

		prj_1 = new Projeto();
		prj_1.setId("PRJ_001");
		prj_1.setNome("Inovação e Pesquisa de Dados");
		prj_1.setCidade("Pindamonhangaba");

		prj_2 = new Projeto();
		prj_2.setId("PRJ_002");
		prj_2.setNome("Centro de Custos");
		prj_2.setCidade("São Bento");

		prj_3 = new Projeto();
		prj_3.setId("PRJ_SSK-001");
		prj_3.setNome("Campanha Temp");
		prj_3.setCidade("Campinas");

		dem_1 = new Demanda();
		dem_1.setNumero(109001);
		dem_1.setData("20221116");
		dem_1.setProjeto(prj_1);

		dem_2 = new Demanda();
		dem_2.setNumero(105005);
		dem_2.setData("20110328");
		dem_2.setProjeto(prj_2);

		dem_3 = new Demanda();
		dem_3.setNumero(111036);
		dem_3.setData("20210305");
		dem_3.setProjeto(prj_3);

		dem_4 = new Demanda();
		dem_4.setNumero(111030);
		dem_4.setData("20221104");
		dem_4.setProjeto(prj_2);

		dem_5 = new Demanda();
		dem_5.setNumero(112035);
		dem_5.setData("20221104");
		dem_5.setProjeto(prj_3);

		prd_1 = new Prioridade();
		prd_1.setNumero(154);
		prd_1.setProjeto(prj_1);
		prd_1.setNivel(30);
		prd_1.setData("20230102");
		prd_1.setTempo(36654);

		prd_2 = new Prioridade();
		prd_2.setNumero(445);
		prd_2.setProjeto(prj_2);
		prd_2.setNivel(20);
		prd_2.setData("20221222");
		prd_2.setTempo(66251);

		prd_3 = new Prioridade();
		prd_3.setNumero(11);
		prd_3.setProjeto(prj_3);
		prd_3.setNivel(10);
		prd_3.setData("20230610");
		prd_3.setTempo(22100);

		esc_1 = new Essencial();
		esc_1.setNumero(1);
		esc_1.setProjeto(prj_1);
		esc_1.setData("2020");
		esc_1.setDuracao(4);
		esc_1.setTipo("Crítico");

		esc_2 = new Essencial();
		esc_2.setNumero(0);
		esc_2.setProjeto(prj_2);
		esc_2.setData("2023");
		esc_2.setDuracao(10);
		esc_2.setTipo("OnGoing");

		esc_3 = new Essencial();
		esc_3.setNumero(2);
		esc_3.setProjeto(prj_3);
		esc_3.setData("2023");
		esc_3.setDuracao(4);
		esc_3.setTipo("CockPit");

		alt_1 = new Alternativa();
		alt_1.setNumero(110);
		alt_1.setData("23/02/2019");
		alt_1.setProjeto(prj_1);
		alt_1.setResponsavel("Hélio Cruz Almeida");
		alt_1.setDescricao("		" + alt_1.getProjeto().getId() + "/" + alt_1.getProjeto().getNome()
				+ " --- Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n"
				+ "		In non diam at turpis tristique hendrerit.\n");

		alt_2 = new Alternativa();
		alt_2.setNumero(101);
		alt_2.setData("19/11/2020");
		alt_2.setProjeto(prj_2);
		alt_2.setResponsavel("Márcia Tarvelli");
		alt_2.setDescricao("		" + alt_2.getProjeto().getId() + "/" + alt_2.getProjeto().getNome()
				+ " --- Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n");

		alt_3 = new Alternativa();
		alt_3.setNumero(111);
		alt_3.setData("16/03/2122");
		alt_3.setProjeto(prj_3);
		alt_3.setResponsavel("Guida Amara Cabello");
		alt_3.setDescricao("		" + alt_3.getProjeto().getId() + "/" + alt_3.getProjeto().getNome()
				+ " --- Lorem libero, vitae pretium magna bibendum at.\n"
				+ "		Sed quis risus orci. Donec rutrum.\n");

	}

	public void outputData() {
		System.out.println();
		System.out.println(" ------------------ Relatório: Gestão de Prioridade de Projetos ----------------------");
		System.out.println();
		System.out.println("	ID do Projeto: " + prj_1.getId() + " / Nome: " + prj_1.getNome() + " - Local: "
				+ prj_1.getCidade());
		System.out.println("	Demanda do Projeto: " + dem_1.getProjeto().getNome() + " (ID - "
				+ dem_1.getProjeto().getId() + ")");
		System.out.println("	Demanda: " + dem_1.getNumero() + " - Data início: " + dem_1.getData());
		System.out.println("		ID Projeto associado: (" + prd_1.getProjeto().getId() + ") - Número da Prioridade: "
				+ prd_1.getNumero());
		System.out.println("			Nível de Prioridade: " + prd_1.getNivel());
		System.out.println("			Data: " + prd_1.getData());
		System.out.println("			Estimativa Tempo em dias: " + prd_1.getTempo());
		System.out.println("	ALternativa: " + alt_1.getNumero() + " / Data Verificação: " + alt_1.getData()
				+ " - Projeto" + alt_1.getProjeto().getId());
		System.out.println("		Responsável: " + alt_1.getResponsavel());
		System.out.println("		Descrição: \n" + alt_1.getDescricao());
		System.out.println("	Classificação Essencial --> ID: " + esc_1.getNumero() + " / Duração ("
				+ esc_1.getDuracao() + ") - Data: " + esc_1.getData());
		System.out.println("		Tipo: " + esc_1.getTipo() + " - Projeto: " + esc_1.getProjeto().getId() + "/"
				+ esc_1.getProjeto().getNome());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println("	ID do Projeto: " + prj_2.getId() + " / Nome: " + prj_2.getNome() + " - Local: "
				+ prj_2.getCidade());
		System.out.println("	Demanda do Projeto: " + dem_2.getProjeto().getNome() + " (ID - "
				+ dem_2.getProjeto().getId() + ")");
		System.out.println("	Demanda: " + dem_2.getNumero() + " - Data início: " + dem_2.getData());
		System.out.println("		ID Projeto associado: (" + prd_2.getProjeto().getId() + ") - Número da Prioridade: "
				+ prd_2.getNumero());
		System.out.println("			Nível de Prioridade: " + prd_2.getNivel());
		System.out.println("			Data: " + prd_2.getData());
		System.out.println("			Estimativa Tempo em dias: " + prd_2.getTempo());
		System.out.println("	ALternativa: " + alt_2.getNumero() + " / Data Verificação: " + alt_2.getData()
				+ " - Projeto" + alt_2.getProjeto().getId());
		System.out.println("		Responsável: " + alt_2.getResponsavel());
		System.out.println("		Descrição: \n" + alt_2.getDescricao());
		System.out.println("	Classificação Essencial --> ID: " + esc_2.getNumero() + " / Duração ("
				+ esc_2.getDuracao() + ") - Data: " + esc_2.getData());
		System.out.println("		Tipo: " + esc_2.getTipo() + " - Projeto: " + esc_2.getProjeto().getId() + "/"
				+ esc_2.getProjeto().getNome());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println("	ID do Projeto: " + prj_3.getId() + " / Nome: " + prj_3.getNome() + " - Local: "
				+ prj_3.getCidade());
		System.out.println("	Demanda do Projeto: " + dem_3.getProjeto().getNome() + " (ID - "
				+ dem_3.getProjeto().getId() + ")");
		System.out.println("	Demanda: " + dem_3.getNumero() + " - Data início: " + dem_3.getData());
		System.out.println("		ID Projeto associado: (" + prd_3.getProjeto().getId() + ") - Número da Prioridade: "
				+ prd_3.getNumero());
		System.out.println("			Nível de Prioridade: " + prd_3.getNivel());
		System.out.println("			Data: " + prd_3.getData());
		System.out.println("			Estimativa Tempo em dias: " + prd_3.getTempo());
		System.out.println("	ALternativa: " + alt_3.getNumero() + " / Data Verificação: " + alt_3.getData()
				+ " - Projeto" + alt_3.getProjeto().getId());
		System.out.println("		Responsável: " + alt_3.getResponsavel());
		System.out.println("		Descrição: \n" + alt_3.getDescricao());
		System.out.println("	Classificação Essencial --> ID: " + esc_3.getNumero() + " / Duração ("
				+ esc_3.getDuracao() + ") - Data: " + esc_3.getData());
		System.out.println("		Tipo: " + esc_3.getTipo() + " - Projeto: " + esc_3.getProjeto().getId() + "/"
				+ esc_3.getProjeto().getNome());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();

	}
}
