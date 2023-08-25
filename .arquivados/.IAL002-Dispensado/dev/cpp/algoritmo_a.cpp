#include <stdio.h>

int main()
{
    float term1, term2, multRes;
    printf("\nAlgoritmo a");
    printf("\nDigite o valor do primeiro termo da multiplicacao:\n");
    scanf("%f%*c", &term1);
    printf("\nDigite o valor do segundo termo da multiplicacao:\n");
    scanf("%f%*c", &term2);
    multRes = term1 * term2;
    printf("\nO resultado da multiplicacao e: %f\n", multRes);
    getchar();
    return 0;
}
