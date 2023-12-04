import java.util.ArrayList;

public interface Banco {

	public String driver = "jodbc";

	public abstract boolean create(String dados);

	public abstract ArrayList<String> realAll(String dados);

}
