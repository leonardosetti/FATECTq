
public class Principal {

	Artigo art1, art2;
	Professor prof1;
	Universidade uni1;
	Projeto proj1;

	public void inputData() {

		art1 = new Artigo();
		art2 = new Artigo();
		prof1 = new Professor();
		uni1 = new Universidade();
		proj1 = new Projeto();

		prof1.setNome("Sergio Amadeus");
		prof1.setTitulacao("Especialista");

		art1.setTitulo("Tecnologia e Segregação Social");
		art1.setConteudo(
				"Discussão sobre os efeitos da tecnologia nas diversas camadas sociais e a ruptura de acessos digitais");

		art2.setTitulo("Militarização da Sociedade com apoio da tecnologia");
		art2.setConteudo("TBD");

		uni1.setNome("UniSanta");
		uni1.setCidade("Santos");

		proj1.setNome("Tecnologia e Sociedade");
		proj1.setOrcamento(169000);
		proj1.setProfessor(prof1);

		Artigo vtrArtigo[];
		vtrArtigo = new Artigo[2];
		vtrArtigo[0] = art1;
		vtrArtigo[1] = art2;

		prof1.setArtigo(vtrArtigo);
		prof1.setUniversidade(uni1);
		art1.setProfessor(prof1);
		art2.setProfessor(prof1);
	}

	public void outputData() {

		System.out.println();
		System.out.println("----  Relatório de Artigos -----");
		for (int i = 0; i < 2; i++) {
			System.out.println("Professor responsável: " + prof1.getNome());
			System.out.println("	Titulação: " + prof1.getTitulacao());
			System.out.println("Universidade: " + prof1.getUniversidade());
			System.out.println("	Artigo: " + prof1.getArtigo()[i].getTitulo());
			System.out.println("	Artigo: " + prof1.getArtigo()[i].getConteudo());
			System.out.println("__________________________________________________");

			System.out.println();

		}

	}

	public static void main(String[] args) {
		Principal principal = new Principal();
		principal.inputData();
		principal.outputData();

	}
}
