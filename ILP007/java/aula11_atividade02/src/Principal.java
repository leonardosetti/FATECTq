
public class Principal {

	Veiculo v1, v2, v3;
	Estacionamento e1;

	public void inputData() {

		v1 = new Veiculo();
		v2 = new Veiculo();
		v3 = new Veiculo();

		v1.setPlaca("EXW34O2");
		v1.setModelo("Hilux SW4");
		v1.setCor("Branca");

		v2.setPlaca("ZPC42U3");
		v2.setModelo("Chevrolet Astra");
		v2.setCor("Amarela");

		v3.setPlaca("NTP36I2");
		v3.setModelo("Ford Fusion");
		v3.setCor("Prata");

		Veiculo vetorEstacionamento[];
		vetorEstacionamento = new Veiculo[3];
		vetorEstacionamento[0] = v1;
		vetorEstacionamento[1] = v2;
		vetorEstacionamento[2] = v3;

		e1 = new Estacionamento();
		e1.setNome("Palácio dos Autos");
		e1.setEndereco("Av. Nunes Malta, 325 - Centro / Rio Claro-SP");
		e1.setVeiculo(vetorEstacionamento);

	}

	public void outputData() {

		System.out.println("------------------- Estacionamento " + e1.getNome() + " -------------------");
		System.out.println();
		System.out.println("Endereço:	" + e1.getEndereco());
		System.out.println();
		System.out.println("Veículos estacionados:");
		System.out.println();
		for (int i = 0; i < 3; i++) {
			System.out.println("Modelo:		" + e1.getVeiculo()[i].getModelo());
			System.out.println("Placa:		" + e1.getVeiculo()[i].getPlaca());
			System.out.println("Cor:		" + e1.getVeiculo()[i].getCor());
			System.out.println("---------------------------------------------------------------------");

		}

	}

	public static void main(String[] args) {

		Principal p = new Principal();
		p.inputData();
		p.outputData();

	}

}
