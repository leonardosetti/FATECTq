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

    int numeros[5];
    int menor, maior, soma = 0;
    double media;

    printf("Digite 5 números inteiros:\n");

    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Inicialização das variáveis menor e maior
        if (i == 0) {
            menor = numeros[i];
            maior = numeros[i];
        } else {
            // Verifica se o número é menor ou maior
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
        }

        // Soma dos números
        soma += numeros[i];
    }

    // Cálculo da média aritmética
    media = (double)soma / 5.0;

    // Exibir o resumo
    printf("\nResumo:\n");
    printf("Menor número: %d\n", menor);
    printf("Maior número: %d\n", maior);
    printf("Soma dos números: %d\n", soma);
    printf("Média aritmética: %.2lf\n", media);

    return 0;
}
