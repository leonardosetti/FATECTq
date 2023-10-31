import cadastro.Proprietario;
import imoveis.Propriedade;

public class Principal {

	Propriedade propri_01, propri_02;
	Proprietario propo_01, propo_02;

	public void inputData() {

		propri_01 = new Propriedade();
		propri_02 = new Propriedade();

		propo_01 = new Proprietario();
		propo_02 = new Proprietario();

		propri_01.setEndereco("Rua Venâncio Cunha 374 - Vila Nobre - Jundiaí");
		propri_01.setArea(17000);
		propri_01.setValor(800000);

		propri_02.setEndereco("Av Tunay - 2071 - Ap -503 - Moema - São Paulo");
		propri_02.setArea(215);
		propri_02.setValor(2500000);

		propo_01.setNome("Patrícia Taloni Mello");
		propo_01.setCidade("Piracicaba");

		propo_02.setNome("Hélio Marins Oliveira");
		propo_02.setCidade("Trindade");

		Propriedade vtrPropri[];
		vtrPropri = new Propriedade[2];
		vtrPropri[0] = propri_01;
		vtrPropri[1] = propri_01;

		Proprietario vtrPropo[];
		vtrPropo = new Proprietario[2];
		vtrPropo[0] = propo_01;
		vtrPropo[1] = propo_02;

		propri_01.setProprietario(vtrPropo);
		propri_02.setProprietario(vtrPropo);

		propo_01.setPropriedade(vtrPropri);
		propo_02.setPropriedade(vtrPropri);

	}

	public void outputData() {

		System.out.println();
		System.out.println("---- Lista de Proprietários e Propriedades -----");
		System.out.println();
		System.out.println("Proprietário: " + propo_01.getNome());
		System.out.println("Residente em: " + propo_01.getCidade());
		System.out.println("Endereço : " + propo_01.getPropriedade()[0].getEndereco());
		System.out.println("Área : " + propo_01.getPropriedade()[0].getArea());
		System.out.println("Valor: R$" + propo_01.getPropriedade()[0].getValor());
		System.out.println();
		System.out.println("************************************************************");
		System.out.println();
		System.out.println("Proprietário: " + propo_02.getNome());
		System.out.println("Residente em: " + propo_02.getCidade());
		System.out.println("Endereço : " + propo_02.getPropriedade()[1].getEndereco());
		System.out.println("Área : " + propo_02.getPropriedade()[1].getArea());
		System.out.println("Valor: R$" + propo_02.getPropriedade()[1].getValor());
	}

	public static void main(String[] args) {
		Principal principal = new Principal();
		principal.inputData();
		principal.outputData();
	}
}
