#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    int dado;
    struct no *proximo;
}No;

int main(){

    No *topo;

    topo -> dado = 5;

    No *atual = (No *)malloc(sizeof(No));

    if(atual == NULL){

        atual = topo;
        topo -> proximo = NULL;
    }
    else{
        atual = proximo -> topo;
    }

    printf("%d", topo -> dado);





}