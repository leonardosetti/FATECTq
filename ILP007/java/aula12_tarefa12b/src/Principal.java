
public class Principal {

	Cliente c1;
	Boleto b1;
	Prestacao p1, p2;

	public void inputData() {

		c1 = new Cliente();
		b1 = new Boleto();
		p1 = new Prestacao();
		p2 = new Prestacao();

		c1.setNome("Ana Cláudia Paretto");
		c1.setCpf("556.324.202-16");
		c1.setEmail("anacparetto@hotmail.com");

		p1.setCodBar(1115441254);
		p1.setVlrPrestacao(39.90);

		p2.setCodBar(1115441255);
		p2.setVlrPrestacao(11.90);

		Prestacao vetorPrestacao[];
		vetorPrestacao = new Prestacao[2];
		vetorPrestacao[0] = p1;
		vetorPrestacao[1] = p2;

		b1.setCliente(c1);
		b1.setNumero(1554440000);
		b1.setPrestacao(vetorPrestacao);

	}
	
	public void outputData() {
		System.out.println();
		System.out.println("------------- Cliente / Prestações ----------------");
		System.out.println("Nome:	"+b1.getCliente().getNome());
		System.out.println("CPF"	+ b1.getCliente().getCpf() );
		System.out.println("Email:	"+b1.getCliente().getEmail());
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println("Dados do Boleto:");
		System.out.println("Boleto número:	"+ b1.getNumero());
		for (int i = 0;i<2;i++) {
			System.out.println("Número Cód de Barras:	"+b1.getPrestacao()[i].getCodBar());
			System.out.println("Valor da prestação R$:	"+b1.getPrestacao()[i].getVlrPrestacao());
			
			System.out.println("--------------------------------------------------------------");
		}
		System.out.println();
	}
	
	public static void main (String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}

}
