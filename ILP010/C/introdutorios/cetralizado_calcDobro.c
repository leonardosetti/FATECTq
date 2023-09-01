#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escreva um programa em C que calcule o dobro do número inteiro informado pelo usuário.

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void printCentered(char *message)
{
    int len = strlen(message);
    int padding = (80 - len) / 2;
    printf("%*s%s%*s\n", padding, "", message, padding, "");
}

void printResult(int val, int result)
{
    char message[50];
    sprintf(message, "O dobro do valor informado [%d] é %d", val, result);
    printCentered("**************************************************************");
    printCentered(message);
    printCentered("**************************************************************");
}

void inputParam(int *val)
{
    clearScreen();
    printCentered("Insira um valor numérico inteiro para cálculo de seu dobro:");
    scanf("%d", val);
}

int main()
{
    int val;

    inputParam(&val);

    clearScreen();

    if (val <= 0)
    {
        printCentered("**************************************************************");
        printCentered("   Impossível realizar o cálculo para o parâmetro utilizado   ");
        printCentered("**************************************************************");
    }
    else
    {
        int result = val * 2;
        printResult(val, result);
    }

    return 0;
}
