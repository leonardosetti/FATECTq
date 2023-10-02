
public class Administrativo extends Empregado {
	private int horario;
	private double adicional;
	private Empregado empregado;

	public Empregado getEmpregado() {
		return empregado;
	}

	public void setEmpregado(Empregado empregado) {
		this.empregado = empregado;
	}

	public int getHorario() {
		return horario;
	}

	public double getAdicional() {
		return adicional;
	}

	public void setHorario(int horario) {
		this.horario = horario;
	}

	public void setAdicional(double adicional) {
		this.adicional = adicional;
	}

}
