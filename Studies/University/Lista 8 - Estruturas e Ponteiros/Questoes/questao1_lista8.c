#include <stdio.h>

typedef struct{
    char titulo[50];
    char autor[50];
    char editora[50];
    int anoPublicacao;
}Livro;


int main() {


    //Questão 1
    printf("\nProgama Variavel Anonima: \n\n");

    Livro livro;
    
    strcpy(livro.titulo, "O Senhor dos Aneis");
    strcpy(livro.autor, "J.R.R. Tolkien");
    strcpy(livro.editora, "Martins Fontes");
    livro.anoPublicacao = 1954;

    putchar('\n');
    
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Editora: %s\n", livro.editora);
    printf("Ano de Publicacao: %d\n", livro.anoPublicacao);


    return 0;

}