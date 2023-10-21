
public class Aluno {

	private long ra;
	private String name;
	private Disciplina disciplina[];

	public long getRa() {
		return ra;
	}

	public String getName() {
		return name;
	}

	public Disciplina[] getDisciplina() {
		return disciplina;
	}

	public void setRa(long ra) {
		this.ra = ra;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setDisciplina(Disciplina[] disciplina) {
		this.disciplina = disciplina;
	}

}
