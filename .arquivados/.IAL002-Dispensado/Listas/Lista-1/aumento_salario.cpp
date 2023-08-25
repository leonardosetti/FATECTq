#include <stdio.h>
#include <fstream>
#define ajuste 0.25

// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
// salário, sabendo-se que este sofreu um aumento de 25%.

int main()
{
    float s_corrente, s_ajust;

    printf("Informe o valor do salário atual do Funcionário:");
    printf("\n===> R$ ");
    scanf("%f%*c", &s_corrente);

    // s_ajust= s_corrente*ajuste;

    // printf("\nHouve um acréscimo real de R$%.2f",s_ajust);
    // printf(" no salário corrente!");

    // s_ajust=s_ajust+s_corrente;

    s_ajust = s_corrente + s_corrente * ajuste; // cálculo direto.

    printf("\nO valor do salário atualizado é de R$%.2f", s_ajust);

    getchar();
    return 0;
}