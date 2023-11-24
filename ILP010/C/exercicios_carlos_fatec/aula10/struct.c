#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// constante
#define TAM 100

// declaracao de uma estrutura
struct aluno {
    char nome[50];
    int idade;    // 999
    char sexo[1]; // F / M
};

int binaria( int n, int v[TAM], int valor);

void bolha(int n, int v[TAM]);

void OrdenarPorNome(struct aluno alunos[], int n );
void OrdenarPorIdade(struct aluno alunos[], int n );

int Programa(struct aluno alunos[]);
void MostrarListaAlunos(struct aluno alunos[], int Tamanho );

int main(){
    struct aluno alunos[TAM];
    return Programa(alunos);
}

int Programa(struct aluno alunos[]){
    int opc = 0 ;
    int Tamanho , i;
    
    do {
        system("cls");
        printf("\n Exemplo de Struct");
        printf("\n");
        // informar numero de elementos para a matriz/vetor
        printf("\n informe o numero de elementos : ");
        scanf("%d", &Tamanho);

        // captura os valor no vetor
        for ( i = 0 ; i < Tamanho ; i ++ ){
            printf("\ninforme o [%d] nome : ", i + 1);
            setbuf(stdin, NULL);
            scanf( "%[^\n]" , alunos[i].nome);

            printf("\ninforme o [%d] idade : ", i + 1);
            scanf( "%4d" , &alunos[i].idade);
            
            printf("\ninforme o [%d] sexo : ", i + 1);
            setbuf(stdin, NULL);
            scanf( "%c" , &alunos[i].sexo);
        }

        MostrarListaAlunos( alunos , Tamanho) ;

       // OrdenarPorNome( alunos, Tamanho) ;
        OrdenarPorIdade( alunos, Tamanho) ;
        
        printf("\n lista ordenado");
        MostrarListaAlunos( alunos , Tamanho) ;

        printf("\n ");
        printf("\n informe 1 - Sair e 0-Continuar : ");
        scanf("%d", &opc);
    } while ( opc !=1 );
        
    return 0;
}

void MostrarListaAlunos(struct aluno alunos[], int Tamanho ){
    int i ;
     // mostra a lista de valor
        printf("\nLista de Alunos ");
        for ( i= 0 ; i < Tamanho; i ++){
            printf("\n [%d] - %30s | %d  | %s", i+1, alunos[i].nome, alunos[i].idade, alunos[i].sexo);
        }
}

void OrdenarPorNome(struct aluno alunos[], int n )
{
    int i, j ;
    struct aluno aux;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if ( strcmp( alunos[i].nome, alunos[j].nome ) == 1 ) {
                strcpy(aux.nome ,alunos[i].nome);
                aux.idade = alunos[i].idade;
                strcpy(aux.sexo,alunos[i].sexo);
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }
}

void OrdenarPorIdade(struct aluno alunos[], int n ) {
    int i, j ;
    struct aluno aux;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if ( alunos[i].idade > alunos[j].idade ) {
                strcpy(aux.nome ,alunos[i].nome);
                aux.idade = alunos[i].idade;
                strcpy(aux.sexo,alunos[i].sexo);
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }
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