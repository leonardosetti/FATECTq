#include <stdio.h>

int main (){

int i, soma =0 , vetor[100], nElementos=0;

printf("Informe o numero de elementos desejados entre [1 e 100]\n--> " );
scanf("%d",&nElementos);

for (i;i<nElementos;i++){
    printf("Informe o numero para posição %d de %d elementos\n--> ", i+1, nElementos);
    scanf("%d", &vetor[i]);
}

for (i=0;i<nElementos;i++){
    soma += vetor[i];
}
printf ("Total soma: %d\n", soma);

return(0);
}
