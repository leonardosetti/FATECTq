#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct FolhaDeCheque
{
    int numero;
    char cliente[100];
    float valor;
};

void preencherFolha(struct FolhaDeCheque *folha, int numero)
{
    folha->numero = numero;
    printf("Folha de cheque %d:\n", folha->numero);
    printf("Nome do cliente: ");
    scanf("%s", folha->cliente);
    printf("Valor da folha: ");
    scanf("%f", &folha->valor);
}


void encontrarMaiorFolha(struct FolhaDeCheque folhas[], int totalFolhas)
{
    float maiorValor = folhas[0].valor;
    char clienteMaiorValor[100];

    for (int i = 1; i < totalFolhas; i++)
    {
        if (folhas[i].valor > maiorValor)
        {
            maiorValor = folhas[i].valor;
            strcpy(clienteMaiorValor, folhas[i].cliente);
        }
    }

    printf("Cliente com a maior folha de cheque:\n");
    printf("Nome: %s, Valor da folha: R$ %.2f\n", clienteMaiorValor, maiorValor);
}

int main()
{
    int totalFolhas = 20;
    struct FolhaDeCheque folhas[totalFolhas];


    for (int i = 0; i < totalFolhas; i++)
    {
        preencherFolha(&folhas[i], i + 1);
    }


    encontrarMaiorFolha(folhas, totalFolhas);

    return 0;
}
