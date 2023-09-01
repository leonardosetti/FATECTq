#include <stdio.h>
#include <stdlib.h>

// Faça um programa em C que imprima se o número informado pelo usuário é par ou ímpar.

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void inputParam(int *val)
{
    clearScreen();
    printf("Insira um valor numérico inteiro para verificação Par ou Ímpar:\n");
    scanf("%d", val);
}

int main()
{
    int val;

    inputParam(&val);

    clearScreen();

    if (val <= 0)
    {
        printf("**************************************************************\n");
        printf("* Impossível realizar a validação para o parâmetro utilizado *\n");
        printf("**************************************************************\n");
    }
    else if (val % 2 == 0)
    {
        printf("**************************************************************\n");
        printf("                 O valor informado [%d] é par\n", val);
        printf("**************************************************************\n");
    }
    else
    {
        printf("**************************************************************\n");
        printf("                 O valor informado [%d] é ímpar\n", val);
        printf("**************************************************************\n");
    }

    return 0;
}
