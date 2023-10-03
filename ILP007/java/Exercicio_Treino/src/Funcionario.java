
public class Funcionario {

	private int func_id;
	private String func_nome;
	private String email;
	private String cpf;
	private String ctps;
	private Departamento departamento;

	public int getFunc_id() {
		return func_id;
	}

	public String getFunc_nome() {
		return func_nome;
	}

	public String getEmail() {
		return email;
	}

	public String getCpf() {
		return cpf;
	}

	public String getCtps() {
		return ctps;
	}

	public Departamento getDepartamento() {
		return departamento;
	}

	public void setFunc_id(int func_id) {
		this.func_id = func_id;
	}

	public void setFunc_nome(String func_nome) {
		this.func_nome = func_nome;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public void setCtps(String ctps) {
		this.ctps = ctps;
	}

	public void setDepartamento(Departamento departamento) {
		this.departamento = departamento;
	}

}
