#include <stdio.h>
#include <stdlib.h>

void maiorMenor(int *vetor, int tamanho, int *menor, int *maior);
void troca (float*a, float*b);
void localizador(int *vet);

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



    //Questao 3
    int vet[10];

    printf("\n\n");
    for(int i=0; i<10; i++){
        printf("Digite o valor do elemento no (%d/10): ", i);
        scanf("%d", &vet[i]);
    }

    printf("\n\n");
    localizador(vet);

   

    //Questao 4
    
    int A, *ptA, **pt_ptA, ***pt_pt_ptA;

    ptA = &A;
    pt_ptA = &ptA;
    pt_pt_ptA = &pt_ptA;

    // *pt_ptA == ptA == &A
    // **pt_ptA == *ptA == A 
                                                
    // *pt_pt_ptA == pt_ptA == &ptA
    // **pt_pt_ptA == *pt_ptA == ptA == &A
    // ***pt_pt_ptA == **pt_ptA == *ptA == A


    printf("\n\nDigite um numero: ");
    scanf("%d", &A);

    int dobro = *ptA + *ptA;
    int triplo  = **pt_ptA + dobro;
    int quadr = ***pt_pt_ptA + triplo;

    printf("\nO seu dobro e %d\nO seu triplo e %d\nO seu quadraplo e %d ", dobro, triplo, quadr);
  

*/
    






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
    }.
    
    //A troca é porque eu estou comparando apenas para achar os extremos, e não para organaliza-los, até que faz sentido.*/
}

void troca (float*a, float*b){

    /*float aux;

    aux = *a;
    *a = *b;    */       

    *a = 6, *b = 9;
}

void localizador(int *vet){


    for(int j=0; j<10; j++){
      printf("Posicao: %d e Numero: %d\n", j, vet[j]);
    }
    
    // printf("Posicao: %d e Numero: %d\n", j+1, vet[j]); --> Ficando assim, mas vou deixar sem o +1, para não confundir a minha compreensão de arrays unidimensionais. 
}
