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

int main()
{
    clearScreen();
    setlocale(LC_ALL, "Portuguese");

    int _val_input, _verificador;

    printf("Insira um valor inteiro maior que zero para verificar se o valor é PAR ou ÍMPAR\n--> ");
    scanf("%d", &_val_input);

    if (_val_input <= 0)
    {
        printf("O valor informado não é válido\nInsira um valor inteiro e maior que zero\n\n");
    }
    else
    {

        _verificador = _val_input % 2;
        if (_verificador == 0)
        {
            printf("\nO valor informado [%d] é PAR!\n\n", _val_input);
        }
        else
        {
            printf("\nO valor informado [%d] é ÍMPAR!\n\n", _val_input);
        }
    }

    return (0);
}