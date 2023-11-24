#include "stdio.h"

int main()
{
    int a, b ;
    printf("\n digite o valor de a:");
    scanf("%d", &a);
    printf("\n digite o valor de b:");
    scanf("%d", &b);
    if ( a > b){
        printf("\n a > b , %d > %d ", a,b );    
    }else {
        printf("\n a < b , %d < %d ", a,b );    
    }
    
    return (0);
}