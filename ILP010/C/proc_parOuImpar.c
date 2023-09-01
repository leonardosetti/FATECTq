
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

void parOuImpar(int val)
{
    int rpt;
    printf("Insira quantos n�meros deseja verificar (par ou �mpar):\n");
    scanf("%d", &rpt);

    for (int i = 0; i < rpt; i++)
    {
        printf("\nInsira o n�mero para verifica��o na posi��o %d:", i + 1);
        scanf("%d", &val);

        while (val <= 0)
        {
            printf("Valor incorreto!\nDigite um n�mero inteiro maior que zero:\n");
            scanf("%d", &val);
        }

        if (val % 2 == 0)
        {
            printf("O n�mero [%d] na posi��o [%d] � par.\n", val, i + 1);
        }
        else
        {
            printf("O n�mero [%d] na posi��o [%d] � �mpar.\n", val, i + 1);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char opc = 's';

    do
    {
        int val;
        clearScreen();
        parOuImpar(val);
        printf("Deseja continuar? Digite 's' para sim, ou qualquer tecla para sair:\n");
        scanf(" %c", &opc);
    } while (opc == 's');

    return 0;
}
