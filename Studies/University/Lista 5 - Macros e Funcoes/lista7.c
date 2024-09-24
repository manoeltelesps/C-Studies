#include <stdio.h>
#include "funcoes.h"


int main (){



    //Questao 1
    printf("\n\Funcao Positivo ou Negativo: ");

    int num_posi_ou_nega;

    printf("\n\nDigite um numero: ");
    scanf("%d", &num_posi_ou_nega);

    printf("\n%d",posouneg(num_posi_ou_nega));





	//Questao 2
	printf("\n\Funcao Somatorial: ");
	
	int num1, num2;
	
	printf("\n\nDigite dois numeros, separando-os por espacos: ");
	scanf("%d %d", &num1, &num2);
	
	printf("\nO	somatorial deles e igual a %d", somatorial(num1,num2));
	
	


    //Questao 3
    printf("\n\Funcao de Soma e Divisao: ");
    
    int nume1, nume2, nume3;
    
    printf("\n\nDigite tres numeros, separando-os por espaco: ");
    scanf("%d %d %d", &nume1, &nume2, &nume3);
    
    printf("\nO somatorial de %d e %d dos numeros divisiveis por %d e igual a %d",	nume2, 	nume3, 	nume1, 	somatorial_divisao(nume1,nume2,nume3));
    



    //Questao 4
    printf("\n\Funcao Conversor de Segundos: ");

    int valorem_segundos;

    printf("\n\nDigite o valor em segundos: ");
    scanf("%d", &valorem_segundos);
    
    printf("\n");
    conversor_seg(valorem_segundos);




    //Questao 5
    printf("\n\Funcao Acrescimo em Produto: ");

    float valor_antigo, valor_atual;

    printf("\n\nDigite o antigo valor do produto: ");
    scanf("%f", &valor_antigo);

    printf("Digite o atual valor do produto: ");
    scanf("%f", &valor_atual);

    printf("\nO acrescimo foi de %.2f", acrescimo(valor_antigo, valor_atual));




    //Questao 6
    printf("\n\Funcao Calculo de Media Aritmerica ou Ponderada: ");

    float n1, n2, n3;
    char opcao_media;

    printf("\n\nDigite tres notas, separando-as por espaco: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("\nA) Media Aritmerica \nP) Media Ponderada\n\nDigite o metodo de calculo: ");
    scanf(" %c", &opcao_media);


    printf("\n\nA media e igual a %.2f", media_arit_pond(n1, n2, n3, opcao_media));




    //Questao 7
    printf("\n\nFuncao Retangulo: ");

    int altura, largura;

    printf("\n\nDigite a altura e a largura de um retangulo, separando-as por espaco: ");
    scanf("%d %d", &altura, &largura);

    printf("\n");
    retangulo(altura,largura);





    //Questao 8
    printf("\n\nFuncao CPF: ");

    int cpf;

    printf("Digite o CPF sem pontos (exemplo: 123456789) sem o digito verificador: ");
    scanf("%d", &cpf);

    printf("%d-%d",cpf, ddcpf(cpf) );





    //Questao 9
    printf("\n\nHistograma: ");

    printf("\n\n");
    histograma();





    //Questao 10
    printf("\n\nCalculo de Area de um Circulo com Macro: ");

    float raio, area_circ;

    printf("\n\nDigite o raio qualquer, para descobrir a a area do circulo: ");
    scanf("%f", &raio);

    printf("\nA area do circulo e de aproximadamente %.4f", area_circ = PI * pow(raio,2));






    //Questao 11
    printf("\n\nCalculo Quadrado de um Numero com Macro: ");

    int numer_antesquad;

    printf("\n\nDigite um numero para descobrir seu quadrado: ");
    scanf("%d", &numer_antesquad);

    printf("\nO quadrado de %d e %d", numer_antesquad, QUAD(numer_antesquad));







    //Questao 12
    printf("\n\nFuncao Bissexto: ");

    int ano_bioun;

    printf("\n\nDigite um ano: ");
    scanf("%d", &ano_bioun);

    printf("\n1) Sim\n0) Nao\n\nO ano %d e bissexto? %d", ano_bioun, testano(ano_bioun));






    //Questao 13
    printf("\n\nMacro Multiplo: ");

    int num1_mult1, num2_mult2;

    printf("Digite dois numeros, separando-os por espaco: ");
    scanf("%d %d", &num1_mult1, &num2_mult2);

    printf("\n1) Sim\n0) Nao\n\nO numero %d e multiplo do numero %d? %d", num1_mult1, num2_mult2, MULTIPLO(num1_mult1,num2_mult2));





    //Questao 14
    printf("\n\nMacro Vogal: ");

    char letra;

    printf("\n\nDigite um caracter: ");
    scanf(" %c", &letra);

    printf("\n1) Sim\n0) Nao\n\nO caracter '%c' e uma vogal? %d", letra, IS_VOGAL(letra));





    //Questao 15
    printf("\n\nMacro Valor Absoluto: ");

    int num_valorabs;

    printf("\n\nDigite um numero: ");
    scanf("%d", &num_valorabs);

    printf("\nO valor absoluto de %d e igual a %d", num_valorabs, ABS(num_valorabs));



    return 0;




}

