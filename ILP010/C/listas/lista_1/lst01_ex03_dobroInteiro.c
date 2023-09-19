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
    int _val_input, _dobro_inteiro;

    clearScreen();
    setlocale(LC_ALL, "Portuguese");

    printf("Insira um valor inteiro para o cálculo de seu dobro\n--> ");
    scanf("%d", &_val_input);

    if (_val_input <= 0)
    {
        printf(" O valor  inserido não pode ser calculado\nInsira um valor inteiro maior que zero\n\n");
    }
    else
    {
        _dobro_inteiro = _val_input * 2;
        printf("O dobro do valor [%d] é: %d\n\n", _val_input, _dobro_inteiro);
    }

    return (0);
}