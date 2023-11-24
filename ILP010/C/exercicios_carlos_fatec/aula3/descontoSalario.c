#include "stdio.h"

int main(){
    float salario;
    double valorinss ;
    valorinss = 0;
    salario = 1000;
    printf("\n digite o valor do salario: ");
    scanf("%f", &salario);
    // salario ate 1212.00 desconto de 7.5
    if ( salario <= 1212.00){
       valorinss = salario * 0.075;
    } else {
        if ( salario <= 2427.35){
            valorinss = ( 1212.00 * 0.075) + 
              (( salario - 1212.00) * 0.09);
        } else {
          if ( salario <= 3641.03) {
            valorinss = ( 1212.00 * 0.075) + 
                        (( 2427.35 - 1212.01) * 0.09 ) +
                        (( salario - 2427.36) * 0.12 ) ; 
          } else {
            if ( salario <= 7087.22) {
             valorinss = ( 1212.00 * 0.075) + 
                        (( 2427.35 - 1212.01) * 0.09 ) +
                        (( 3641.03 - 2427.36) * 0.12 )+
                        (( salario - 3641.04) * 0.14 ) ; 
            } else {
                valorinss = 828.09 ;
            }   
          }
        }
    }

    printf( "%.2f", valorinss);

    return (0);
}