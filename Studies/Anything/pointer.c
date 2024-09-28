#include <stdio.h>
#include <stdlib.h>

void maiorMenor(int *vetor, int tamanho, int *menor, int *maior);
void troca (float*a, float*b);
void localizador(int *vet, int posicao);

int main(){
/*

    //Questao 1
    int tamanho;

    printf("\n\nDigite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("\n");

    int menor, maior, v[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor na posicao (%d/%d): ", i, tamanho);
        scanf("%d", &v[i]);
    }

    maiorMenor(v, tamanho, &menor, &maior);
    printf("\nMenor: %d\tMaior: %d\n", menor, maior);




    //Questao 2
    float a, b;

    printf("\n\nDigite um valor: ");
    scanf("%f", &a);

    printf("Digite outro valor: ");
    scanf("%f", &b);

    printf("\n\nAntes da troca: %f %f", a, b);

    troca(&a, &b);
    printf("\nPos Troca: %f %f", a, b);

*/

    //Questao 2
    int vet[10];

    printf("\n\n");
    for(int i=0; i<10; i++){
        printf("Digite o valor do elemento no (%d/10): ", i);
        scanf("%d", &vet[i]);
    }

    int posicao;

    printf("\n\nDigite a posicao do elemento que deseja encontrar: ");
    scanf("%d", &posicao);

    printf("\n\n");
    localizador(vet,posicao);



    return 0;
}


void maiorMenor(int *vetor, int tamanho, int *menor, int *maior){

    
   *menor = *vetor;
   *maior = *vetor;
    
    
    for(int j = 0; j < tamanho; j++){
        if(*(vetor+j)<*menor)
            *menor = *(vetor+j);
                                    
        if(*(vetor+j)>*maior)
            *maior = *(vetor+j);   
    }

    /* Maneira de troca muito simples logo a cima, e muito efeitva, 
    agora porque n precisa comparar com ele mesmo??? Não sei depois pesquiso.
    No meu ver aprendendo deveria ter um else if onde o menor comparava com o propio valor dele,
    assim como no maior.
    
    Aparentemente é porque eu estou comparando apenas para achar o valor, e não para organaliza-los, até que faz sentido.*/
}

void troca (float*a, float*b){

    /*float aux;

    aux = *a;
    *a = *b;            //Aqui troca eles de posição, eu deixei alterando o valor mesmo logo abaixo
    *b = aux;*/

    *a = 6, *b = 9;
}

void localizador(int *vet, int posicao){


    for(int j=0; j<=posicao; j++){
        if(j==posicao)
            printf("O numero %d esta na posicao %d", vet[j], j);
    }
}