#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    int dado;
    struct no *proximo;
}No;

void criador(int tamanho, No *topo, No *atual, No *temp);
void imprimir(void (*criador)(int No*, No*, No*));

int main(){

    
    No *topo = NULL;
    No *atual = NULL;
    No *temp = NULL;

    int tam;

    printf("\nDigite o tamaho da pilha: ");
    scanf("%d", &tam);
    
    criador(tam, topo, atual, temp);

    atual = topo;

    imprimir(criador(tam, topo, atual,));

    
    
}



void criador(int tamanho, No *topo, No *atual, No *temp){
    
    int numero;
    
    for(int i = 0; i < tamanho; i++){
        
        atual = (No *)malloc(sizeof(No));

        printf("\nEscreva o numero na posicao (%d): ", 1+i);
        scanf("%d", &numero);

    atual -> proximo = NULL;
        atual -> dado = numero;

        if(topo == NULL)
            topo = atual;
        else
            temp -> proximo = atual;

        temp = atual;
    }

    atual = topo;

}

void imprimir(void (*criador)(int No*, No*, No*)){

    while(atual != NULL){
            printf("%d ", atual->dado);
            atual = atual->proximo;
    }   

   return 0;
}