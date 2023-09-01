#include <stdio.h>
#include <fstream>

// Faça um programa que receba três notas e seus respectivos pesos, calcule e 
// mostre a média ponderada.

int main()
{
    float val1, val2, val3, pso1, pso2, pso3, mediaPond, peso_f, v1_grp, v2_grp, v3_grp, s_val;

    printf("\nDefina valor da Nota(1): ");
    printf("\n:: Nota 1 ===> ");
    scanf("%f%*c", &val1);
    printf("\nDefina valor da Nota(2): ");
    printf("\n:: Nota 2 ===> ");
    scanf("%f%*c", &val2);
    printf("\nDefina valor da Nota(3): ");
    printf("\n:: Nota 3 ===> ");
    scanf("%f%*c", &val3);

    printf("\nDefina  o valor do Peso 1: ");
    printf("\n:: Peso 1 ===> ");
    scanf("%f%*c", &pso1);
    printf("\nDefina  o valor do Peso 2: ");
    printf("\n:: Peso 2 ===> ");
    scanf("%f%*c", &pso2);
    printf("\nDefina  o valor do Peso 3: ");
    printf("\n:: Peso 3 ===> ");
    scanf("%f%*c", &pso3);

    // Inicio do cálculo da média ponderada usando três valores:

    peso_f = (pso1 + pso2 + pso3);
    v1_grp = (val1 * pso1);
    v2_grp = (val2 * pso2);
    v3_grp = (val3 * pso3);
    s_val = (v1_grp + v2_grp + v3_grp);

    mediaPond = s_val / peso_f;

    printf("\nO resultado da Média ponderada para os valores informados é: %.2f", mediaPond);

    getchar();
    return 0;
}