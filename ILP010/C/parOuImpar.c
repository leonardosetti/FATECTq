#include <stdio.h>

main (){

int num;

printf("Digite um numero inteiro: ");
scanf("%d", &num);

if (num% 2==0){
    printf("\nNumero par: ", num);
}
else{
    printf("\nNumero impar: ", num);
}

return(0);
}

