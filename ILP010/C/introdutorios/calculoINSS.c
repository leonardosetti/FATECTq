#include <stdio.h>

int main()
{

    // Calcule o valor progressivo de desconto aplicado a um valor salarial conforme a tabela:
    // Salário mínimo = 1320.00
    // Até R$ 1320.00 7.5%
    // De R$ 1320.01 a R$ 2571.29 9%
    // De R$ 2571.30 até R$ 3856.94 12%
    // De R$ 3856.95 até R$ 7507.49 14%
    // Teto = 876.97

    const float teto = 876.97;
    const float alqfx1 = 0.075, alqfx2 = 0.09, alqfx3 = 0.12, alqfx4 = 0.14;
    const float salfx1 = 1320, salfx2 = 2571.29, salfx3 = 3856.94, salfx4 = 7507.49;

    float salR, contrib;

    printf("Informe o salário para cálculo da contribuição:\nR$ ");
    scanf("%f", &salR);

    if (salR <= 0)
    {
        printf("O valor inserido não é compatível para o cálculo.\n");
        return 1;
    }
    else if ((salR > 0) && (salR <= salfx1))
    {
        contrib = salR * alqfx1;
    }
    else if ((salR > salfx1) && (salR <= salfx2))
    {
        contrib = salfx1 * alqfx1;
        contrib = contrib + (salR - salfx1) * alqfx2;
    }
    else if ((salR > salfx2) && (salR <= salfx3))
    {
        contrib = salfx1 * alqfx1;
        contrib = contrib + (salfx2 - salfx1) * alqfx2;
        contrib = contrib + (salR - salfx2) * alqfx3;
    }
    else if ((salR > salfx3) && (salR <= salfx4))
    {
        contrib = salfx1 * alqfx1;
        contrib = contrib + (salfx2 - salfx1) * alqfx2;
        contrib = contrib + (salfx3 - salfx2) * alqfx3;
        contrib = contrib + (salR - salfx3) * alqfx4;
    }
    else
    {
        contrib = teto;
    }

    printf("O valor de alíquota para contribuição é: R$%.2f \n", contrib);

    return (0);
}