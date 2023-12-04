
public class Administrativo extends Funcionario {

	private double adicional;
	private double horasExtras;

	public  double calculaSalario() {
		return getSalario()  + this.adicional + this.horasExtras;
	}

	public double getAdicional() {
		return adicional;
	}

	public double getHorasExtras() {
		return horasExtras;
	}

	public void setAdicional(double adicional) {
		this.adicional = adicional;
	}

	public void setHorasExtras(double horasExtras) {
		this.horasExtras = horasExtras;
	}

}
