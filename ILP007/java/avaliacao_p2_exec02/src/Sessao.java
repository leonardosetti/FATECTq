
public interface Sessao {

	public int limite = 360;

	public abstract void grava(String dados);

	public abstract String le();

}
