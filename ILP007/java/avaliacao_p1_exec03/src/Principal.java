
public class Principal {

	Cartao card_1, card_2, card_3;
	Cidade cid_1, cid_2, cid_3;
	Portador port_1, port_2, port_3;

	public void inputData() {

		cid_1 = new Cidade();
		cid_1.setNome("Belém");
		cid_1.setEstado("PA");

		port_1 = new Portador();
		port_1.setUsuario("Francine Prado");
		port_1.setEmail("fran.prado@email.com");
		port_1.setSenha("PWD!@9078");

		card_1 = new Cartao();
		card_1.setNumero("5548321598756542");
		card_1.setTotal(16581.31);
		card_1.setValidade(7);
		card_1.setPortador(port_1);
		card_1.setCidade(cid_1);

		cid_2 = new Cidade();
		cid_2.setNome("Belo Horizonte");
		cid_2.setEstado("MG");

		port_2 = new Portador();
		port_2.setUsuario("Bernardo Mello");
		port_2.setEmail("ber.mello@email.com");
		port_2.setSenha("MNT#%O0P1");

		card_2 = new Cartao();
		card_2.setNumero("5588441598753316");
		card_2.setTotal(25881.11);
		card_2.setValidade(10);
		card_2.setPortador(port_2);
		card_2.setCidade(cid_2);

		cid_3 = new Cidade();
		cid_3.setNome("Fortaleza");
		cid_3.setEstado("CE");

		port_3 = new Portador();
		port_3.setUsuario("Odiney Sampaio");
		port_3.setEmail("odneysamp2012@email.com");
		port_3.setSenha("XSC&$0091");

		card_3 = new Cartao();
		card_3.setNumero("7784325561756951");
		card_3.setTotal(12665.98);
		card_3.setValidade(8);
		card_3.setPortador(port_3);
		card_3.setCidade(cid_3);
	}

	public void outputData() {

		System.out.println();
		System.out.println("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv Dados de Cartão vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");
		System.out.println();
		System.out.println("	Nome do Portador: " + card_1.getPortador().getUsuario());
		System.out.println("	Email: " + card_1.getPortador().getEmail());
		System.out.println("	Senha: " + card_1.getPortador().getSenha());
		System.out.println("		Local: " + card_1.getCidade().getNome() + " / " + card_1.getCidade().getEstado());
		System.out.println();
		System.out.println("	Número Cartão: " + card_1.getNumero() + " - Val.: " + card_1.getValidade() + " Anos");
		System.out.println("		Saldo (Total): R$" + card_1.getTotal());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println("	Nome do Portador: " + card_2.getPortador().getUsuario());
		System.out.println("	Email: " + card_2.getPortador().getEmail());
		System.out.println("	Senha: " + card_2.getPortador().getSenha());
		System.out.println("		Local: " + card_2.getCidade().getNome() + " / " + card_2.getCidade().getEstado());
		System.out.println();
		System.out.println("	Número Cartão: " + card_2.getNumero() + " - Val.: " + card_2.getValidade() + " Anos");
		System.out.println("		Saldo (Total): R$" + card_2.getTotal());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println("	Nome do Portador: " + card_3.getPortador().getUsuario());
		System.out.println("	Email: " + card_3.getPortador().getEmail());
		System.out.println("	Senha: " + card_3.getPortador().getSenha());
		System.out.println("		Local: " + card_3.getCidade().getNome() + " / " + card_3.getCidade().getEstado());
		System.out.println();
		System.out.println("	Número Cartão: " + card_3.getNumero() + " - Val.: " + card_3.getValidade() + " Anos");
		System.out.println("		Saldo (Total): R$" + card_3.getTotal());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();

	}
}
