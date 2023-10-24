
public class Principal {

	Funcionario func;
	Departamento dpto;
	Relatorio rl1, rl2;

	public void inputData() {

		func = new Funcionario();
		dpto = new Departamento();
		rl1 = new Relatorio();
		rl2 = new Relatorio();

		dpto.setNome("Distribui��o");
		dpto.setSigla("DSTR");

		rl1.setData("25/09/2023");
		rl1.setTexto("Nulla ante odio, lobortis vel dictum eget, scelerisque in ante. Nunc rhoncus.");

		rl2.setData("20/10/2023");
		rl2.setTexto("Lorem ipsum dolor sit amet.");

		Relatorio vetorRelatorio[];
		vetorRelatorio = new Relatorio[2];
		vetorRelatorio[0] = rl1;
		vetorRelatorio[1] = rl2;

		func.setCtps("1234567");
		func.setDepartamento(dpto);
		func.setNome("Saulo Cruz");
		func.setSalario(8654.36);
		func.setRelatorio(vetorRelatorio);
	}

	public void outputData() {
		
		System.out.println();
		System.out.println("Relat�rio");
		System.out.println("Fucion�rio:		"+func.getNome()+"	CTPS: "+func.getCtps());
		System.out.println("Sal�rio		R$"  +func.getSalario());
		System.out.println("Departamento:	"+func.getDepartamento().getNome() + " / "+func.getDepartamento().getSigla());
		System.out.println();
		System.out.println();
		for (int i=0;i<2;i++) {
			System.out.println("	Data Relat�rio: " +func.getRelatorio()[i].getData());
			System.out.println("	Descritivo: " +func.getRelatorio()[i].getTexto());
			System.out.println("'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");
		}

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}
}
