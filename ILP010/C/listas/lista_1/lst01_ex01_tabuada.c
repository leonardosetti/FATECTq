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

    int _val_input = 0, _res_tabuada;

    printf("Insira um valor inteiro maior que zero para cálculo da tabuada de 0 a 10\n--> ");
    scanf("%d", &_val_input);

    if (_val_input <= 0)
    {
        printf("O valor inserido deve ser maior que zero [0]\n");
    }
    else
    {
        printf("\n%d x 0 = %d\n", _val_input, (_res_tabuada = _val_input * 0));
        printf("%d x 1 = %d\n", _val_input, (_res_tabuada = _val_input * 1));
        printf("%d x 2 = %d\n", _val_input, (_res_tabuada = _val_input * 2));
        printf("%d x 3 = %d\n", _val_input, (_res_tabuada = _val_input * 3));
        printf("%d x 4 = %d\n", _val_input, (_res_tabuada = _val_input * 4));
        printf("%d x 5 = %d\n", _val_input, (_res_tabuada = _val_input * 5));
        printf("%d x 6 = %d\n", _val_input, (_res_tabuada = _val_input * 6));
        printf("%d x 7 = %d\n", _val_input, (_res_tabuada = _val_input * 7));
        printf("%d x 8 = %d\n", _val_input, (_res_tabuada = _val_input * 8));
        printf("%d x 9 = %d\n", _val_input, (_res_tabuada = _val_input * 9));
        printf("%d x 10 = %d\n\n", _val_input, (_res_tabuada = _val_input * 10));
    }

    return 0;
}