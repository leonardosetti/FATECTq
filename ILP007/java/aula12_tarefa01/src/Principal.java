
public class Principal {

	Aluno a1;
	Disciplina d1, d2, d3;
	Professor p1, p2, p3;

	public void inputData() {

		p1 = new Professor();
		p2 = new Professor();
		p3 = new Professor();

		p1.setNome("Marcelo");
		p1.setTitulacao("Mestre");

		p2.setNome("Leonardo");
		p2.setTitulacao("Doutor");

		p3.setNome("Gabriela");
		p3.setTitulacao("Especialista");

		d1 = new Disciplina();
		d2 = new Disciplina();
		d3 = new Disciplina();

		d1.setNome("Matemática - I");
		d1.setSigla("MAT-1");
		d1.setProfessor(p1);

		d2.setNome("Engenharia de Sftware II");
		d2.setSigla("ES2");
		d2.setProfessor(p2);

		d3.setNome("Gestão Ambiental");
		d3.setSigla("GESAM");
		d3.setProfessor(p3);

		Disciplina vetorDisciplina[];
		vetorDisciplina = new Disciplina[3];
		vetorDisciplina[0] = d1;
		vetorDisciplina[1] = d2;
		vetorDisciplina[2] = d3;

		a1 = new Aluno();
		a1.setName("Caio Mattheus Pedrosa");
		a1.setRa(1399554841);
		a1.setDisciplina(vetorDisciplina);

	}

	public void outputData() {

		System.out.println();
		System.out.println("---------------------------------- Aluno -----------------------------------");
		System.out.println();
		System.out.println("		Nome:	" + a1.getName());
		System.out.println("		RA:	" + a1.getRa());
		System.out.println("____________________________________________________________________________");
		System.out.println("	***** Disciplinas Matriculadas:	***** ");
		System.out.println();
		for (int i = 0; i < 3; i++) {
			System.out.println("	Sigla:	" + a1.getDisciplina()[i].getSigla());
			System.out.println("	Nome:	" + a1.getDisciplina()[i].getNome());
			System.out.println("	Professor: 	" + a1.getDisciplina()[i].getProfessor().getNome() + " / "
					+ a1.getDisciplina()[i].getProfessor().getTitulacao());
			System.out.println("----------------------------------------------------------------------------");
			System.out.println();

		}

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}

}
