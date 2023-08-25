#include <stdio.h>
#include <fstream>

// Faça um programa que receba três notas, calcule e mostre a média aritmética.

int main()
{
    float val1, val2, val3, soma, media_a;

    printf("Informe três valores numéricos para cálculo da média aritmética:");

    printf("\nValor numérico 1");
    printf("\n===> ");
    scanf("%f%*c", &val1);

    printf("\nValor numérico 2");
    printf("\n===> ");
    scanf("%f%*c", &val2);

    printf("\nValor numérico 3");
    printf("\n===> ");
    scanf("%f%*c", &val3);

    soma = (val1 + val2 + val3);
    media_a = soma / 3;

    printf("\nO resultado da média aritmética é: %.2f", media_a);

    getchar();
    return 0;
}
