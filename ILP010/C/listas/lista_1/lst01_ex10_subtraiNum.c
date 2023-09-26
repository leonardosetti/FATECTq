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

    double numero1, numero2, resultado;

    // Solicitar ao usuário que insira dois números maiores que zero
    do {
        printf("Digite o primeiro número maior que zero: ");
        scanf("%lf", &numero1);
    } while (numero1 <= 0);

    do {
        printf("Digite o segundo número maior que zero: ");
        scanf("%lf", &numero2);
    } while (numero2 <= 0);

    // Calcular a subtração dos números
    resultado = numero1 - numero2;

    // Exibir o resultado da subtração
    printf("A subtração dos números é: %.2lf\n", resultado);

    return 0;
}
