public class Principal {
	Cliente c1;
	Pedido p1;
	public void entradaDados() {
		
		c1 = new Cliente();
		c1.setNome("Leonardo Setti");
		c1.setCpf("452.329.965-28");
		c1.setEmail("leonardo.setti@email.com.br");
		
		p1 = new Pedido();
		p1.setNumero(10);
		p1.setData("29/09/2023");
		p1.setCliente(c1);
		p1.setTotal(1690.87);
	}
	
	public void saidaDados() {
		System.out.println("----------------------------------Cliente----------------------------------");
		System.out.println("Nome: " + c1.getNome());
		System.out.println("CPF: " + c1.getCpf());
		System.out.println("Email" + c1.getEmail());
		System.out.println("                                                                           ");
		System.out.println("###########################################################################");
		System.out.println("                                                                           ");
		System.out.println("----------------------------------Pedido-----------------------------------");
		System.out.println("Número: " + p1.getNumero());
		System.out.println("Data do Pedido: " + p1.getData());
		System.out.println("---------------------------------------------------------------------------");
		System.out.println("Cliente: " + p1.getCliente().getNome());
		System.out.println("Documento: " + p1.getCliente().getCpf());
		System.out.println("Email: " + p1.getCliente().getEmail());
		System.out.println("---------------------------------------------------------------------------");
		System.out.println("Total do Pedido R$: "+ p1.getTotal());
		System.out.println("                                                                           ");
		System.out.println("###########################################################################");
	}

	public static void main(String args[]) {
		Principal p = new Principal();
		p.entradaDados();
		p.saidaDados();
	}
}
