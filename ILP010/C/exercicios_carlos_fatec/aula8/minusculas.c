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
    for ( i = 0 ; i < tamanho;  i++ ){
        if ( ( texto[i] > 64 ) && ( texto[i] < 91 )) {
           printf("%c", texto[i]+32 ) ;
        } else {
            printf("%c", texto[i] ) ;
        }

    }


}