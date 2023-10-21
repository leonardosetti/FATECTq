
public class Principal {

	Graduacao g1, g2;
	PosGraduacao p1;

	public void inputData() {

		g1 = new Graduacao();
		g1.setNome("Paulo Henrique Vasconcellos");
		g1.setRa(1780000001);
		g1.setProva(6.1);
		g1.setTrabalho(9.3);
		g1.setEstagio(10);
		g1.setTcc(8.6);

		g2 = new Graduacao();
		g2.setNome("Gabriela Maria Mendonça");
		g2.setRa(1780000004);
		g2.setProva(10);
		g2.setTrabalho(10);
		g2.setEstagio(10);
		g2.setTcc(9.8);

		p1 = new PosGraduacao();
		p1.setNome("Haroldo Pitolli");
		p1.setRa(1780000099);
		p1.setProva(10);
		p1.setTrabalho(10);
		p1.setArtigo(9);
		p1.setBanca(10);

	}

	public void outputData() {

		System.out.println();
		System.out.println("Graduação");
		System.out.println("Aluno:	" + g1.getNome());
		System.out.println("RA:	" + g1.getRa());
		System.out.println("Nota Prova:	" + g1.getProva());
		System.out.println("Nota Trabalho:	" + g1.getTrabalho());
		System.out.println("Nota Estágio:	" + g1.getEstagio());
		System.out.println("Nota TCC:	" + g1.getTcc());
		System.out.println("Média Final:	" + g1.calculaMedia());
		System.out.println();
		System.out.println("Aluno:	" + g2.getNome());
		System.out.println("RA:	" + g2.getRa());
		System.out.println("Nota Prova:	" + g2.getProva());
		System.out.println("Nota Trabalho:	" + g2.getTrabalho());
		System.out.println("Nota Estágio:	" + g2.getEstagio());
		System.out.println("Nota TCC:	" + g2.getTcc());
		System.out.println("Média Final:	" + g2.calculaMedia());
		System.out.println();
		System.out.println("------------------------------------------------------------------");
		System.out.println();
		System.out.println("Pós-Graduação");
		System.out.println("Aluno:	" + p1.getNome());
		System.out.println("RA:	" + p1.getRa());
		System.out.println("Nota Prova:	" + p1.getProva());
		System.out.println("Nota Trabalho:	" + p1.getTrabalho());
		System.out.println("Nota Artigo:	" + p1.getArtigo());
		System.out.println("Nota Banca:	" + p1.getBanca());
		System.out.println("Média Final:	" + p1.calculaMedia());

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();

	}
}
