#include <stdio.h>
#include <fstream>

// Faça um programa que receba o salário de um funcionário e o percentual de 
// aumento, calcule e mostre o valor do aumento e o novo salário

int main()
{
    float s_corrente, tx_ajuste, s_ajust;

    printf("Informe o valor do salário atual do Funcionário:");
    printf("\n===> R$ ");
    scanf("%f%*c", &s_corrente);

    printf("\nDefina o percentual de ajuste do salário");
    printf("\nTaxa de ajuste ===> ");
    scanf("%f%*c", &tx_ajuste);

    if (tx_ajuste < 0)
    {
        printf("\nAtenção: Valores negativos vão gerar decréscimo no salário corrente.");

        tx_ajuste = tx_ajuste / 100;
        s_ajust = s_corrente * tx_ajuste;

        printf("\nA taxa de ajuste corresponde a %.2f%%", tx_ajuste);
        printf("\nHouve um decréscimo de -R$%.2f", s_ajust*-1);
        printf(" no salário corrente!");
        s_ajust = s_ajust + s_corrente;
    }

    else if (tx_ajuste > 0)
    {
        tx_ajuste = tx_ajuste / 100;
        s_ajust = s_corrente * tx_ajuste;

        printf("\nA taxa de ajuste corresponde a %.2f%%", tx_ajuste);
        printf("\nHouve um acréscimo real de R$%.2f", s_ajust);
        printf(" no salário corrente!");
        s_ajust = s_ajust + s_corrente;
    }
    else if (tx_ajuste==0)
    {
        printf("\nNão houve ajuste para este salário!");
        s_ajust = s_corrente;
    }
    else
    {
        printf("\nOpção inválida!\nNão houve ajuste para este salário.");
    }

    printf("\n");
    printf("\nO valor do salário atualizado é de R$%.2f", s_ajust);

    getchar();
    return 0;
}