#include <stdio.h>
#include <math.h>

int main (){


    // Program to calculate Standard Deviation:
    printf("\n\nProgama Calcular Desvio de Padrão: \n");

    int n_tamanho = 0, variavel_x, aux = 0;
    float somatorio_do_xlinha = 0,desvio_padrao=0;

    // Prompt user to enter the size of the dataset
    printf("\nDigite o indice final 'n' (tamanho):  ");
    scanf("%d", &n_tamanho);

    // Input data and compute the sum of the values
    for(int i=0; i < n_tamanho; i++){
       
        printf("\nDigite a varivel 'x' no indice %d: ", i);
        scanf("%d", &variavel_x);

        somatorio_do_xlinha += variavel_x;

        // Build the number by shifting digits (e.g., 1234 from input 1, 2, 3, 4)
        aux += variavel_x*(pow(10,n_tamanho-(i+1)));

       printf("\n%d", aux);
    } 

    somatorio_do_xlinha = somatorio_do_xlinha / n_tamanho;

    // Calculate the sum of squared differences from the mean
    for(int j = 0; j < n_tamanho; j++){
        aux %= (int)pow(10,n_tamanho-j);
        printf("\n%d",aux); 
        desvio_padrao += ((float)aux)/pow(10,n_tamanho-(j+1)) - somatorio_do_xlinha;
    }

    // Calculate the standard deviation
    desvio_padrao = sqrt(desvio_padrao/(n_tamanho-1));

    printf("\nMedia %f" ,somatorio_do_xlinha);
    printf("\nDesvio padrao %f", desvio_padrao);



    return 0;
}