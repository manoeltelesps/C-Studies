#include <stdio.h>
#include <string.h>
#include "funcoes.h"


int main(){


    //Questão 1

    int w[] = {17,0,9,0,47,9,56,78,0};
              




    //Questao 2
    printf("\n\nProgama Inverter Numeros\n\n\n");

    int vetor[5];
	
    for(int i = 0; i<5; i++){

        printf("Escreva o numero na posicao (%d/6): ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\n\nVetor Ordenado: ");
    for(int i = 0; i<5; i++){

        printf("%d ", vetor[i]);
    }

	printf("\nVetor Invertido: ");
    for(int i = 4; i>=0; i--){

        printf("%d ", vetor[i]);
    }





	//Questao 3
	printf("\n\nSeparador Monetario\n\n");
	
	int money;
	
	printf("\nDigite um valor: ");
	scanf("%d", &money);
	
	int cedula100, cedula50, cedula10, cedula5, cedula1;
	
	cedula100 = money/100;
	cedula50 = (money%100)/50;
	cedula10 = ((money%100)%50)/10;
	cedula5 = (((money%100)%50)%10)/5;
	cedula1 = ((((money%100)%50)%10)%5)/1;
	
	if(cedula100 > 0)
		printf("\nO valor R$ %d, possui %d cedulas de 100.", money, cedula100);
		
	if(cedula50 > 0)
		printf("\nO valor R$ %d, possui %d cedulas de 50.", money, cedula50);
		
	if(cedula10 > 0)
		printf("\nO valor R$ %d, possui %d cedulas de 10.", money, cedula10);
		
	if(cedula5 > 0)
		printf("\nO valor R$ %d, possui %d cedulas de 5.", money, cedula5);
		
	if(cedula1 > 0)
		printf("\nO valor R$ %d, possui %d cedulas de 1.", money, cedula1);
		




	//Questao 4
	printf("\n\nProgama Maior e Menor\n\n");
	
	int n;

	printf("Digite o tamanho do seu array: ");
	scanf("%d", &n);

	putchar('\n');

	float v[n];

    for(int i = 0; i < n; i++){
		printf("Digite o numero na posicao (%d/%d): ", i, n);
		scanf("%f", &v[i]);
	}
	
	float b = 5, a;

	minimax(v,n,&a,&b);

	printf("\n\tMaior valor do vetor eh %.4f e o menor eh %.4f\n\n", a, b);
	
		
	


	//Questao 5
	printf("\n\nProgama Prenchimento do Vetor\n\n");

	int tamanho;

	printf("Digite o tamanho do seu vetor: ");
	scanf("%d", &tamanho);

	int array[tamanho];

	carrega(array,tamanho);

	printf("\nVetor prenchido: \n");
	for(int i = 0; i < tamanho; i++){
		printf("%d ", array[i]);
	}




	//Questao 6
	printf("\n\nProgama Puts\n\n");

	char frase[] = "Oi, Chat!";
	char frase2[] = "Hello World!";

    novoputs(frase);
	novoputs(frase2);





	//Questao 7
	printf("\n\nProgama Strcpy\n\n");

    char molde[] = "Samira";
    char copia[10];

    printf("Antes da Funcao: \n\n");
    printf("Molde: %s\n", molde);
    printf("Copia: %s\n", copia);

    novostrcpy(copia, molde);

    printf("\n\nDepois da Funcao: \n\n");
    printf("Molde: %s\n", molde);
    printf("Copia: %s\n", copia);



	//Questao 8
	printf("\n\nProgama Strlen\n\n");

	char phrase[] = {"Laura de Araujo"};

    printf("Numero de caracteres: %d\n", novostrlen(phrase));





	//Questao 9
	printf("\n\nProgama Strcat\n\n");

	char no[] = {"Man"};
	char me[] = {"oel"};
	
	int x = strlen(me);

	novostrcat(no, me, x);

	printf("%s", no);




	//Questao 10
	printf("\n\nProgama Strpos\n\n");	

	char texto [] = {"Maria Viana"};
	char letra;

	printf("Digite o caracter que deseja encontrar: ");
	scanf("%c", &letra);

	printf("%d", novostrpos(texto, letra));




	//Questao 11
	printf("\n\nProgama Strdel\n\n");

	char texto [] = {"Vaasco"};

	int pos;

	printf("Digite a posicao para remover o caracter: ");
	scanf("%d", &pos);

	novostrdel(texto,pos);

	printf("\n%s", texto);




	//Questao 12
	printf("\n\nProgama Strdel\n\n");

    int n = 3;
    int mat[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

	printf("Elementos da Diagonal Principal\n\n");

	for(int i = 0; i < n; i++) {
    	printf("%d ", mat[i][i]);
	}




	//Questão 14
	printf("\n\nProgama Campo Minado\n\n");

	int k = 0;

	int x, y;

	char campo[5][5] = { {254, '@', 254, 254, 254}, {254, 254, 254, '@', 254},  {254, 254, '@', 254, 254}, {254, '@', 254, 254, 254},  {254, 254, 254, '@', 254}};

	printf("Digite (0,0), para encerrar o jogo: \n\n");

	while(k==0){

		imprimircampo(campo);
		
		printf("\nDigite a sua jogada (x,y): ");
		scanf("%d,%d", &x, &y);

		if(x == 0 && y == 0){
			
			printf("\n\tJogo Finalizado :(");
			break;
		}

		if (x < 1 || x > 5 || y < 1 || y > 5) {
            
			printf("\n\tPosicao invalida! Tente novamente.\n\n");
            continue;
        }

		if(campo[x-1][y-1] == '@'){
			
			printf("\n\tAcertou uma BOMBA!, jogo encerrado :(");
			break;
		}
		else{
			campo[x-1][y-1] = 'X';
			continue;
		}

		k++;

	}



return 0;

}