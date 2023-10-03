
public class Principal {

	Departamento d1;
	Departamento d2;
	Empregado e1;
	Empregado e2;
	Administrativo a1;
	Terceirizado t1;

	public void entradaDados() {
		d1 = new Departamento();
		d2 = new Departamento();
		e1 = new Empregado();
		e2 = new Empregado();
		a1 = new Administrativo();
		t1 = new Terceirizado();

		d1.setNome("Departamento Pessoal");
		d1.setNumero("1001");

		d2.setNome("Departamento Operações");
		d2.setNumero("1002");

		e1.setCtps(1000969600);
		e1.setNome("Leonardo Setti");
		e1.setSalario(1000.00);
		e1.setDepartamento(d1);

		e2.setCtps(1000757500);
		e2.setNome("Maria Braga");
		e2.setSalario(1500.00);
		e2.setDepartamento(d2);

		a1.setHorario(8);
		a1.setAdicional(1800);
		a1.setEmpregado(e1);

		t1.setValorHora(15);
		t1.setSetor("Pós Venda");
		t1.setEmpregado(e2);

	}

	public void saidaDados() {

		System.out.println("-------------------------------- Departamentos ---------------------------------");
		System.out.println("");
		System.out.println("Nome Dep: " + d1.getNome() + " - " + "Cod Dept:" + d1.getNumero() + ";");
		System.out.println("Nome Dep: " + d2.getNome() + " - " + "Cod Dept:" + d2.getNumero() + ";");
		System.out.println("");
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println("");
		System.out.println("--------------------------- Empregados Terceirizados ---------------------------");
		System.out.println("");
		System.out.println("Nome Funcionário: " + a1.getEmpregado().getNome());
		System.out.println("Carteira Profissional: " + a1.getEmpregado().getCtps());
		System.out.println("Salário: R$" + a1.getEmpregado().getSalario());
		System.out.println("Adicional: R$" + a1.getAdicional());
		System.out.println("Horário: " + a1.getHorario() + "h");
		System.out.println("Departamento: " + a1.getEmpregado().getDepartamento().getNome());
		System.out.println("");
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println("");
		System.out.println("-------------------------- Empregados Administrativos --------------------------");
		System.out.println("");
		System.out.println("Nome Funcionário: " + t1.getEmpregado().getNome());
		System.out.println("Carteira Profissional: " + t1.getEmpregado().getCtps());
		System.out.println("Salário: R$" + t1.getEmpregado().getSalario());
		System.out.println("Valor Hora : R$" + t1.getValorHora());
		System.out.println("Setor: " + t1.getSetor());
		System.out.println("Departamento: " + t1.getEmpregado().getDepartamento().getNome());
		System.out.println("");
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println("");

	}

	public static void main(String args[]) {
		Principal p = new Principal();
		p.entradaDados();
		p.saidaDados();

	}

}
