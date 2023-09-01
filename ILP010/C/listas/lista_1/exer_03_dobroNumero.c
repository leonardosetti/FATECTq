#include <stdio.h>
#include <stdlib.h>

// Escreva um programa em C que calcule o dobro do número inteiro informado pelo usuário.

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
    printf("Insira um valor numérico inteiro para cálculo de seu dobro:\n");
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
        printf("*  Impossível realizar o cálculo para o parâmetro utilizado  *\n");
        printf("**************************************************************\n");
    }
    else
    {
        printf("**************************************************************\n");
        printf("             O dobro do valor informado [%d] é %d\n", val, val * 2);
        printf("**************************************************************\n");
    }

    return 0;
}
