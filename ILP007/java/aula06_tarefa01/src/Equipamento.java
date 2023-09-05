public class Equipamento {
	
	private long id;
	private String nome;
	private String marca;
	private Uso uso;
	private Equipamento equipamento;
	
	public long getId() {
		return id;
	}
	public String getNome() {
		return nome;
	}
	public String getMarca() {
		return marca;
	}
	public Uso getUso() {
		return uso;
	}
	public Equipamento getEquipamento() {
		return equipamento;
	}
	public void setId(long id) {
		this.id = id;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public void setMarca(String marca) {
		this.marca = marca;
	}
	public void setUso(Uso uso) {
		this.uso = uso;
	}
	public void setEquipamento(Equipamento equipamento) {
		this.equipamento = equipamento;
	}
}