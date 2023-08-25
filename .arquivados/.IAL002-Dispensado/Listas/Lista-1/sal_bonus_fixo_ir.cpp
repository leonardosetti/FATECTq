#include <stdio.h>
#include <fstream>
#define bonus 50.00
#define txir 10.00

// Faça um programa que receba o salário base de um funcionário,
// calcule e mostre seu salário a receber, sabendo - se que
// o funcionário tem gratificação de R$ 50 e paga imposto de 10 % sobre o salário base.

int main()
{

    float s_base, s_receber;

    printf("Informe o valor do salário base do funcionário:");
    printf("\nSalário base ===> R$");
    scanf("%f%*c", &s_base);

    s_receber = s_base - (s_base * (txir / 100));
    s_receber = s_receber + bonus;

    printf("\n\nBonus: R$%.2f", bonus);
    printf("\nImposto descontado: %.0f%%", txir);
    printf("\nO salário a receber corresponde a R$%.2f", s_receber);

    getchar();
    return 0;
}