
public class Principal {

	Tanque tnk;
	Graneleiro grn;

	public void inputData() {

		tnk = new Tanque();
		tnk.setCombustivel(300);
		tnk.setCor("Amarelo");
		tnk.setPlaca("EZK9908");
		tnk.setTara(18700);
		tnk.setLitros(30000);
		tnk.setCaminhao(tnk);

		grn = new Graneleiro();
		grn.setCombustivel(286);
		grn.setCor("Bordô");
		grn.setPlaca("PZK76I7");
		grn.setTara(16050);
		grn.setComprimento(42);
		grn.setVolume(19850);
		grn.setCaminhao(grn);

	}

	public void outputData() {

		System.out.println();
		System.out.println("------------ Caminhão Tanque -------------");
		System.out.println("Placa:				" + tnk.getCaminhao().getPlaca());
		System.out.println("Cor:				" + tnk.getCaminhao().getCor());
		System.out.println("Tara:				" + tnk.getCaminhao().getTara());
		System.out.println("Combustível:			" + tnk.getCaminhao().getCombustivel());
		System.out.println("Litros no Tanque:		" + tnk.getLitros());
		System.out.println("Peso:				" + tnk.calculaPeso());
		System.out.println();
		System.out.println("------------ Caminhão Graneleiro -------------");
		System.out.println("Placa:				" + grn.getCaminhao().getPlaca());
		System.out.println("Cor:				" + grn.getCaminhao().getCor());
		System.out.println("Tara:				" + grn.getCaminhao().getTara());
		System.out.println("Combustível:			" + grn.getCaminhao().getCombustivel());
		System.out.println("Volume:				" + grn.getVolume());
		System.out.println("Comprimento:			" + grn.getComprimento());
		System.out.println("Peso:				" + grn.calculaPeso());

	}

	public static void main(String[] args) {
		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}

}
