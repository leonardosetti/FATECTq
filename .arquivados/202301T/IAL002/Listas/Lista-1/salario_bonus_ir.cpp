#include <stdio.h>
#include <fstream>
#define bonus 0.054
#define txir 0.07

// Faça um programa que receba o salário base de um funcionário, calcule e mostre
// o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o
// salário base e paga imposto de 7% também sobre o salário base

int main()
{

    float s_base, s_corrente, calc_bonus, calc_ir;

    printf("Informe o valor do base do Funcionário:");
    printf("\n===> R$ ");
    scanf("%f%*c", &s_base);

    calc_bonus = s_base * bonus;
    printf("\nValor do bonus aplicado ao salário base: R$%.2f", calc_bonus);
    printf(" --> equivalente a %.0f%%", bonus * 100);
    
    calc_ir = s_base * txir;
    printf("\nValor do desconto de IR aplicado ao salário base: R$%.2f", calc_ir);
    printf(" --> equivalente a %.0f%%", txir * 100);
    
    s_corrente = s_base + calc_bonus - calc_ir;
    printf("\nValor do salário liquido do funcionário a receber é: R$%.2f", s_corrente);

    getchar();
    return 0;
}
