#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
void ordenarnomes( n, nomes );
int buscaSequencial( int n, char lista[50][50], char valor[50]);

int main(){
    char nomes[50][50];
    int n, i ;
    system("cls");
    printf("\n informe a quantidade de nomes da lista: ");
    scanf("%d", &n);

    for ( i = 0 ; i < n ; i ++ ){
        printf( "\n digite o nome : ");
        setbuf(stdin, NULL);
        scanf("%[^\n]", nomes[i]);        
    }
    printf("\n");
    ordenarnomes( n, nomes );
    for ( i = 0 ; i < n ; i ++ ){
        printf("\n %s", nomes[i]);
    }

    char valor[50];
    printf("\n digite o nome para busca :");
    setbuf(stdin, NULL);
    scanf("%[^\n]", valor);
    if ( buscaSequencial( n, nomes, valor) == -1 ) {
        printf("\n Não localizou ... ");
    } else {
        printf("\n  localizou ... ");
    }

    return (1);
}


void ordenarnomes( int n, char lista[50][50] ){
    int i, j;
    char aux[50];

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            //if (lista[i] > lista[j])
            if ( strcmp(lista[i], lista[j]) == 1 ) {
                //aux = lista[i];
                strcpy( aux, lista[i]) ;

                //lista[i] = lista[j];
                strcpy( lista[i], lista[j]);

                //lista[j] = aux;
                strcpy( lista[j], aux) ;
            }
        }
    }
}

int buscaSequencial( int n, char lista[50][50], char valor[50]){
    int i;
    for ( i = 0; i < n; i++){
       printf("\n  localizou ... %s %s", lista[i],  valor ); 
       if ( strcmp( lista[i] , valor ) == 0){
         return i ;
       }
    }
    return -1;
}