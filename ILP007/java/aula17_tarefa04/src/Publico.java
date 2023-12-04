
public class Publico extends Gestor {

	private int atendimentos;
	private Retribuicao[] retribuicao;

	public double calculaPontuacao() {
		return this.atendimentos * 0.18;
	}

	public int getAtendimentos() {
		return atendimentos;
	}

	public Retribuicao[] getRetribuicao() {
		return retribuicao;
	}

	public void setAtendimentos(int atendimentos) {
		this.atendimentos = atendimentos;
	}

	public void setRetribuicao(Retribuicao[] retribuicao) {
		this.retribuicao = retribuicao;
	}

}
