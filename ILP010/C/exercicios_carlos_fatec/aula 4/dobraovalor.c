#include "stdio.h"
#include "stdlib.h"

int dobravalor( int valor){
    return( valor * 2);
}

int main(){
    int x ;
    int parar = 0;
    do {

        system("cls");
        printf("\n informe um valor : ");
        scanf("%d", &x);
        printf("\n o dobro do valor informado e : %d ", dobravalor(x));
        printf("\n Digite [1] para finalizar e qualquer outra teclar para continuar !");
        scanf( "%d", &parar ) ;

    } while ( parar != 1 ) ;

    return(0);
}