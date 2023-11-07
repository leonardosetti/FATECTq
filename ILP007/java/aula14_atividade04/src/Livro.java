
public class Livro {

	private String titulo;
	private String autor;
	private Emprestimo[] emprestimo;

	public String getTitulo() {
		return titulo;
	}

	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}

	public String getAutor() {
		return autor;
	}

	public void setAutor(String autor) {
		this.autor = autor;
	}

	public Emprestimo[] getEmprestimo() {
		return emprestimo;
	}

	public void setEmprestimo(Emprestimo[] emprestimo) {
		this.emprestimo = emprestimo;
	}

}
