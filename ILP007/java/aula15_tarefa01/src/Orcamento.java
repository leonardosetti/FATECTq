
public class Orcamento {

	private String numero;
	private String data;
	private Item[] item;
	private Uso[] uso;

	public String getNumero() {
		return numero;
	}

	public String getData() {
		return data;
	}

	public Item[] getItem() {
		return item;
	}

	public Uso[] getUso() {
		return uso;
	}

	public void setNumero(String numero) {
		this.numero = numero;
	}

	public void setData(String data) {
		this.data = data;
	}

	public void setItem(Item[] item) {
		this.item = item;
	}

	public void setUso(Uso[] uso) {
		this.uso = uso;
	}

}
