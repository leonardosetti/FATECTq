#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char texto[100];
    int tamanho , i ;
    system("cls") ;
    printf(" informe o texto : ");
    setbuf(stdin, NULL);
    scanf("%[^\n]",texto );

    tamanho = strlen( texto ) ;
    printf( "\n %d", tamanho ); 

    printf("\n texto invertido: ") ;
    for ( i = tamanho; i >= 0;  i-- ){
        printf("%c", texto[i]) ;
    }


}