#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define Tam 10

// declaracao previa das funcoes / procedimentos
void leitura_vetor(int n, int v[Tam]);
void imprime_vetor(int n, int v[Tam]);
void bolha(int n, int v[Tam]);

int main()
{
    int n;
    int v[Tam];
    printf("\n Entre com o numero de elementos do vetor: ");
    printf("\n * numero maximo de elementos [ 10 ] ");
    scanf("%d", &n);
    if (n > 10) {
        printf(" Numero de elementos superior ao permitido!");
        printf(" Finalizando a execucao do programa...");
        return (0);
    } else {

        leitura_vetor(n, v);
        bolha(n, v);
        printf("\n\n Vetor Ordenado");
        imprime_vetor(n, v);
        printf("\n\n Atencao. Pressione qualquer tecla pra finalizar !");
        getch();
        return (0);
    }
}

/****************************************Fun��o de Leitura dos Dados***********************************/
void leitura_vetor(int n, int v[Tam])
{
    int i;
    printf("\n Entre com os elementos do vetor : ");
    for (i = 0; i < n; i++)
    {
        printf("\n v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

/**************************************************************************************************/
void imprime_vetor(int n, int vet[Tam])
{
    int i;
    for (i = 0; i < n; i++)
        printf("\n v[%d] = %d", i, vet[i]);
}

/**************************************************************************************************/

void bolha(int n, int v[Tam])
{
    int i, j, aux;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}