#include "stdio.h"

int main()
{
    int idade;
    printf("\n digite sua idade:");
    scanf("%d", &idade);
    if (idade >= 18) 
        printf("\n Voce e maior de idade ! ");
    return (0);
}