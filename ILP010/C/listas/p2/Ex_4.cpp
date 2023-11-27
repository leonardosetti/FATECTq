#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Livro {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
    float preco;
};


void preencherLivro(struct Livro *livro, int numero) {
    printf("Livro %d:\n", numero);
    printf("Título: ");
    scanf("%s", livro->titulo);
    printf("Autor: ");
    scanf("%s", livro->autor);
    printf("Ano de Publicação: ");
    scanf("%d", &livro->anoPublicacao);
    printf("Preço: ");
    scanf("%f", &livro->preco);
}


void exibirLivro(struct Livro livro, int numero) {
    printf("Livro %d:\n", numero);
    printf("Título: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano de Publicação: %d\n", livro.anoPublicacao);
    printf("Preço: R$ %.2f\n", livro.preco);
    printf("\n");
}

int main() {
    int totalLivros = 30;
    struct Livro livros[totalLivros];


    for (int i = 0; i < totalLivros; i++) {
        preencherLivro(&livros[i], i + 1);
    }


    printf("Detalhes dos 30 livros:\n");
    for (int i = 0; i < totalLivros; i++) {
        exibirLivro(livros[i], i + 1);
    }

    return 0;
}
