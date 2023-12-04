
public class Privado extends Gestor{

	private int entregas;
	
	public double calculaPontuacao() {
		return this.entregas * 0.25;
	}

	public int getEntregas() {
		return entregas;
	}

	public void setEntregas(int entregas) {
		this.entregas = entregas;
	}	
	
}
