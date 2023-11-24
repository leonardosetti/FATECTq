#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2

struct aluno{
    int id;
    char nome[50];
    int idade ;
};

int main(){
    struct aluno a[TAM];
    int i;
    
    system("cls");

    for ( i= 0; i < TAM;  i++) {
        printf("\ninforme o id do aluno: ");
        scanf("%d", &a[i].id);
        printf("\ninforme o nome do aluno: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]", a[i].nome);
        printf("\ninforme o idade do aluno: ");
        scanf("%d", &a[i].idade);
    }
    

    printf("\n");
    printf("\n ficha digitada");
    for ( i= 0; i < TAM;  i++) {
        printf("\n codigo: %d", a[i].id );
        printf("\n nome: %s", a[i].nome );
        printf("\n idade: %d", a[i].idade );
    
    }
    
    return 1 ;
}