
public interface Rede {

	public String ip = "10.0.0.2";

	public abstract boolean envia(String tt);

	public abstract String recebe();
}
