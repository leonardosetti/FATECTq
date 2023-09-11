
public class Aluno extends Pessoa {
	
	private String ra;
	private Professor professor;
	public String getRa() {
		return ra;
	}
	public Professor getProfessor() {
		return professor;
	}
	public void setRa(String ra) {
		this.ra = ra;
	}
	public void setProfessor(Professor professor) {
		this.professor = professor;
	}
}
