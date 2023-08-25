#include <stdio.h>
#include <fstream>

//Faça um programa que receba quatro números inteiros, calcule e mostre a soma 
//desses números

int main()
{
    int num1, num2, num3, num4, soma_t;

    printf("\nInforme o valor numérico do primeiro número:");
    printf("\n::: Valor ===> ");
    scanf("%d%*c", &num1);
    printf("\nInforme o valor numérico do segundo número:");
    printf("\n::: Valor ===> ");
    scanf("%d%*c", &num2);
    printf("\nInforme o valor numérico do terceiro número:");
    printf("\n::: Valor ===> ");
    scanf("%d%*c", &num3);
    printf("\nInforme o valor numérico do quarto número:");
    printf("\n::: Valor ===> ");
    scanf("%d%*c", &num4);

    soma_t = (num1 + num2 + num3 + num4);

    printf("\nO valor sa soma de todos os números é: %.2d", soma_t);

    getchar();
    return 0;
}