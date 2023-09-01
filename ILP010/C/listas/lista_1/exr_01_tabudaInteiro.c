#include <stdio.h>
#include <stdlib.h>

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    int val;

    clearScreen();
    printf("Informe o valor para o cálculo da tabuada correspondente\n");
    scanf("%d", &val);

    clearScreen();
    printf("--------------------------------------------------------\n");

    if (val < 0)
    {
        printf("O valor informado deve ser um número inteiro positivo.");
        printf("\n--------------------------------------------------------\n");
        printf("Programa encerrado!\n\n");
    }
    else
    {
        printf("%d *  0 = %d\n", val, val * 0);
        printf("%d *  1 = %d\n", val, val * 1);
        printf("%d *  2 = %d\n", val, val * 2);
        printf("%d *  3 = %d\n", val, val * 3);
        printf("%d *  4 = %d\n", val, val * 4);
        printf("%d *  5 = %d\n", val, val * 5);
        printf("%d *  6 = %d\n", val, val * 6);
        printf("%d *  7 = %d\n", val, val * 7);
        printf("%d *  8 = %d\n", val, val * 8);
        printf("%d *  9 = %d\n", val, val * 9);
        printf("%d * 10 = %d\n", val, val * 10);
        printf("--------------------------------------------------------\n\n\n");
    }

    return 0;
}
