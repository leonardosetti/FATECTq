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

    double valores[4];
    double soma = 0.0;
    double media;
    int i;

    printf("Digite 4 valores:\n");

    for (i = 0; i < 4; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%lf", &valores[i]);
        soma += valores[i];
    }

    // Verificando se o usuário inseriu valores válidos
    int valoresValidos = 1; // Assumindo que os valores são válidos por padrão

    for (i = 0; i < 4; i++)
    {
        if (valores[i] < 0)
        {
            printf("Valor %d é negativo. Por favor, insira valores positivos.\n", i + 1);
            valoresValidos = 0; // Marcando que os valores não são válidos
            break;              // Saindo do loop se um valor inválido for encontrado
        }
    }

    if (valoresValidos)
    {
        media = soma / 4.0;
        printf("A média aritmética dos valores é: %.2lf\n", media);
    }

    return 0;
}
