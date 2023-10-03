
public class Principal {

	Usuario usr_01;
	Cidade cid_01;
	Cliente cli_01;

	public void inputData() {

		cid_01 = new Cidade();
		usr_01 = new Usuario();
		cli_01 = new Cliente();

		cid_01.setNome("Campinas");
		cid_01.setEstado("SP");

		usr_01.setUsername("leonardosetti");
		usr_01.setEmail("leonardosetti@mail.com");
		usr_01.setSenha("SE¨%UttRG&UHIO");

		cli_01.setNome("Leonardo Setti");
		cli_01.setCliente_id(0);
		cli_01.setIdade(40);
		cli_01.setCidade(cid_01);
		cli_01.setUsuario(usr_01);

	}

	public void outputData() {
		System.out.println("===============================================================================");
		System.out.println("---------------------------------- Clientes -----------------------------------");
		System.out.println("");
		System.out.println("ID: " + cli_01.getCliente_id());
		System.out.println("Nome : " + cli_01.getNome());
		System.out.println("Idade : " + cli_01.getIdade());
		System.out
				.println("Cidade : " + cli_01.getCidade().getNome() + " - Estado : " + cli_01.getCidade().getEstado());
		System.out.println("Email de usuário: " + cli_01.getUsuario().getEmail());
		System.out.println("Username: " + cli_01.getUsuario().getUsername());
		System.out.println("Senha: " + cli_01.getUsuario().getSenha());
		System.out.println("");
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		

	}
	
	public static void main (String args[]) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();
		
	}

}
