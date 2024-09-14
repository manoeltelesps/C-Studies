#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main(){



    //Questao 1
    printf("\n\nProgama Vetor ao Quadrado: \n\n");

    int i;
    int vetor1 [10], vetor2[10];

    for (i = 0; i < 10; i++){

        printf("Digite um valor (%d/10): ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\n \n");
    printf("Vetor: ");
    for(i = 0; i < 10; i++){

        printf("%3d ", vetor1[i]);
    }

    printf("\n");

    printf("Vetor Quadrado: ");
    for (i = 0; i < 10; i++){

        vetor2[i] = vetor1[i]*vetor1[i];

        printf("%3d ", vetor2[i]);
    }





    //Questao 2
    printf("\n\nProgama Soma Vetores: \n\n");

    int i;
    int vetor1[25], vetor2[25], somarvetores[25];

    for (i=0; i < 25; i++){

        printf("Digite um valor (%d/25): ", i);
        scanf("%d", &vetor1[i]);

    }

    printf("\n");

    for (i=0; i < 25; i++){

        printf("Digite outro valor (%d/25): ", i);
        scanf("%d", &vetor2[i]);
    }

    printf("\n\nPrimeiro Vetor");
    for(i = 0; i < 25; i++){

        printf("%3d ", vetor1[i]);
    }

    printf("\n\nSegundo Vetor");
    for(i = 0; i < 25; i++){

        printf("%3d ", vetor1[i]);
    }

    printf("\n\nSoma dos Vetores: ");
    for (i=0; i <= 25; i++){

        somarvetores[i] = vetor1[i] + vetor2[i];
        printf("%3d ", somarvetores[i]);
    }

    // MEU CODIGO EM RIBA O POFESSOR GEROU COM NUMERO ALEATORIOS USANDO O TIME.H

    //Questao 3
    printf("\n\nTroca Locais nos Vetores: \n");

    int a, fim = 19, copia, vetor[20];

    for(a = 0; a < 20; a++){
        printf("Digite %d: ", a);
        scanf("%d", &vetor[a]);
    }

    printf("\nVetor Original: ");
    for(a =0; a <20; a++){

        printf("%2d ", vetor[a]);
    }

    for(a = 0; a < 10; a++){

        copia = vetor[a];
        vetor[a] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }

    printf("\nVetor Trocado: ");
    for(a =0; a <20; a++){

        printf("%2d ", vetor[a]);
    }



    //Questao 4
    printf("\n\nCalcular Vendas Lojas: \n");

    float valorobjetos[10];
    int quantobjetos [10];
    float valorttl [10];
    float somarvalorobj; 
    int i;
    float comissao;


    for(i = 1; i <= 10; i++){
        printf("Digite a quantidade e o valor unitario do objeto %d de hoje, separados por espaco: ", i);
        scanf("%d %f", &quantobjetos[i], &valorobjetos[i]); //to orgulhoso de mim :)
    }
    
    printf("\n\n");

    for(i = 1; i <= 10; i++){
        valorttl[i] = valorobjetos[i]*quantobjetos[i];
        somarvalorobj += valorttl[i];
        printf("O objeto %d foi vendido %d unidades a %.2f cada, gerando um total de %.2f.\n", i, quantobjetos[i], valorobjetos[i], valorttl[i]);      
    } //Orgulhoso 2.0 :D

    comissao = somarvalorobj*(5.0/100.0);
    printf("\n\nNo total foram feitas %.2f reais nas vendas de todos os objetos, o que gera uma comissao de %.2f para o funcionario, resultando em um salario de %.2f para o mesmo", somarvalorobj, comissao, 1000+comissao);







    return 0;

}