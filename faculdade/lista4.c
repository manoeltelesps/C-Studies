#include <stdio.h>
#include <math.h>

int main(){


    //Questao 1
    printf("\n\nPrograma de Aumento de Salario: \n");
    
    int ano, anoat;
    float salariof, aumento;

    salariof = 1000.00;
    aumento = 0.015;
    ano = 2005;

    printf("\nDigite o ano atual: ");
    scanf("%d", &anoat);

    while (ano < anoat)
    {
        salariof += salariof*aumento;
        aumento *= 2;
        ano++;
    }

    printf("\nO salario atual desse funcionario desse funcionario e de %.2f reais", salariof);

    
    
    //Questao 2
    printf("\n\nPrograma Maluquinho: \n");

     float numero = 0, soma = 0, media = 0, med_par = 0, por_impar = 0, maior = -999999, menor = 999999;
    int quantidade = 0, contador_par = 0, contador_impar = 0;

    printf("\nConsidere '30000' como o encerramento do progama, ou seja, digite-o para obter as respotas:\n\n");
    

    do {
        printf("Digite o %d numero: ", quantidade + 1);
        scanf("%f", &numero);

        if (numero == 30000) break;

        soma += numero;
        quantidade++;

        
        maior = (numero > maior) ? maior = numero : maior;
        menor = (numero < menor) ? menor = numero : menor;

        
        if ((int)numero % 2 == 0) 
        {
            med_par += numero;
            contador_par++;
        } 
        else 
        {
            contador_impar++;
        }

    } while (numero != 30000);

    
    if (quantidade > 0) 
    {
        media = soma / quantidade;
    }

    
    if (contador_par > 0) 
    {
        med_par = med_par / contador_par;
    } 
    else 
    {
        med_par = 0.00;
    }

    
    if (quantidade > 0)
    {
        por_impar = ((float)contador_impar / quantidade) * 100.00;
    }

    printf("\n\n\t a) A soma dos numeros digitados e igual a %.2f", soma);
    printf("\n\t b) A quantidade de numeros digitados e igual a %d", quantidade-1);
    printf("\n\t c) A media dos numeros digitados e igual a %.2f", media);
    printf("\n\t d) O maior numero digitado e %.2f", maior);
    printf("\n\t e) O menor numero digitado e %.2f", menor);
    printf("\n\t f) A media dos numeros pares e igual a %.2f", med_par);
    printf("\n\t g) Dos numeros digitados %.2f %% sao impares", por_impar);




    //Questao 3
    printf("\n\nPrograma Fatorial: \n");

    int num1, fatorial, aux;

    
    printf("\nDigite um numero: ");
    scanf("%d", &num1);
    
    aux = num1;

    if(num1 == 0){

        fatorial = 1;
        printf("\n%d! e igual a %d", aux, fatorial);
    }
    else if (num1 < 0){

        printf("\nNumero invalido, digite um maior que 0.");
    }
    else {

        for(fatorial = 1; num1 > 1; num1 = num1 -1){

            fatorial *= num1;
        }
        printf("\n%d! e igual a %d", aux, fatorial);
    }
    



    //Questao 4
    printf("\n\nPrograma Quadrado: \n");

    int tamanho, i,j;

    printf("\nDigite o tamanho do lado de um quadrado, entre 1 e 20: ");
    scanf("%d", &tamanho);


    if( tamanho < 1 || tamanho > 20){

        printf("\n\n\tTamanho do lado digitado invalido");
    }
    else{
    
        printf("\n");

        for(i = 0; i < tamanho; i++){

            printf("*");
        }

        for(i = 0; i < tamanho-2; i++){
            printf("\n");
            for(j = 0; j < tamanho; j++){

                if(j == 0){
                    printf("*");
                }
                else if(j == tamanho-1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        } 
        printf("\n");
        for(i = 0; i < tamanho; i++){

            printf("*");
        }
    }
       




    //Questao 5
    printf("\n\nPrograma Encontrar menor numero: \n");

    int numero_digitados, menor_digitado = 99999999, qtd_digitados, i = 0;

    printf("\nQuantos numeros serao inseridos? "),
    scanf("%d", &qtd_digitados);

    printf("\n");

    while (i < qtd_digitados) {
        
        printf("Digite o numero (%d/%d): ", i, qtd_digitados);
        scanf("%d", &numero_digitados); 
        i++;

        menor_digitado = (menor_digitado > numero_digitados) ? menor_digitado = numero_digitados : menor_digitado;
    }

    printf("\n\nO menor numero entre eles e %d", menor_digitado);
    




    //Questao 6
    printf("\n\nProduto Impares 1 a 15: \n\n");

    int num_impar, fat=1;

    for(num_impar = 0; num_impar < 16; num_impar++){

        if(num_impar % 2 != 0){
            fat *= num_impar; // FATORIAL
        }

    }
    printf("Fatorial de 15 com impares e igual a %d", fat);




    //Questao 7
    printf("\n\nPrograma Grafico de Barras: \n");

    int n1, n2, n3, n4, n5, barrinha;

    printf("\nInforme o tamanho da primeira barra (1 a 30): ");
    scanf("%d", &n1);

    printf("Informe o tamanho da segunda barra (1 a 30): ");
    scanf("%d", &n2);

    printf("Informe o tamanho da terceira barra (1 a 30): ");
    scanf("%d", &n3);

    printf("Informe o tamanho da quarta barra (1 a 30): ");
    scanf("%d", &n4);

    printf("Informe o tamanho da quinta barra (1 a 30): ");
    scanf("%d", &n5);

    printf("\n\n|");
    for (barrinha = 0; barrinha < n1; barrinha++){
        
        printf("*");
    }
    printf("\n|");
    for (barrinha = 0; barrinha < n2; barrinha++){
        
        printf("*");
    }
    printf("\n|");
    for (barrinha = 0; barrinha < n3; barrinha++){
        
        printf("*");
    }
    printf("\n|");
    for (barrinha = 0; barrinha < n4; barrinha++){
        
        printf("*");
    }
    printf("\n|");
    for (barrinha = 0; barrinha < n5; barrinha++){
        
        printf("*");
    }
    printf("\n");


    

    //Questao 8
    printf("\n\nPrograma Deposito: \n");

    float p = 1000.00, r = 0.05, a;
    int ano;

    printf("\n\n");
    for(ano = 1; ano <= 10; ano++){

        a = p*(pow((1.0+r),ano));

        printf("No ano %d, a quantida deposita e igual a %.2f\n", ano, a);
    }
    


    //Questao 9
    printf("\n\nPrograma Quadrado Numeros: \n");

    int acabaplmds, quadr_nume = 0, impar = 1;

    printf("\nDigite um numero: ");
    scanf("%d", &acabaplmds);

    
    for(int i = 0; i < acabaplmds; i++) {
        quadr_nume += impar; 
        impar += 2;        
    }

    printf("\nO quadrado de %d usando a soma de impares e igual a %d\n", acabaplmds, quadr_nume);



    return 0;

}