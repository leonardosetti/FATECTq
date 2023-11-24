#include <stdio.h>

void preenchematriz( int m[100][100], int row, int col );
void mostramatriz( int m[100][100], int row, int col);
int somamatriz(int m[100][100], int row, int col);
int produtomatriz(int m[100][100], int row, int col);
void sumColunsmatriz( int m[100][100], int row, int col);
int somaDiagonalmatriz(int m[100][100], int row, int col);

int main(){
    int matriz[100][100];
    int row, col ;
    row = 3 ;
    col = 3 ;
    preenchematriz(matriz, row, col);
    mostramatriz(matriz, row, col);

    printf("\n Resumo :");
    printf("\n a) soma dos elementos da matriz: %d ",  somamatriz(matriz, row, col));
    printf("\n b) produto dos elementos da matriz: %d ",  produtomatriz(matriz, row, col));
    sumColunsmatriz(matriz, row, col);
    printf("\n\n d) produto dos elementos da matriz: %d ",  somaDiagonalmatriz(matriz, row, col));
    
}

void preenchematriz( int m[100][100], int row, int col){
    int linha, coluna , contador;
    contador = 1;
    for (linha= 0; linha < row;  linha++ ){
        for( coluna=0;coluna < col; coluna ++){
            m[linha][coluna] = contador;
            contador ++ ; 
        }
    }
}

void mostramatriz( int m[100][100], int row, int col){
    int linha, coluna;
    printf("\n*-----------------*");
    printf("\n|  Matriz %d x %d  |", row, col);
    printf("\n|-----------------|");
    for (linha= 0; linha < row;  linha++ ){
        printf("\n| ");
        for( coluna=0;coluna < col; coluna ++){
            printf( " %d ", m[linha][coluna]);
            printf(" | ");
        }
        printf("\n|-----------------|");
    }
    
}

int somamatriz(int m[100][100], int row, int col){
  int linha, coluna, aux ;
  aux = 0;
    for (linha= 0; linha < row;  linha++ ){
        for( coluna=0;coluna < col; coluna ++){
           aux += m[linha][coluna] ;
        }        
    }   
    return( aux ) ; 
}

int produtomatriz(int m[100][100], int row, int col){
  int linha, coluna, aux ;
  aux = 1;
    for (linha= 0; linha < row;  linha++ ){
        for( coluna=0;coluna < col; coluna ++){
           aux *= m[linha][coluna] ;
        }        
    }   
    return( aux ) ; 
}

void sumColunsmatriz( int m[100][100], int row, int col){
    int linha, coluna,aux;
    mostramatriz(m, row, col);
    printf("\n| ");
    for( coluna=0;coluna < col; coluna ++) {        
         aux = 0;
        for(linha= 0; linha < row;  linha++ ){
            aux += m[linha][coluna];
        }
        printf( " %d ",aux);
        printf("| ");
        
    }
    printf("\n|-----------------|");
    
}



int somaDiagonalmatriz(int m[100][100], int row, int col){
  int linha, coluna, aux ;
  aux = 0;
    for (linha= 0; linha < row;  linha++ ){
        
           aux += m[linha][linha] ;
                
    }   
    return( aux ) ; 
}