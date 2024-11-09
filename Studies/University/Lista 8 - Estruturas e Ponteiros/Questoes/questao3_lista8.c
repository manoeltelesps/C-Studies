#include <stdio.h>
#include <math.h>



typedef struct{
    float x;
    float y;
}Ponto;


float distanciaPontos(Ponto num1, Ponto num2);


int main() {



    //Questão 3
    printf("\n\nProgama Distancia Pontos: \n\n");

    Ponto alet1, alet2;

    printf("Digite o ponto cartesiano seguindo esse padrao (x,y): ");
    scanf("%f,%f", &alet1.x, &alet1.y);

    printf("Digite outro ponto cartesiano seguindo esse padrao (x,y): ");
    scanf("%f,%f", &alet2.x, &alet2.y);

    printf("\nA distancia entre os pontos cartesianos e de: %.2f", distanciaPontos(alet1, alet2));


    return 0;
}

float distanciaPontos(Ponto num1, Ponto num2){

    return sqrt(pow((num1.x - num2.x),2) + pow((num1.y - num2.y),2));

}

