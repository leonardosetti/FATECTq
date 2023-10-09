package registro;

public class Principal {
	Usuario usr_01;
	Usuario usr_02;
	Usuario usr_03;
	Usuario usr_04;

	public void inputData() {
		usr_01 = new Usuario();
		usr_01.setNome("Silvio Marino");
		usr_01.setCpf("438.114.450-30");

		usr_02 = new Usuario();
		usr_02.setNome("Thania Bragatto");
		usr_02.setCpf("184.024.510-71");

		usr_03 = new Usuario();
		usr_03.setNome("Daniel César Alenil");
		usr_03.setCpf("734.510.360-96");

		usr_04 = new Usuario();
		usr_04.setNome("Suzana Vicenni");
		usr_04.setCpf("827.922.620-60");

		usr_01.setUsuario(usr_02);
		usr_02.setUsuario(usr_03);
		usr_03.setUsuario(usr_04);
		usr_04.setUsuario(usr_01);

	}

	public void outputData() {
		System.out.println();
		System.out.println("----------------------------------- Usuários --------------------------------------");
		System.out.println();
		System.out.println("	Nome de usuário: " + usr_01.getNome());
		System.out.println("	CPF: " + usr_01.getCpf());
		System.out.println("		Usuário relacionado com: " + usr_01.getUsuario().getNome() + " / CPF..: "
				+ usr_01.getUsuario().getCpf());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println("	Nome de usuário: " + usr_02.getNome());
		System.out.println("	CPF: " + usr_02.getCpf());
		System.out.println("		Usuário relacionado com: " + usr_02.getUsuario().getNome() + " / CPF..: "
				+ usr_02.getUsuario().getCpf());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println("	Nome de usuário: " + usr_03.getNome());
		System.out.println("	CPF: " + usr_03.getCpf());
		System.out.println("		Usuário relacionado com: " + usr_03.getUsuario().getNome() + " / CPF..: "
				+ usr_03.getUsuario().getCpf());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println("	Nome de usuário: " + usr_03.getNome());
		System.out.println("	CPF: " + usr_02.getCpf());
		System.out.println("		Usuário relacionado com: " + usr_03.getUsuario().getNome() + " / CPF..: "
				+ usr_03.getUsuario().getCpf());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println("--------------------------------------- Fim ----------------------------------------");
	}

	public static void main(String[] args) {

		Principal p = new Principal();
		p.inputData();
		p.outputData();

	}

}
