
public interface Transmissao {

	public String compressao = "A";

	public String checksum = "3ss2s4";
	
	public abstract boolean ajusta ();

	public abstract String testa();
}
