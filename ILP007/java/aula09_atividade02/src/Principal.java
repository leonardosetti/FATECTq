
public class Principal {
	
	Vendedor v1;
	Motorista m1;
	
	public void entradaDados() {
		v1 = new Vendedor();
		v1.setNome("Leonardo Setti");
		v1.setCtps(1234567890);
		v1.setSalario(6000.00);
		v1.setMeta(30000.00);
		v1.setComissao(0.7);
		
		m1 = new Motorista();
		m1.setNome("Antonio Pereira");
		m1.setCtps(123056789);
		m1.setCnh("123.456.456.789-7");
		m1.setSalario(7500.00);
		m1.setAdicional(3600.00);
	}
	
	public void saidaDados() {
		System.out.println("---------------------------------Vendedor---------------------------------");
		System.out.println("Nome: " + v1.getNome());
		System.out.println("Carteira de Trabalho: " + v1.getCtps());
		System.out.println("Salário atual: R$" + v1.getSalario());
		System.out.println("Meta de vendas: "+v1.getMeta());
		System.out.println("Percentual de Comissão: " + v1.getComissao() + "%");
		System.out.println("---------------------------------------------------------------------------");
		System.out.println("                                                                           ");
		System.out.println("                                                                           ");
		System.out.println("--------------------------------Motorista----------------------------------");
		System.out.println("Nome: " + m1.getNome());
		System.out.println("Carteira de Trabalho: " + m1.getCtps());
		System.out.println("Carteira nacional de Habilitação: "+ m1.getCnh());
		System.out.println("Salário atual: R$" + m1.getSalario());
		System.out.println("Adicional: R$" + m1.getAdicional());
		System.out.println("---------------------------------------------------------------------------");
		System.out.println("                                                                           ");
				
	}
	public static void main(String args[]) {
		
		Principal p = new Principal();
		p.entradaDados();
		p.saidaDados();
	}

}
