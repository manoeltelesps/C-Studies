#include <stdio.h>


int main(){


    //1
    printf("\n\nProgama Tabuada: \n");

    int numero_tabuada;

    printf("\nDigite um numero entre: ");
    scanf("%d", &numero_tabuada);

    printf("\n");
    for(int i=1; i <= 10; i++){

        int aux = numero_tabuada*i;
        printf("%d * %d = %d\n", numero_tabuada, i, aux);
    }



    //2
    

    return 0;
}






    
