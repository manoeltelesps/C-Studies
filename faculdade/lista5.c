#include <stdio.h>
#include <math.h>

int main (){

/*

    //Questao 1
    printf("\n\nProgama de Criptografia: \n");

    int inteiro, dig1, dig2, dig3, dig4;

    printf("\nDigite o numero que sera encriptado: ");
    scanf("%d", &inteiro);

    if(inteiro >= 10000){
        printf("\n\tNumero invalido, digite um numero com ate no maximo 4 algarismos.");
    }
    else{

        dig1 = inteiro/1000; // xyzd /1000 == x -> Resto yzd
        dig2 = (inteiro%1000)/100; // yzd / 100 == y -> Resto zd
        dig3 = ((inteiro%1000)%100)/10; // zd / 10 == z -> Resto d
        dig4 = (((inteiro%1000)%100)%10)/1; // d / 1 == d

        dig1 = (dig1+7)%10;
        dig2 = (dig2+7)%10;
        dig3 = (dig3+7)%10;
        dig4 = (dig4+7)%10; 

        printf("\n\tO seu numero criptografado e %d%d%d%d", dig3, dig4, dig1, dig2);
    }


    //Complemento Questão 1
    printf("\n\nDesincriptador: \n");

    int inteiro_criptografado, dig1_crip, dig2_crip, dig3_crip, dig4_crip;

    printf("\nDigite o numero encriptado, para retorna-lo ao original: ");
    scanf("%d", &inteiro_criptografado);

    if(inteiro_criptografado >= 10000){
        printf("\n\tNumero invalido, digite um numero com ate no maximo 4 algarismos.");
    }
    else{

        dig1_crip = inteiro_criptografado/1000; // xyzd /1000 == x -> Resto yzd
        dig2_crip = (inteiro_criptografado%1000)/100; // yzd / 100 == y -> Resto zd
        dig3_crip = ((inteiro_criptografado%1000)%100)/10; // zd / 10 == z -> Resto d
        dig4_crip = (((inteiro_criptografado%1000)%100)%10)/1; // d / 1 == d

        dig1_crip = (dig1_crip+3)%10;
        dig2_crip = (dig2_crip+3)%10;
        dig3_crip = (dig3_crip+3)%10;
        dig4_crip = (dig4_crip+3)%10;

        printf("\n\tO seu numero desencriptado e %d%d%d%d", dig3_crip, dig4_crip, dig1_crip, dig2_crip);
    }

*/


    //Questao 2
    printf("\n\nProgama Calcular Desvio de Padrão: \n");

    int n_tamanho = 0, variavel_x, aux = 0;
    float somatorio_do_xlinha = 0,desvio_padrao=0;

    printf("\nDigite o indice final 'n' (tamanho):  ");
    scanf("%d", &n_tamanho);

    for(int i=0; i < n_tamanho; i++){
       
        printf("\nDigite a varivel 'x' no indice %d: ", i);
        scanf("%d", &variavel_x);

        somatorio_do_xlinha += variavel_x;

        aux += variavel_x*(pow(10,n_tamanho-(i+1)));

       printf("\n%d", aux);
    } 

    somatorio_do_xlinha = somatorio_do_xlinha / n_tamanho;

    for(int j = 0; j < n_tamanho; j++){
        aux %= (int)pow(10,n_tamanho-j);
        printf("\n%d",aux); 
        desvio_padrao += ((float)aux)/pow(10,n_tamanho-(j+1)) - somatorio_do_xlinha;
    }

    desvio_padrao = sqrt(desvio_padrao/(n_tamanho-1));

    printf("\nMedia %f" ,somatorio_do_xlinha);
    printf("\nDesvio padrao %f", desvio_padrao);


















    /*//Questao 3
    printf("\n\nProgama Serie Infinita de PI: \n");

    int divisor=1;
    float resultado=0, j;


    for(j=1; resultado = 3.14159; j++){
        for(int i = 0; i < j; i++){

            if(i%2 == 0){

                resultado += 4 / divisor;
            }
            else{
                
                resultado -= 4 /divisor;
            }

            divisor += 2;
        } 
    }
    
    printf("\n\n");
    printf("%f", j);*/
    




















    //Questao 4
    //printf("\n\nProgama Soma de E: \n");

    //int num_n, soma_e;


















    return 0;
}