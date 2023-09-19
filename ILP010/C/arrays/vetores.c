    #include<stdio.h>
    #include<stdlib.h>

    int main(){
    int vetor[10], result=0;

    for (int i=0; i<10; i++){
        printf("Digite o %d para soma\n   --> ", i+1);
        scanf("%d*c", &vetor[i]);
    }

    for (int i;i<10;i++){
        result += vetor[i];
    }
    printf ("Resultado das somas:%d\n", result);

    return (0);
    }
