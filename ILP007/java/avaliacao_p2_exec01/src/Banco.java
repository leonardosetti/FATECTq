
public interface Banco {

	public String host = "192.168.1.29";
	public int porta = 3226;

	public abstract boolean insere(String sql);

	public abstract boolean exclui(int chave);

}
