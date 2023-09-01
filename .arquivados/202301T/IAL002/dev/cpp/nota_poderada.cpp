#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media_pond;

    printf("\nInsira os valores das tres notas:\n");
    scanf("%f%*c",&nota1);
    scanf("%f%*c",&nota2);
    scanf("%f%*c",&nota3);
    
    printf("\nInsira os valores dos tres pesos:\n");
    scanf("%f%*c",&peso1);
    scanf("%f%*c",&peso2);
    scanf("%f%*c",&peso3);
    
    media_pond = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    
    printf("\nO resultado da media ponderada e: %.3f", media_pond);
    
    getchar();
    return 0;
}