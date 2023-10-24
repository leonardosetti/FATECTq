
public class Principal {

	Viagem viagem;
	Passageiro p1, p2, p3;

	public void inputData() {

		viagem = new Viagem();
		p1 = new Passageiro();
		p2 = new Passageiro();
		p3 = new Passageiro();

		p1.setNome("Aline Simões");
		p1.setTelefone("(11)97115-5878");

		p2.setNome("Brenno Taveres Souza");
		p2.setTelefone("(16)9914-9906");

		p3.setNome("Janice Prió");
		p3.setTelefone("(19)93358-5878");

		Passageiro vetorPassageiro[];
		vetorPassageiro = new Passageiro[3];
		vetorPassageiro[0] = p1;
		vetorPassageiro[1] = p2;
		vetorPassageiro[2] = p3;

		viagem.setCidade("Belo Horizonte");
		viagem.setData("22/03/2023");
		viagem.setValor(1670.00);
		viagem.setPassageiro(vetorPassageiro);

	}

	public void otputData() {
		System.out.println("----------------Agenda de Viagem-----------------------------");
		System.out.println("Data:	" + viagem.getData());
		System.out.println("Destino:	" + viagem.getCidade());
		System.out.println("" + viagem.getValor());
		System.out.println();
		System.out.println("Lista Passageiros:");
		for (int i = 0; i < 3; i++) {
			System.out.println();
			System.out.println("	Nome:	" + viagem.getPassageiro()[i].getNome());
			System.out.println("	Telefone:	" + viagem.getPassageiro()[i].getTelefone());
			System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
			System.out.println();
		}

	}

	public static void main(String[] args) {

		Principal p = new Principal();
		p.inputData();
		p.otputData();

	}
}
