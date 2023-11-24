#include <stdio.h>
#include "stdlib.h"
#include <math.h>

int main(){
    int i, soma, nElementos;
    int vetor[100];
    nElementos = 0 ;
    printf("\n informe o numero de elmentos [1 a 100] : ") ;
    scanf("%d", &nElementos);

    printf("\n");
    for (i= 0; i < nElementos; i ++ ) {
         printf("\n informe o valor do elemento %d: ", i + 1 ) ;
         scanf("%d", &vetor[i]);
    }


    printf("\n");
    soma = 0;
    for (i= 0; i < nElementos; i ++ ) {
        soma = soma * vetor[i];
    }
    printf("\n a) Produto dos %d elementos e : %d", nElementos, soma);
    
    soma = 0;
    for (i= 0; i < nElementos; i ++ ) {
        if ( i == 0){
            soma = vetor[i];
        } else {
            if ( soma > vetor[i]){
                soma = vetor[i];
            }
        }
    }
    printf("\n b) menor valor dos %d elementos e : %d", nElementos, soma);

    soma = 0;
    for (i= 0; i < nElementos; i ++ ) {
        if ( vetor[i] > 0){
            soma += 1;
        }
    }
    printf("\n c) Percentual de elementos [ %d ] maior que Zero [ >0 ] : %.3f %",  soma , (float) ( soma / (float)nElementos)*100);
    
    soma = 0;
    for (i= 0; i < nElementos; i ++ ) {
        if ( vetor[i] == 0){
            soma += 1;
        }
    }
    printf("\n c) Percentual de elementos [ %d ] igual a Zero [ =0 ] : %.3f %",  soma , (float) ( soma / (float)nElementos)*100);
    
    soma = 0;
    for (i= 0; i < nElementos; i ++ ) {
        if ( vetor[i] < 0){
            soma += 1;
        }
    }
    printf("\n c) Percentual de elementos [ %d ] menor que Zero [ < 0 ] : %.3f %",  soma , (float) ( soma / (float)nElementos)*100);
    

    printf("\n");
    return (0);
}


// float mdGeometricaElementos(int nElementos, int pVetor[]){
//   int i ;
//   float mg = 1;

//   for (i = 0; i < nElementos; i++) {
//     mg = mg * pVetor[i];
//   }

//   if ((mg < 0) && (nElementos % 2 == 0))
//     mg = 0 ;
//   else
//     mg = exp(1.0 / nElementos * log(mg));
  
//   return ( mg) ;
// }

// int mddd(){
// // d- media geometrica
//             for (i=0;i<nelementos;i++) {
//                 mg = mg * vetor[i];
//             }
//             if ((mg < 0) && (nelementos % 2 == 0))
//               mg = 0 ;
//             else
//                 mg = exp(1.0 / nelementos * log(mg));
// }