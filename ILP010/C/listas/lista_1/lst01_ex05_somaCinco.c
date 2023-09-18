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

    int _val_1, _val_2, _val_3, _val_4, _val_5, _resultado_soma;

    printf("Informe cinco valores inteiros maiores que zero:\n");
    printf("Valor [1]:\n--> ");
    scanf("%d", &_val_1);
    printf("Valor [2]:\n--> ");
    scanf("%d", &_val_2);
    printf("Valor [3]:\n--> ");
    scanf("%d", &_val_3);
    printf("Valor [4]:\n--> ");
    scanf("%d", &_val_4);
    printf("Valor [5]:\n--> ");
    scanf("%d", &_val_5);
    if (_val_1 < 0 || _val_2 < 0 || _val_3 < 0 || _val_4 < 0 || _val_5 < 0)
    {
        if (_val_1 < 0)
        {
            printf("\nO PRIMEIRO valor informado [%d] não pôde ser incluído para o cálculo\nO valor [0] zero será atribuído em substituição ao valor digitado.\n", _val_1);
            _val_1 = 0;
        }
        if (_val_2 < 0)
        {
            printf("\nO SEGUNDO valor informado [%d] não pôde ser incluído para o cálculo\nO valor [0] zero será atribuído em substituição ao valor digitado.\n", _val_2);
            _val_2 = 0;
        }
        if (_val_3 < 0)
        {
            printf("\nO TERCEIRO valor informado [%d] não pôde ser incluído para o cálculo\nO valor [0] zero será atribuído em substituição ao valor digitado.\n", _val_3);
            _val_3 = 0;
        }
        if (_val_4 < 0)
        {
            printf("\nO QUARTO valor informado [%d] não pôde ser incluído para o cálculo\nO valor [0] zero será atribuído em substituição ao valor digitado.\n", _val_4);
            _val_4 = 0;
        }
        if (_val_5 < 0)
        {
            printf("\nO QUINTO valor informado [%d] não pôde ser incluído para o cálculo\nO valor [0] zero será atribuído em substituição ao valor digitado.\n", _val_5);
            _val_5 = 0;
        }
    }

    _resultado_soma = _val_1 + _val_2 + _val_3 + _val_4 + _val_5;
    printf("\nO resultado da soma dos valores %d + %d + %d + %d + %d é %d\n\n", _val_1, _val_2, _val_3, _val_4, _val_5, _resultado_soma);

    return (0);
}