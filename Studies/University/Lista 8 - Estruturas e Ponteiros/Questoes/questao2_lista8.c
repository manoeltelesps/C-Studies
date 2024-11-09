#include <stdio.h>


typedef struct{
    float real;
    float complexo;
}Complexo;


Complexo somaComplexo(Complexo n1, Complexo n2);


int main() {


    //Questão 2
    printf("\n\nProgama Numero Complexo: \n\n");

    Complexo n1, n2, result;

    n1.real = 4;
    n1.complexo = -1;

    n2.real = 8;
    n2.complexo = -2;

    result = somaComplexo(n1, n2);

    printf("(%.0f + %.0fi) + (%.0f + %.0fi) = %.0f + %.0fi", n1.real, 
    n1.complexo, n2.real, n2.complexo, result.real, result.complexo);


    return 0;
}

Complexo somaComplexo(Complexo n1, Complexo n2){

    Complexo resultado;

    resultado.real = n1.real + n2.real;
    resultado.complexo = n1.complexo + n2.complexo;

    return resultado;

}