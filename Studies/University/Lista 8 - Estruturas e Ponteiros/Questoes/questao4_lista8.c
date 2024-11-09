#include <stdio.h>
#include <string.h>
#include <math.h>



typedef struct{
    float x;
    float y;
}Ponto;

float distanciaPontos(Ponto num1, Ponto num2);
void exibirSegmento(int tam);

int main() {



    //Questão 4
    printf("\n\nProgama Segmento de Reta: \n\n");

    Ponto alet1, alet2;

    printf("Digite o ponto cartesiano seguindo esse padrao (x,y): ");
    scanf("%f,%f", &alet1.x, &alet1.y);

    printf("Digite outro ponto cartesiano seguindo esse padrao (x,y): ");
    scanf("%f,%f", &alet2.x, &alet2.y);

    printf("\nTamanho do Segmento e de: %.2f", distanciaPontos(alet1, alet2));


    float tamanho;

    tamanho = distanciaPontos(alet1,alet2);
    
    printf("\n\nRepresentacao: ");
    exibirSegmento(tamanho);
    


    return 0;
}


float distanciaPontos(Ponto num1, Ponto num2){

    return sqrt(pow((num1.x - num2.x),2) + pow((num1.y - num2.y),2));

}

void exibirSegmento(int tam){
    
    while (tam != 0)
    {
        putchar('-');
        tam--;
    }
    
}