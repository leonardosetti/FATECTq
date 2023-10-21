
public class Principal {

	Internauta us1;
	Email mail1, mail2, mail3, mail4, mail5, mail6, mail7;

	public void inputData() {

		mail1 = new Email();
		mail2 = new Email();
		mail3 = new Email();
		mail4 = new Email();
		mail5 = new Email();
		mail6 = new Email();
		mail7 = new Email();

		mail1.setUsuario("mauricio1996");
		mail1.setProvedor("@gmail.com");

		mail2.setUsuario("anaclaudia.cck");
		mail2.setProvedor("@yahoo.com");

		mail3.setUsuario("pedro.santos");
		mail3.setProvedor("@yahoo.com");

		mail4.setUsuario("saulo_339");
		mail4.setProvedor("@folha.com.br");

		mail5.setUsuario("thamarina.coelho");
		mail5.setProvedor("@gmail.com");

		mail6.setUsuario("faberpepy");
		mail6.setProvedor("@gmail.com");

		mail7.setUsuario("samir_885p");
		mail7.setProvedor("@nacional.edu.ar");

		Email vetorEmail[];
		vetorEmail = new Email[7];
		vetorEmail[0] = mail1;
		vetorEmail[1] = mail2;
		vetorEmail[2] = mail3;
		vetorEmail[3] = mail4;
		vetorEmail[4] = mail5;
		vetorEmail[5] = mail6;
		vetorEmail[6] = mail7;

		us1 = new Internauta();
		us1.setUsername("admin_principal");
		us1.setSenha("123mudar");
		us1.setEmail(vetorEmail);

	}

	public void outputData() {

		System.out.println("");
		System.out.println("Username:	" + us1.getUsername());
		System.out.println("Password:	" + us1.getSenha());
		System.out.println("");
		System.out.println("Emails atrelados:");
		System.out.println("");
		for (int i = 0; i < 3; i++) {
			System.out.println("Email:	" + us1.getEmail()[i].getUsuario() + us1.getEmail()[i].getProvedor());
			System.out.println("_______________________________________________________________________");
			System.out.println("");
		}

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}
}
