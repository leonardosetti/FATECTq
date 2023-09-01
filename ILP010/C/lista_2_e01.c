#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void somaIncremento()
{
    int num, rpt, result = 0;

    printf("Insira quantos incrementos de soma deseja realizar:\n");
    scanf("%d", &rpt);

    while (rpt <= 0)
    {
        printf("Valor incorreto!\nDigite um número inteiro maior que zero:\n");
        scanf("%d", &rpt);
    }

    for (int i = 0; i < rpt; i++)
    {
        printf("\nInsira o valor de incremento para a posição %d:", i + 1);
        scanf("%d", &num);

        while (num <= 0)
        {
            printf("Valor incorreto!\nDigite um número inteiro maior que zero:\n");
            scanf("%d", &num);
        }

        result += num;
        printf("A soma para o incremento %d é: [%d]\n", i + 1, result);
    }

    printf("\nO total das somas é: %d\n", result);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char opc = 's';

    do
    {
        somaIncremento();
        printf("Deseja continuar? Digite 's' para sim, ou qualquer tecla para sair:\n");
        scanf(" %c", &opc);
    } while (opc == 's');

    return 0;
}
