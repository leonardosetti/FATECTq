
public class Principal {

	Veiculo vc1, vc2, vc3, vc4;
	Vendedor vd1;

	public void inputData() {

		vc1 = new Veiculo();
		vc2 = new Veiculo();
		vc3 = new Veiculo();
		vc4 = new Veiculo();

		vd1 = new Vendedor();

		vc1.setAno(2020);
		vc1.setPlaca("ECW-90I0");
		vc1.setValor(32759.06);

		vc2.setAno(2022);
		vc2.setPlaca("EQQ-78O9");
		vc2.setValor(52699.99);

		vc3.setAno(2018);
		vc3.setPlaca("ECW-88T1");
		vc3.setValor(152300.99);

		vc4.setAno(2007);
		vc4.setPlaca("EXC-90X0");
		vc4.setValor(9000.00);

		Veiculo vetorVeiculo[];
		vetorVeiculo = new Veiculo[4];
		vetorVeiculo[0] = vc1;
		vetorVeiculo[1] = vc2;
		vetorVeiculo[2] = vc3;
		vetorVeiculo[3] = vc4;

		vd1.setNome("Jairo Antunes");
		vd1.setCpf("778.558.264-63");
		vd1.setVeiculo(vetorVeiculo);
		vd1.setComissao(0.03);

	}

	public void outputData() {

		System.out.println("------------------Relatório de Vendas-------------------------");
		System.out.println();
		System.out.println("Vendedor(a):		" + vd1.getNome() + " CPF:	" + vd1.getCpf());
		System.out.println("Taxa de comissão:" + vd1.getComissao());
		System.out.println("Lista de vendas:");
		System.out.println("______________________________________________________________");
		System.out.println();
		for (int i = 0; i < 4; i++) {
			System.out.println("Veículo Placa: " + vd1.getVeiculo()[i].getPlaca() + " /Ano: "
					+ vd1.getVeiculo()[i].getAno() + " - R$" + vd1.getVeiculo()[i].getValor());
			System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
			System.out.println();
		}

	}

	public static void main(String[] args) {

		Principal p = new Principal();
		p.inputData();
		p.outputData();
	}

}
