#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  
  return Lista();
}

int Lista( ){
    char nome[5];  
    int idade;
    printf("\n Informe o nome do aluno: ");
    //scanf("%[^\n]", nome);
    fgets (nome, 50, stdin); 
    //scanf("%50[^\n]" ,nome);
    //puts (nome);
    //fputs (nome, stdout);


    printf("\n sua idade [0-999]: ");
    scanf("%d", &idade);
    if ( idade >= 18 ) {
        printf(" O %s voce tem %d anos de idade, voce e de maior, prossiga ...", nome, idade);
    }else{
        printf(" O %s voce tem %d anos de idade, voce e de menor, cancelado ...", nome , idade );
    }
    return(0) ;
}


