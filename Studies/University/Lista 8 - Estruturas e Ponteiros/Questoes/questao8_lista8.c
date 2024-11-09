#include <stdio.h>
#include <math.h>

float opeAdicao(float x, float y){ return x + y; }
float opeSubtracao(float x, float y){ return x - y; }
float opeMultipli(float x, float y){  return x * y; }
float opeDivisao(float x, float y){ return (y != 0) ? x / y : 0; }

int main() {

    //Questão 8
    printf("\n\nCalculdadora: \n\n");

    float x, y;
    int ope;

    float (*funcoes[])(float,float) = {opeAdicao, opeSubtracao, opeMultipli, opeDivisao};

    printf("\n\t0 - Adicao\n\t1 - Subtracao\n\t2 - Multiplicao\n\t3 - Divisao \n\nEscolha sua operacao: ");
    scanf("%d", &ope);

    if (ope < 0 || ope > 3)
        printf("\nOpcao Invalida!");
        
    else{
        printf("\nDigite dois numeros: ");
        scanf("%f %f", &x, &y);

        printf("\nResultado: %.2f", funcoes[ope](x,y) );
    }
    

   
}
