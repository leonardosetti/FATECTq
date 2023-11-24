#include "stdio.h"

int main()
{
    int a, b , c;
    printf("\n digite o valor de a: ");
    scanf("%d", &a);
    printf("\n digite o valor de b: ");
    scanf("%d", &b);
    printf("\n digite o valor de c: ");
    scanf("%d", &c);    
    if ( ( a > b) && ( a > c) ) {
        printf("\n Maior valor e: %d", a );    
    }else {
        if ( b> c) {
            printf("\n Maior valor e: %d", b );    
        } else {
            printf("\n Maior valor e: %d", c );        
        }
        
    }
    
    return (0);
}