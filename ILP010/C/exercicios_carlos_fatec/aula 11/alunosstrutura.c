#include <stdio.h>
#include <string.h>

#define TAM 10

struct aluno{
    int id;
    char nome[50];
    int idade ;
};

int main(){
    struct aluno a;
    printf("\ninforme o id do aluno: ");
    scanf("%d", &a.id);
    printf("\ninforme o nome do aluno: ");
    setbuf(stdin, NULL);
    scanf("%[^\n]", a.nome);
    printf("\ninforme o idade do aluno: ");
    scanf("%d", &a.idade);

    printf("\n");
    printf("\n ficha digitada");
    printf("\n codigo: %d", a.id );
    printf("\n nome: %s", a.nome );
    printf("\n idade: %d", a.idade );

    return 1 ;
}