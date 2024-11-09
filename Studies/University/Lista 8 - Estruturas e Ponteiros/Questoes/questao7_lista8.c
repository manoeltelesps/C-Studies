#include <stdio.h>
#include <string.h>

typedef struct{
    char titulo[50];
    char autor[50];
    int anopublicacao;
}Livro;

void preencherLivro(Livro *x);
void imprimirPrateleira(Livro *x, int num);

int main() {

    //Questão 7
    printf("\n\nBibliotecario: \n\n");

    int stp;

    printf("\n\t1 - Sim\n\t0 - Nao \n\nQuer adicionar um livro? ");
    scanf("%d", &stp);
    getchar();

    Livro prateleira[3] = {};
    int contador = 0;

    while (stp && contador < 3) {
        
        preencherLivro(&prateleira[contador]);
        contador++;

        if (contador < 3) {
            printf("\n\nQuer adicionar outro livro? (1 - Sim, 0 - Nao): ");
            scanf("%d", &stp);
            getchar();
        } 
        else {
            printf("\nPrateleira cheia! Nao e possivel adicionar mais livros.\n");
        }
    }
    
    imprimirPrateleira(prateleira, contador);

    return 0;
}



void preencherLivro(Livro *x){
    
    printf("\nEscreva o Titulo do Livro: ");
    fgets(x->titulo, sizeof(x->titulo), stdin);
    fflush(stdin);

    printf("Escreva o Autor do Livro: ");
    fgets(x->autor, sizeof(x->autor), stdin);
    fflush(stdin);

    printf("Escreva o Ano de Publicacao do Livro: ");
    scanf("%d", &x->anopublicacao);
    getchar();
    
}

void imprimirPrateleira(Livro *x, int num){

    for(int i = 0; i < num; i++){

        printf("\n\nLivro %d:\n\n", i + 1);
        printf("Titulo: %s", x[i].titulo);
        printf("Autor: %s", x[i].autor);
        printf("Ano de Publicacao: %d", x[i].anopublicacao);
    }  

}