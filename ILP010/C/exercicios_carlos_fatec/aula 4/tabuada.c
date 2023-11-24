#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, t, opc ;
    opc = 0 ;
    do
    {
        system("cls");
        printf("\n informe a tabuada desejada : ");
        scanf("%d", &t) ;
        if ( t > 0 ){
            printf("\n Tabuada do %d", t );
            printf("\n - - - - - - - -") ;
            for ( i = 1; i <= 10 ; i++ ) {
                printf( "\n %d x %d = %d", i, t, (i * t) );
            }
            printf("\n - - - - - - - -") ;
            printf("\n") ;

            printf("\nDeseja finalizar presiome [1], continuar qualquer tecla : ");
            scanf("%d", &opc);
        } else {
            printf( "\n valor informado esta incorreto!");
        }
    } while ( opc != 1 );    
    return(0);
}
