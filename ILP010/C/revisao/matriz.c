<<<<<<< HEAD
#include "stdio.h"
#include "stdlib.h"
 
int entradaValor(){
    int valor ;
        
        valor = 0 ;
        while ( valor <= 0 ) {
          printf("\n informe o valor [somente valor inteiro e positivos] :");
          scanf("%d", &valor );
          if ( valor <= 0) {
            printf( "\n Voce informou um valor INVALIDO !!" );
          }
        }
   return (valor )     ;
}
 
void mostraResumo( double somatotal , int nTermos, int min, int max ){
    printf( "\n Valor total informado: %.0f " , somatotal );
    printf( "\n Valor medio informado: %.2f , %d" , ( somatotal / nTermos ), nTermos);
    printf( "\n Valor min: %d " , min );
    printf( "\n Valor max: %d " , max );
}
 
int main(){
 
    int continuar;
    continuar = 0;
    int soma = 0 ;
    int contator = 0 ;
    int min, max ;
 
    do {
        system("cls");
        int x ;
        x = entradaValor() ;
 
        soma = soma + x ;
 
        if ( min > x ) {
            min = x;
        }
        if ( max < x ){
            max = x ;
        }
        printf( "\n Deseja continuar ") ;
        scanf("%d", &continuar ) ;
        contator = contator + 1 ;
 
    } while ( continuar != 1 );
 
    mostraResumo(soma, contator, min, max );
 
    return(0);
}
=======

#include <stdio.h>
#define DIM 100


int main()
{
    int matriz[DIM][DIM];
    int trow, tcol;
    int opc = 0;

       return 0;
}
>>>>>>> ab3ad5fcdbe33e3e6167f261f2e39e18765b65c7
