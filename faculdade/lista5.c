#include <stdio.h>
#include <math.h>

int main (){



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




    //Questao 2
    printf("\n\nProgama Calcular Desvio de Padrao: \n");

    int n_tamanho = 0, variavel_x, aux = 0;
    float somatorio_do_xlinha = 0,desvio_padrao=0, somatorio_normal=0;

    printf("\nDigite o indice final 'n' (tamanho): ");
    scanf("%d", &n_tamanho);

    printf("\n");

    for(int i=0; i < n_tamanho; i++){
       
        printf("Digite um algarismo, para a varivel 'x' no indice %d: ", i);
        scanf("%d", &variavel_x);

        while (variavel_x >= 10)
        {
            printf("\n\tDigite um numero valido no indice %d (0 a 9): ", i);
            scanf("%d", &variavel_x);
            printf("\n");
        }
        somatorio_do_xlinha += variavel_x;

        aux += variavel_x*(pow(10,n_tamanho-(i+1)));
    } 

    somatorio_do_xlinha = somatorio_do_xlinha / n_tamanho;

    for(int j = 0; j < n_tamanho; j++){
        
        aux %= (int)pow(10,n_tamanho-j);
        somatorio_normal += pow(aux / (int)pow(10, n_tamanho - (j + 1)) - somatorio_do_xlinha, 2);
    }

    desvio_padrao = sqrt(somatorio_normal/(n_tamanho-1));

    printf("\nDesvio padrao %f", desvio_padrao);






    //Questao 3
    printf("\n\nProgama Termos de PI: \n");

    int vezes, debaixo, i=0;
    float x;

    printf("\n\nDigite as vezes que o programa vai rodar: ");
    scanf("%d", &vezes);


    for(debaixo=1; debaixo<vezes; debaixo+=2){

        x+= pow(-1, i)*(4.0/debaixo);

        i++;
    }

        
    printf("\n\t%.5f", x);



    //+ou- 188000 vezes
    


    //Questao 4
    printf("\n\nProgama Soma de E: \n");

    int vezes, i, j;
    float soma = 1.0;

    printf("\nDigite as vezes que o programa vai rodar: ");
    scanf("%d", &vezes);

    for(i = 1; i <= vezes; i++){
        int fatorial = 1.0;

        for(j = 1; j <= i; j++){
            fatorial = j;
        }

        soma += 1.0/fatorial;
    }

    printf("\n\tO valor da soma e igual a %.4f", soma);







    //Questao 5
    printf("\n\nProgama Cos(x) Pela Serie de Taylor: \n");

    int aux = 2, n = 10;
    double cosx = 1.0, x;

    printf("\nDigite x: ");
    scanf("%lf", &x);

    for(int i = 1; i <= n; i++){
        int divisor = 1; 


        for(int j = 1; j <= aux; j++){
            divisor *= j;
        }

        int sign = (i % 2 == 0) ? 1 : -1;

        cosx += (sign * pow(x, aux)) / divisor;

        aux += 2;
    }

    printf("\n\tValor aproximado de cos(%.1lf) = %.4lf\n", x, cosx);




    //Questao 6
    printf("\n\nCalculo de Raiz Babilonico (Metodo de Heron): \n");

    int valor_n;
    float k = 1;

    printf("\nInsira o valor para ser calculado pelo Metodo de Heron: ");
    scanf("%d", &valor_n);

    float raiz_quad = sqrt(valor_n);

    printf("\n\tA raiz de %d e igual %.4f\n\n", valor_n, raiz_quad);

    for(int i =1; i < 13; i++){

        k = (k+(valor_n/k))/2;

        printf("No processo %d a raiz seguindo o metodo de heron e igual a %.4f \n", i, k );
    }




    //Questao 7
    printf("\n\nProgama Fibonacci: \n");

    int n, i;
    int a=1, b=1, proximo;

    printf("\nDigite o valor de n, considerando que (n >= 3): ");
    scanf("%d", &n);

    if (n == 1 || n == 2)
        printf("\nO termo (%d) inserido se refere ao: 1\n", n);

    else{
        for (i = 3; i <= n; i++){
            proximo = a+b;
            a = b;
            b = proximo;
        }
    }

        printf("\nO termo (%d) inserido, na serie de Fibonacci se refere a: %d", n, b);




    //Questao 8
    printf("\n\nDetector de Numero Primo: \n");

    int numero, primo = 1;

    printf("\nDigite seu numero: ");
    scanf("%d", &numero);

    for(int i = 2; i <= sqrt(numero); i++){
        if(numero % i == 0){
            primo = 0;
            break;
        }
    }

    if (primo){
        printf("\n\tO numero digitado e primo");
    }
    else{
        printf("\n\tO numero digitado nao e primo");
    }




    return 0;
}