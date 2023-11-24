#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#define Tam 10


void leitura_vetor(int n, int v[Tam]);
void imprime_vetor(int n, int v[Tam]);
int binaria(int n, int v[Tam], int valor);
void bolha(int n, int v[Tam]);

int main()
{ int n, posicao, valor;
  int v[Tam];
  printf("\n Entre com o numero de elementos do vetor: ");
  scanf("%d", &n);
  leitura_vetor(n,v);
  bolha(n,v);
  printf("\n\n Vetor Ordenado");
  imprime_vetor(n,v);
  printf("\n\n Entre com o elemento a ser encontrado no vetor: ");
  scanf("%d", &valor);
  posicao= binaria(n,v,valor);
  if (posicao==-1) printf("\n O elemento %d nao se encontra no vetor", valor);
            else   printf("\n O elemento %d se encontra na posicao %d do vetor", valor, posicao);

  getch();
}

/****************************************Função de Leitura dos Dados***********************************/
void leitura_vetor(int n, int v[Tam])
{
 int i;
 printf("\n Entre com os elementos do vetor");
 for(i=0;i<n;i++)
        {
        printf("\n v[%d]= ",i);
        scanf("%d", &v[i]);
        }
}


 /**************************************************************************************************/
 void imprime_vetor(int n, int vet[Tam])
 {
  int i;
  for(i=0;i<n;i++)
    printf("\n\n v[%d] = %d",i,vet[i]);
 }


/**************************************************************************************************/

int binaria( int n, int v[Tam], int valor)
{ int low, high, mid;
  low = 0;  high = n-1;
  while (low<= high)
  {mid = (low+high)/2;
   if (v[mid] > valor) high=mid -1;
       else if (v[mid] < valor) low=mid +1;
                   else return mid;
  }
  return -1;
}

/**************************************************************************************************/

void bolha(int n, int v[Tam])
{ int i, j, aux;
  for (i=0; i<n-1; i++)
      for (j=i+1; j< n;  j++)
    	if (v[i] > v[j]) { aux  =  v[i];
                                     v[i]   =  v[j];
                                     v[j]   =  aux;
                                   }
}