package versionamento;

import controller.Sistema;

public class Profissional extends Sistema {
	
	private int id;
	private String funcionalidade;
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getFuncionalidade() {
		return funcionalidade;
	}
	public void setFuncionalidade(String funcionalidade) {
		this.funcionalidade = funcionalidade;
	}	

}
