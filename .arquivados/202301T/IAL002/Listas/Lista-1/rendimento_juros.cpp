#include <stdio.h>
#include <fstream>
#include <math.h>

// Faça um programa que receba o valor de um depósito e o valor da taxa de juros,
// calcule e mostre o valor do rendimento e o valor total depois do rendimento.

int main()
{

    float vl_dep, tx_juros, vl_rend, vl_rend_acm, saldo_corrente, ciclo_meses;
    int opt_calc;

    printf("Informe o valor do depósito para rendimento:");
    printf("\nDepósito ===> R$");
    scanf("%f%*c", &vl_dep);

    printf("Informe o valor da taxa de juros para o rendimento:");
    printf("\nDepósito ===> ");
    scanf("%f%*c", &tx_juros);

    tx_juros = tx_juros / 100;

    vl_rend = vl_dep * tx_juros;

    printf("\nA taxa de juros aplicada rende R$%.0f", vl_rend);

    saldo_corrente = vl_dep + vl_rend;

    printf("\nO valor total atual é R$%.0f", saldo_corrente);

    printf("\n\nDeseja calcular o rendimento acumulado após X meses?");
    printf("\n1 - SIM");
    printf("\n2 - NÃO");
    printf("\nOpção ===> ");
    scanf("%d%*c", &opt_calc);

    if (opt_calc == 2)
    {
        printf("\n\nO programa será encerrado.\nObrigado");
    }
    else if (opt_calc == 1)
    {
        // "M = C (1 + i)^t"

        printf("\nInforme quantos meses de rendimento acumulado quer calcular");
        printf("\nNúmero de meses ===> ");
        scanf("%f%*c", &ciclo_meses);

        vl_rend_acm = vl_dep * (pow((1 + tx_juros), ciclo_meses));

        printf("\nO valor do rendimento acumulado em %.0f", ciclo_meses);
        printf(" meses é de R$%.2f", vl_rend_acm);

        saldo_corrente = vl_dep + vl_rend_acm;
        printf("\nO valor total acumulado em %.0f", ciclo_meses);
        printf(" meses, é de R$%.2f", saldo_corrente);

        printf("\n\nRendimento acumulado calculado com sucesso!\nObrigado\n");
    }
    else
    {
        printf("\nEsta é uma opção inválida!\nO programa será encerrado.");
    }

    getchar();
    return 0;
}