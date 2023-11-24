#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2
#define FILENAME "alunos.fatec"
FILE *arq;

struct aluno{
    int id;
    char nome[50];
    int idade ;
    int e ;  // controlar a exclusao logica
};
int menu(struct aluno alunos[TAM]);

int ficha( struct aluno alunos[TAM] );
void cadastrarficha( struct aluno alunos[TAM] );
void consultaficha(struct aluno alunos[TAM] );
void mostrarlista(struct aluno alunos[TAM] );
void ordenarPorNome(int n, struct aluno v[TAM]);
void listartodososalunos(struct aluno alunos[TAM] );
void exclusaoficha(struct aluno alunos[TAM] );
void alterarficha(struct aluno alunos[TAM] );

int main(){
    struct aluno a[TAM];    
    return menu( a ) ;
}

int ficha( struct aluno alunos[TAM] ){
    system("cls");
    //entradaficha(alunos);
    mostrarlista(alunos);
    return 0 ;
}

void cadastrarficha( struct aluno alunos[TAM] ){
    int finalizar = 0;
    struct aluno ficha ;
    system("cls");
    if ((arq=fopen( FILENAME,"rb+"))==NULL){
	if ((arq=fopen( FILENAME,"wb"))==NULL)
		{ printf("\n Erro");
          return 1 ;    
		}
	}

    do {
       //
        printf("\ninforme o id do aluno: ");
        scanf("%d", &ficha.id);
        printf("\ninforme o nome do aluno: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]", ficha.nome);
        printf("\ninforme o idade do aluno: ");
        scanf("%d", &ficha.idade);
        //
        ficha.e = 0;
        // escrevendo informações no arquivo
        fseek(arq,0,2);
        fwrite(&ficha,sizeof(ficha),1,arq);
        //
        printf("\n Deseja incluir ou registro! \n Pressione [9] para voltar, outra tecla para continuar..");
        scanf("%d", &finalizar) ;        
    } while ( finalizar != 9);
    fclose(arq);
    
}

void mostrarlista(struct aluno alunos[TAM] ){
     int i;
      system("cls");
    printf("\n");
    ordenarPorNome(TAM, alunos);
    //
    printf("\n ficha digitada");
    for ( i= 0; i < TAM;  i++) {
        printf("\n codigo: %d", alunos[i].id );
        printf("\n nome: %s", alunos[i].nome );
        printf("\n idade: %d", alunos[i].idade );
    
    }
    printf("tecle qualquer tecla para finalizar ...") ;
    setbuf(stdin, NULL);
    getch();
}

void ordenarPorNome(int n, struct aluno v[TAM])
{
    int i, j ;
    struct aluno aux;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ( strcmp(v[i].nome,v[j].nome) == 1)
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int menu(struct aluno alunos[TAM]){
    int opc;
    do
    {
         system("cls");
         printf("\n 1. Cadastrar") ;
         printf("\n 2. Consultar") ;
         printf("\n 3. Alterar") ;
         printf("\n 4. Excluir") ;
         printf("\n 5. Listar Todos os Alunos") ;
         printf("\n 9. Finalizar") ;
         printf("\n ") ;
         printf("\n Informe a opcao desejada: ") ;
         setbuf(stdin, NULL);
         scanf("%d", &opc);
         if ( opc == 1 ){ cadastrarficha(alunos);}
         if ( opc == 2 ){ consultaficha(alunos); }
         if ( opc == 3 ){ alterarficha(alunos);}
         if ( opc == 4 ){ exclusaoficha(alunos); }
         if ( opc == 5 ){ listartodososalunos(alunos); }
        
    } while ( opc !=9 );
    return opc ;
}

void listartodososalunos(struct aluno alunos[TAM] ){
    int i, n ;
    struct aluno ficha;
    system("cls");
    printf("\n Lista Todos os Alunos");
    printf("\n");
    //
    if ((arq = fopen( FILENAME, "rb")) == NULL) {
        printf("\n Erro");
        return 0 ;
    }
    // carregar o arquivo para o vetor alunos
    i = 0 ;
    while ( fread(&ficha, sizeof(ficha), 1, arq)) {
        //if ( ficha.e == 0) {
        printf( "\n %4d | %s | %d | %d", ficha.id, ficha.nome, ficha.idade , ficha.e);
       // }
       alunos[i] = ficha ;
       i ++ ;
    }
    //
    ordenarPorNome(i, alunos);
    //
    printf("\n");
    printf("\n ficha digitada");
    for ( n= 0; n < i;  n++) {
         printf("\n codigo: %d", alunos[n].id );
         printf("\n nome: %s", alunos[n].nome );
         printf("\n idade: %d", alunos[n].idade );
    
    }
    printf("\n tecle qualquer tecla para finalizar ...") ;
    setbuf(stdin, NULL);
    getch();
}

void consultaficha(struct aluno alunos[TAM] ){
    int achou ;
    struct aluno ficha;
    char nome[50];
    system("cls");
    printf("\n Consulta por nome");
    printf("\n");
    //
    if ((arq = fopen( FILENAME, "rb")) == NULL) {
        printf("\n Erro");
        return 0 ;
    }
   printf("\n informe o nome :") ;
   setbuf(stdin, NULL);
   scanf("%[^\n]", nome);
    // carregar o arquivo para o vetor alunos
    achou = 0 ;
    while ( fread(&ficha, sizeof(ficha), 1, arq)) {
        //if ( ficha.e == 0) {
        if ( strcmp( nome , ficha.nome) == 0 ) {
            printf("\n codigo: %d", ficha.id );
            printf("\n nome: %s", ficha.nome );
            printf("\n idade: %d", ficha.idade );
           achou = 1 ;
            break;
        }        
    }
    fclose(arq);
    if ( achou == 0 ){
        printf("\n Falha, busca nao localizou o nome ") ;
    }     
    printf("\n");
    printf("\n tecle qualquer tecla para finalizar ...") ;
    getch();
}

// exclusao logica
void exclusaoficha(struct aluno alunos[TAM] ){
    int achou , confirmacao;
    struct aluno ficha;
    char nome[50];
    system("cls");
    printf("\n Exclusao Registro por nome");
    printf("\n");
    //
    if ((arq = fopen( FILENAME, "rb+")) == NULL) {
        printf("\n Erro");
        return 0 ;
    }
   printf("\n informe o nome :") ;
   setbuf(stdin, NULL);
   scanf("%[^\n]", nome);
    // carregar o arquivo para o vetor alunos
    achou = 0 ;
    while ( fread(&ficha, sizeof(ficha), 1, arq)) {
        //if ( ficha.e == 0) {
        if ( strcmp( nome , ficha.nome) == 0 ) {
            fseek(arq,ftell(arq)-sizeof(ficha),0);
            printf("\n codigo: %d", ficha.id );
            printf("\n nome: %s", ficha.nome );
                        printf("\n idade: %d", ficha.idade );
                        ficha.e = 1;
                        printf( "\n\n Deseja excluir a ficha? \n Pressione [1] para SIM e outra tecla para cancelar ..."); 
                        scanf("%d", &confirmacao);
                        if ( confirmacao == 1 ) {
                           fwrite(&ficha,sizeof(ficha),1,arq);                       
                        }   
                        fseek(arq,0,2);
            achou = 1 ;
        }        
    }
    fclose(arq);
    if ( achou == 0 ){
        printf("\n Falha, busca nao localizou o nome ") ;
        printf("\n");
        printf("\n tecle qualquer tecla para finalizar ...") ;
        getch();
    }     
}

// 
void alterarficha(struct aluno alunos[TAM] ){
    int achou , confirmacao;
    struct aluno ficha;
    char nome[50];
    system("cls");
    printf("\n Alterar Registro por nome");
    printf("\n");
    //
    if ((arq = fopen( FILENAME, "rb+")) == NULL) {
        printf("\n Erro");
        return 0 ;
    }
   printf("\n informe o nome :") ;
   setbuf(stdin, NULL);
   scanf("%[^\n]", nome);
    // carregar o arquivo para o vetor alunos
    achou = 0 ;
    while ( fread(&ficha, sizeof(ficha), 1, arq)) {
        //if ( ficha.e == 0) {
        if ( strcmp( nome , ficha.nome) == 0 ) {
            fseek(arq,ftell(arq)-sizeof(ficha),0);
            printf("\ninforme o id do aluno : [ %d ] ", ficha.id );
            scanf("%d", &ficha.id);
            printf("\ninforme o nome do aluno [ %s ]: ", ficha.nome);
            setbuf(stdin, NULL);
            scanf("%[^\n]", ficha.nome);
            printf("\ninforme o idade do aluno [ %d ]: ", ficha.idade);
            setbuf(stdin, NULL);
            scanf("%d", &ficha.idade);

            printf("\n Status exclusao logica [ %d ]: ", ficha.e);
            setbuf(stdin, NULL);
            scanf("%d", &ficha.e);
            // ficha.e = 1;
            printf( "\n\n Deseja alterar a ficha? \n Pressione [1] para SIM e outra tecla para cancelar ..."); 
            scanf("%d", &confirmacao);
            if ( confirmacao == 1 ) {
                fwrite(&ficha,sizeof(ficha),1,arq);                       
            }   
            fseek(arq,0,2);
            achou = 1 ;
        }        
    }
    fclose(arq);
    if ( achou == 0 ){
        printf("\n Falha, busca nao localizou o nome ") ;
        printf("\n");
        printf("\n tecle qualquer tecla para finalizar ...") ;
        getch();
    }     
}

