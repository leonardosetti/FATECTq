
public class Principal {

	Internauta ui_01, ui_02, ui_03;

	public void inputData() {

		ui_01 = new Internauta();
		ui_02 = new Internauta();
		ui_03 = new Internauta();

		ui_01.setUsername("leonardo");
		ui_01.setEmail("leonardo@mail.com");
		ui_01.setSenha("cyft7oy89i");

		ui_02.setUsername("maria");
		ui_02.setEmail("maria@mail.com");
		ui_02.setSenha("moi987@");

		ui_03.setUsername("antonio");
		ui_03.setEmail("antonio@mail.com");
		ui_03.setSenha("-98dsfhn");

		ui_01.setInternauta(ui_02);
		ui_02.setInternauta(ui_03);
		ui_03.setInternauta(ui_01);

	}

	public void outputData() {

		System.out.println("Internautas Indicam: ######################################");
		System.out.println("");
		System.out.println("Username: " + ui_01.getUsername());
		System.out.println("Email: " + ui_01.getEmail());
		System.out.println("Senha: " + ui_01.getSenha());
		System.out.println(
				"			Indica: " + ui_01.getInternauta().getUsername() + " - Email: " + ui_01.getInternauta().getEmail());
		System.out.println("");
		System.out.println("############################################################");
		System.out.println("");
		System.out.println("Username: " + ui_02.getUsername());
		System.out.println("Email: " + ui_02.getEmail());
		System.out.println("Senha: " + ui_02.getSenha());
		System.out.println(
				"			Indica: " + ui_02.getInternauta().getUsername() + " - Email: " + ui_02.getInternauta().getEmail());
		System.out.println("");
		System.out.println("############################################################");
		System.out.println("");
		System.out.println("Username: " + ui_03.getUsername());
		System.out.println("Email: " + ui_03.getEmail());
		System.out.println("Senha: " + ui_03.getSenha());
		System.out.println(
				"			Indica: " + ui_03.getInternauta().getUsername() + " - Email: " + ui_03.getInternauta().getEmail());
		System.out.println("");
		System.out.println("############################################################");
	}

	public static void main(String args []) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();

	}
}
