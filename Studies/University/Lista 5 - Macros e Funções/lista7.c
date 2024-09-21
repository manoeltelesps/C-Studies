#include <stdio.h>
#include "funcoes.h"


int main (){

/*

    //Questao 1
    printf("\n\nProgama Positivo ou Negativo: ");

    int num_posi_ou_nega;

    printf("\n\nDigite um numero: ");
    scanf("%d", &num_posi_ou_nega);

    printf("\n%d",posouneg(num_posi_ou_nega));




	//Questao 2
	printf("\n\nProgama Somatorial: ");
	
	int num1, num2;
	
	printf("\n\nDigite dois numeros, separando-os por espacos: ");
	scanf("%d %d", &num1, &num2);
	
	printf("\nO	somatorial deles e igual a %d", somatorial(num1,num2));
	
	
*/
    //Questao 3
    printf("\n\nProgama de Soma e Divisao");
    
    int nume1, nume2, nume3;
    
    printf("\n\nDigite tres numeros, separando-os por espaco: ");
    scanf("%d %d %d", &nume1, &nume2, &nume3);
    
    printf("O somatorial de %d e %d dos numeros divisiveis por %d e igual a %d",	nume2, 	nume3, 	nume1, 	somatorial_divisao(nume1,nume2,nume3));
    
    
    
    

    return 0;

}

