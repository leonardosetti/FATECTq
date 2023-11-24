#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 10
int binaria( int n, int v[TAM], int valor);
void bolha(int n, int v[TAM]);
int Programa(int v[TAM]);

int main(){
    int vetor[TAM];
    return Programa(vetor);
}

int Programa(int v[TAM]){
    int opc = 0 ;
    int Tamanho , i;
    
    do {
        system("cls");
        printf("\n Exemplo de Ordenacao pelo Metodo de Bolha");
        printf("\n");
        // informar numero de elementos para a matriz/vetor
        printf("\n informe o numero de elemntos do vetor : ");
        scanf("%d", &Tamanho);

        // captura os valor no vetor
        for ( i = 0 ; i < Tamanho ; i ++ ){
            printf("\ninforme o [%d] valor : ", i + 1);
            scanf( "%d" , &v[i]);
        }

        // mostra a lista de valor
        for ( i= 0 ; i < Tamanho; i ++){
            printf("\n[%d] - %d", i+1, v[i]);
        }

        printf("\n");
        bolha(Tamanho, v);
        printf("\n");
        printf("\n Lista ordenada");
        for ( i= 0 ; i < Tamanho; i ++){
            printf("\n%d - %d", i+1, v[i]);
        }

        // busca sequencial
        int valor, achou ;
        printf("\n informe o valor para verificacao : ");
        scanf("%d", &valor);
        printf( "\nBusca Sequencial ") ;
        achou = -1 ;
        for ( i= 0 ; i < Tamanho; i ++){
            if ( valor == v[i]){
                achou = i;
            }            
        }
        if ( achou == -1) {
            printf( "Não foi localizado") ;
        } else {
            printf( "o Valor foi localizado [%d] ...", achou) ;
        }

        printf("\n");
        printf( "\nBusca Binaria ") ;
        if ( binaria( Tamanho, v, valor) == -1 ){
            printf( "\nNão foi localizado") ;
        } else {
            printf( "\no Valor foi localizado  ...") ;
        }

        printf("\n informe 1 - Sair e 0-Continuar : ");
        scanf("%d", &opc);
    } while ( opc !=1 );
        
    return 0;
}


void bolha(int n, int v[TAM])
{
    int i, j, aux;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int binaria( int n, int v[TAM], int valor)
{ int low, high, mid;
  //
  low = 0;  high = n-1;
  //
  while (low<= high){
   
    mid = (low+high)/2;
    printf( "\n low= %d  high= %d  mid= %d mid.valor= %d buscando= %d", low,high,mid,v[mid], valor);
    if (v[mid] > valor) high=mid-1;
    else if (v[mid] < valor) low=mid +1;
    else return mid;

  }
  return -1;
}