#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ListaCarga(char listanomes[5][100]);
void exibelista(char listanomes[5][100], int countmax);
int programa(char listanomes[5][100]);

int main(){
  char lista[100][100];
  return (programa(lista));

}

int programa(char listanomes[5][100]){
    int opc = 0;
    int count = 0; 
    do {
        system("cls");
        count = ListaCarga(listanomes);
        exibelista(listanomes, count ) ;

        printf( "\n digite [1] para finalizar, e qualquer outra tecla para continuar ...");
        scanf("%d", &opc);
    } while (opc != 1 );
    return (1) ;
}


int ListaCarga(char listanomes[5][100]){ 
    int i ;
    int continuar = 1;
    for ( i=0 ; i < 100 ; i++ ) {
        printf("\n Informe o nome : ");
        setbuf(stdin, NULL);
        scanf("%[^\n]",listanomes[i]);  
        //fgets (listanomes[i], 50, stdin);    
    
        printf("\n deseja continuar a inserir [1- sim] / [ 0 - Nao] : ");
        scanf("%d", &continuar ) ;
        if ( continuar != 1) {
            break ;
        }
    }
    return(i+1) ;
}

void exibelista(char listanomes[5][100] , int countmax ){
int i;
    printf( "lista de Nomes %d ", countmax) ;
    for ( i=0 ; i < countmax; i++ ) {
        printf( "\n %s", listanomes[i]);
    }
}


