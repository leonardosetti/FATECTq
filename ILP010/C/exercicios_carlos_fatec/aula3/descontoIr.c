#include "stdio.h"

int main()
{
    int salario;
    double desconto;
    desconto = 0 ;
    printf("\n digite o valor do salario:");
    scanf("%d", &salario);
    if ( salario  <= 1000){
        desconto = salario * 0.05 ;
    }else {
        if ( salario <= 2000 ) {
            desconto = salario * 0.10 ;

        }else{
            desconto = salario * 0.20 ;
        }
    }
    printf("\n valor do Desconto de IR e : %f ", desconto );
    return (0);
}