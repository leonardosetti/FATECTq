#include <stdio.h>

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
        soma = soma + vetor[i];
    }
    printf("\n a) soma dos %d elementos e : %d", nElementos, soma);
    
    soma = 0;
    for (i= 0; i < nElementos; i ++ ) {
        if ( i == 0){
            soma = vetor[i];
        } else {
            if ( soma < vetor[i]){
                soma = vetor[i];
            }
        }
    }
    printf("\n b) maior valor dos %d elementos e : %d", nElementos, soma);

    soma = 0;
    for (i= 0; i < nElementos; i ++ ) {
        if ( vetor[i] % 2 == 0){
            soma += 1;
        }
    }
    printf("\n c) Percentual de elementos [ %d ]com valores pares : %.3f %",  soma , (float) ( soma / (float)nElementos)*100);
    soma = 0;
    int npesos = 0 ;
    for (i= 0; i < nElementos; i ++ ) {
        soma = soma + ( vetor[i] * i ) ;
        npesos  = npesos + i ;
    }
    printf("\n d) media ponderada dos elementos : %f", soma / (float) npesos);

    printf("\n");
    return (0);
}