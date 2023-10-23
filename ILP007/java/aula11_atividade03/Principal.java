
public class Principal {

	Aluno a1;
	Disciplina d1, d2, d3;

	public void inputData() {

		
		d1 = new Disciplina();
		d2 = new Disciplina();
		d3 = new Disciplina();
		
		d1.setNome(null);
		d1.setSigla(null);
		d1.setProfessor(null);

		d2.setNome(null);
		d2.setSigla(null);
		d2.setProfessor(null);
		
		d3.setNome(null);
		d3.setSigla(null);
		d3.setProfessor(null);
		
		
		a1 = new Aluno();
		a1.setName(null);
		a1.setRa(0);
		
	}

	public void outputData() {

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}

}
