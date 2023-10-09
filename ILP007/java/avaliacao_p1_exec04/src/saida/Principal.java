package saida;

import historico.Relatorio;
import tipo.Fisica;
import tipo.Juridica;
import usuario.Cliente;

public class Principal {

	Relatorio rel1, rel2, rel3, rel4;
	Fisica f1, f2;
	Juridica j1, j2;
	Cliente c1, c2, c3, c4;

	public void inputData() {

		rel1 = new Relatorio();
		rel1.setOrdem("60000123");
		rel1.setTexto("\n			Donec et dolor sed dui congue auctor sed vitae ex.\n"
				+ "			Nulla accumsan risus orci, nec tincidunt diam accumsan ac.\n"
				+ "			Proin scelerisque dolor a tempus scelerisque.\n");

		rel2 = new Relatorio();
		rel2.setOrdem("63339900");
		rel2.setTexto("\n			Interdum et malesuada fames ac ante ipsum primis in faucibus.\n"
				+ "			Vestibulum semper lacinia enim nec egestas.\n"
				+ "			Phasellus at rhoncus justo. Nunc dictum nibh ut velit.\n");

		rel3 = new Relatorio();
		rel3.setOrdem("630YYX-58");
		rel3.setTexto("\n			Duis vel ullamcorper nulla, ut molestie risus.\n"
				+ "			Pellentesque accumsan libero at interdum egestas.\n"
				+ "			Proin quam odio, ornare et ipsum eget, mattis volutpat augue.\n"
				+ "			Interdum et.\n");

		rel4 = new Relatorio();
		rel4.setOrdem("70XX9-51");
		rel4.setTexto(
				"\n			Nam dictum euismod finibus.\n" + "			Cras vitae rhoncus dui, ut lacinia turpis.\n"
						+ "			Praesent eu felis nec velit elementum viverra eget vitae nisl.\n"
						+ "			Donec a sollicitudin ante.\n");

		c1 = new Cliente();
		c1.setEmail("non.xoxo@mail.com");
		c1.setCidade("São Paulo");
		c1.setRelatorio(rel1);

		c2 = new Cliente();
		c2.setEmail("po.www@mail.com");
		c2.setCidade("Rio de Janeiro");
		c2.setRelatorio(rel2);

		c3 = new Cliente();
		c3.setEmail("novo.cliente@mail.com.br");
		c3.setCidade("Vila Velha");
		c3.setRelatorio(rel3);

		c4 = new Cliente();
		c4.setEmail("don.ovn@loja.com.ag");
		c4.setCidade("Uberaba");
		c4.setRelatorio(rel4);

		f1 = new Fisica();
		f1.setNome("Fernanda Daniela Compabi");
		f1.setCpf("825.465.798-41");
		f1.setCliente(c1);

		f2 = new Fisica();
		f2.setNome("Cauby Antenor de Araújo");
		f2.setCpf("342.615.945-75");
		f2.setCliente(c2);

		j1 = new Juridica();
		j1.setRazaoSocial("Shopping das Peças");
		j1.setCnpj("10.661.970/0001-91");
		j1.setCliente(c3);

		j2 = new Juridica();
		j2.setRazaoSocial("Pavilhão Canário");
		j2.setCnpj("67.779.402/0001-07");
		j2.setCliente(c4);

	}

	public void outputData() {

		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println(
				"	Nome: " + f1.getNome() + " / CPF: " + f1.getCpf() + " / Cidade: " + f1.getCliente().getCidade());
		System.out.println("	Email: " + f1.getCliente().getEmail());
		System.out.println("	Ordem: " + f1.getCliente().getRelatorio().getOrdem() + "\n		Texto: "
				+ f1.getCliente().getRelatorio().getTexto());
		System.out.println();

		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println("	Razão Social: " + j1.getRazaoSocial() + " / CNPJ: " + j1.getCnpj() + " / Cidade: "
				+ j1.getCliente().getCidade());
		System.out.println("	Email: " + j1.getCliente().getEmail());
		System.out.println("	Ordem: " + j1.getCliente().getRelatorio().getOrdem() + "\n		Texto: "
				+ j1.getCliente().getRelatorio().getTexto());

		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println(
				"	Nome: " + f2.getNome() + " / CPF: " + f2.getCpf() + " / Cidade: " + f2.getCliente().getCidade());
		System.out.println("	Email: " + f2.getCliente().getEmail());
		System.out.println("	Ordem: " + f2.getCliente().getRelatorio().getOrdem() + "\n		Texto: "
				+ f2.getCliente().getRelatorio().getTexto());
		System.out.println();

		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
		System.out.println();
		System.out.println("	Razão Social: " + j2.getRazaoSocial() + " / CNPJ: " + j2.getCnpj() + " / Cidade: "
				+ j2.getCliente().getCidade());
		System.out.println("	Email: " + j2.getCliente().getEmail());
		System.out.println("	Ordem: " + j2.getCliente().getRelatorio().getOrdem() + "\n		Texto: "
				+ j2.getCliente().getRelatorio().getTexto());
		System.out.println();
		System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();

	}

}
