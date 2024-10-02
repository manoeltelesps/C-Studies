#include <stdio.h>

int teste(int x){

    x = 50;

    return x;

}


int main (){

    int valor = 10;

    int proxima = teste(valor);

    printf("%d\n", valor);
    printf("%d\n", proxima);

    return 0;
}


