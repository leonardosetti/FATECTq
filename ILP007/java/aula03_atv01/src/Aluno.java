
public class Aluno {
	
	private long ra;
	private String nome;
	private String nascimento;
	private char sexo;
	private double enem;
	
	public void setRa(long ra) {
		this.ra = ra;
	}
	
	public long getRa() {
		return ra;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNascimento(String nascimento) {
		this.nascimento  = nascimento;
	}
	
	public String getNascimento() {
		return nascimento;
	}
	
	public void setSexo(char sexo) {
		this.sexo = sexo;
	}
	
	public char getSexo() {
		return sexo;
	}
	
	public void setEnem(double enem) {
		this.enem = enem;
	}
	
	public double getEnem() {
		return enem;
	}

}
