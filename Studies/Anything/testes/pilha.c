#include <stdio.h>
#include <stdlib.h>


int fatorial(int x){

    if(x == 1)
        return 1;

    else
        return x*(fatorial(x-1));
    
}


int main(){

    int numero, y;

    printf("\nDigite um numero maior que zero para fazer seu fatorial: ");
    scanf("%d", &numero);

    printf("\n");

    if(numero <= 0)
        printf("O numero tem que ser MAIOR zero(0)");
    else{     
        y = fatorial(numero);
        printf("%d", y);
    }

    return 0;

}