package controller;
import backend.Dao;
import visual.Front;

public class Sistema {
	
	private String codigo;
	private String nome;
	private String descricao;
	private Dao dao;
	private Front front;
	public String getCodigo() {
		return codigo;
	}
	public void setCodigo(String codigo) {
		this.codigo = codigo;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getDescricao() {
		return descricao;
	}
	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
	public Dao getDao() {
		return dao;
	}
	public void setDao(Dao dao) {
		this.dao = dao;
	}
	public Front getFront() {
		return front;
	}
	public void setFront(Front front) {
		this.front = front;
	}	
}
