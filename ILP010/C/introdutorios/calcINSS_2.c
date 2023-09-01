#include <stdio.h>

int main()
{
    // Cálculo de desconto progressivo aplicado a um valor salarial de acordo com a tabela:
    // Salário mínimo = 1320,00
    // Até R$ 1320,00 7,5%
    // De R$ 1320,01 a R$ 2571,29 9%
    // De R$ 2571,30 até R$ 3856,94 12%
    // De R$ 3856,95 até R$ 7507,49 14%
    // Teto = 876,97

    const double teto = 876.97;
    const double alqfx[] = {0.075, 0.09, 0.12, 0.14};
    const double salfx[] = {1320, 2571.29, 3856.94, 7507.49};

    float salR = 0, contrib = 0;

    printf("Informe o salário para o cálculo da contribuição:\nR$ ");
    scanf("%f", &salR);

    if (salR <= 0)
    {
        printf("O valor inserido não é compatível para o cálculo.\n");
        return 1;
    }

    if (salR <= salfx[0])
    {
        contrib = salR * alqfx[0];
    }
    else if (salR <= salfx[1])
    {
        contrib = salfx[0] * alqfx[0];
        contrib += (salR - salfx[0]) * alqfx[1];
    }
    else if (salR <= salfx[2])
    {
        contrib = salfx[0] * alqfx[0];
        contrib += (salfx[1] - salfx[0]) * alqfx[1];
        contrib += (salR - salfx[1]) * alqfx[2];
    }
    else if (salR <= salfx[3])
    {
        contrib = salfx[0] * alqfx[0];
        contrib += (salfx[1] - salfx[0]) * alqfx[1];
        contrib += (salfx[2] - salfx[1]) * alqfx[2];
        contrib += (salR - salfx[2]) * alqfx[3];
    }
    else
    {
        contrib = teto;
    }

    printf("O valor da alíquota de contribuição é: R$%.2f\n", contrib);

    return 0;
}
