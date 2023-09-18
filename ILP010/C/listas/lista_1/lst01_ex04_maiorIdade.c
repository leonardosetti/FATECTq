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

    int _val_idade;

    printf("Insira a idade como valor inteiro para verificar se é Maior ou Menor de 18 anos\n--> ");
    scanf("%d", &_val_idade);

    if (_val_idade <= 0)
    {
        clearScreen();
        printf("\nA idade informada [%d] não pode ser verificada.\nInsira valores inteiros maiores que zero\n\n",_val_idade);
    }
    else if (_val_idade > 0 && _val_idade < 18)
    {
        clearScreen();
        printf("\nO usuário com %d anos, ainda não atingiu a maioridade.\n\n", _val_idade);
    }
    else
    {
        clearScreen();
        printf("O usuário com %d anos, já atingiu a maioridade.\n\n", _val_idade);
    }

    return (0);
}