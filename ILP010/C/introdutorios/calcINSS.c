#include <stdio.h>

main(){
    const float teto;
    float salC, aliq, calcD;

    printf("Informe o salario para aplicacao de desconto de INSS");
    scanf ("%f",&salC);

    if (salC <= 1212.00){
        calcD = salC*0.075;
    }










printf("\nAliquota calculada: %f", &calcD);
return(0);
}
