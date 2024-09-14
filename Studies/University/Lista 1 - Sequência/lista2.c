#include <stdio.h>
#include <math.h>

int main() {

	//Questao 1
	printf("\n\nProgama Personalidade Data de Nascimento\n\n");

	int dia, mes, ano, diames, num, perfil;
	
	printf("\n \nDigite uma data de nascimento, seguindo esse modelo 'dia/mes/ano':  ");
	scanf("%d/%d/%d", &dia,&mes, &ano);

	diames = dia*100 + mes;
	
	num = diames + ano; // Ex: 1306 + 1970
	
	perfil = ((num%100) + (num/100))%5; // Primeiro parenteses divide os numeros e outro faz pega o resto da divisão por 5
	
    if(perfil == 0){
    	
    	printf("\nO perfil da pessoa e timdo.");
	}
	else if(perfil == 1)
		
		printf("\nO perfil da pessoa e sonhador");
	
    else if(perfil == 2){
	
		printf("\nO perfil da pessoa e paquerador");
	}
	else if(perfil == 3){
		
		printf("\nO perfil da pessoa e atraente");
	}
	else if(perfil == 4){
	
		
		printf("\nO perfil da pessoa e irreristivel");
	}
	
	
	
	
	//Questao 2
	printf("\n \n \n \nProgama Calcular Media Aluno e Mostre o Conceito: \n \n \n");
	
	float nt1,nt2,nt3,p1,p2,p3,medp;

	p1 = 2;
	p2 = 3;
	p3 = 5;
	
    printf("\nEscreva a nota recebida no Trabalho de Laboratorio: ");
    scanf("%f", &nt1);


    printf("Escreva a nota recebida na Avaliacao Semestral: ");
    scanf("%f", &nt2);


    printf("Escreva a nota recebida no Exame Final: ");
    scanf("%f", &nt3);


    medp = ((nt1*p1)+(nt2*p2)+(nt3*p3))/(p1+p2+p3);
    
    if(medp>= 8 && medp<= 10){
    	
    	printf("\n O conceito desse aluno e A.");
	}
	else if(medp>= 7 && medp<= 7.99){
	
		printf("\nO conceito desse aluno e B.");
	}
    if(medp>= 6 && medp<= 6.99){
		
    	printf("\nO conceito desse aluno e C.");
	}
	else if(medp>= 5 && medp<= 5.99){
	
		printf("\nO conceito desse aluno e D.");
	}
	if(medp>= 0 && medp<= 4.99){
	
		printf("\nO conceito desse aluno e E");
    }
    
    
    
    
    //Questao 3
    printf("\n \n \n \nProgama Aprovacao por Media Aritmetica: \n \n \n");
    
    float n1,n2,n3, meda;
    
    printf("\nDigite 3 notas de um aluno, separadas por espacos: ");
    scanf("%f %f %f", &n1,&n2,&n3);
    
    meda = (n1 + n2+ n3)/3;
    
    if(meda>=0 && meda<= 2.99){
    	
    	printf("\nREPROVADO");
	}
	else if(meda>=3 && meda<=6.99){
		
		printf("\nEXAME");
	}
	if(meda>=7 && meda<=10){
		
		printf("\nAPROVADO");
	}
	
	
	
	
	//Questao 4
	printf("\n \n \n \nProgama Qual o Maior Numero: \n \n \n");
	
	int num1, num2;
	
	printf("\nDigite dois numeros, separdos por espacos: ");
    scanf("%d %d", &num1,&num2);
    
    if (num2>num1){
    	
    	printf("\nO maior numero e %d", num2);
	}
	else{
		
		printf("\nO maior numero e %d", num1);
	}
    
    
    
    
    //Questao 5
    printf("\n \n \n \nProgama Numeros Decrescente: \n \n \n");

    int numdesord1, numdesord2, numdesord3, temp; // Numero Descrescente Ordem - Variavel

    printf("\nDigite tres numeros, separados por espacos: ");
    scanf("%d %d %d", &numdesord1, &numdesord2, &numdesord3);

    if (numdesord1 <numdesord2) { // Conferir se 1º número é menor que o 2º número, caso contrario eles trocam de lugar.
       
        temp = numdesord1;
        numdesord1 = numdesord2;
        numdesord2 = temp;
    }
    if (numdesord1 < numdesord3) { // Conferir se 1º número é menor que o 3º número, caso contrario eles trocam de lugar.
        
        temp = numdesord1;
        numdesord1 = numdesord3;
        numdesord3 = temp;
    }
    if (numdesord2 < numdesord3) { // Conferir o 2º e 3º número o que pode torna-los, primeiros ou segundos na ordem, dependendo da comparação com o 1º número. 
        
        temp = numdesord2;
        numdesord2 = numdesord3;
        numdesord3 = temp;
    }

    printf("\nA ordem decrescente desses numeros e: %d %d %d \n", numdesord1, numdesord2, numdesord3);




    //Questao 6
    printf("\n \n \n \nProgama 3 Numeros Ordenado e 1 Aleatorio Decrescente: \n \n \n");

    int numedesord1, numedesord2, numedesord3, numealeord4, auxi; // Numeros Decrescente Ordem 

    printf("\nDigite tres numero em ordem decrescente: ");
    scanf("%d %d %d", &numedesord1, &numedesord2, &numedesord3);

    printf("\nDigite um quarto numero, fora de ordem: ");
    scanf("%d", &numealeord4);

    if (numealeord4 > numedesord3) {
        
        auxi = numealeord4;
        numealeord4 = numedesord3;
        numedesord3 = auxi;
    }
    if (numedesord3 > numedesord2) {
       
        auxi = numedesord3;
        numedesord3 = numedesord2;
        numedesord2 = auxi;
    }
    if (numedesord2 > numedesord1) {
       
        auxi = numedesord2;
        numedesord2 = numedesord1;
        numedesord1 = auxi;
    }

    printf("\nA ordem decrescente desses numeros e: %d %d %d %d\n", numedesord1, numedesord2, numedesord3, numealeord4);




    //Questao 7
    printf("\n \n \n \nProgama Comparacao de Data: \n \n \n");

    int dia1, mes1, ano1, dia2, mes2, ano2;
    float data1, data2;

    printf("\nDigite uma data seguindo esse modelo 'DD/MM/AAAA': ");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1 );

    printf("Digite outra dara seguindo o mesmo modelo 'DD/MM/AAAA': ");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);
 
    data1 = (ano1*100) + (mes1/10) + (dia1/100); // Adicionei a multiplicação e a divisão para o Ano ser mais relevante, em seguida o Mês e o Dia.
    data2 = (ano2*100) + (mes2/10) + (dia2/100);

    if (data1 > data2){

        printf("\nO data cronologicamente maior das duas datas fornecidas e: %d/%d/%d", dia1, mes1, ano1);
    }
    else{

         printf("\nO data cronologicamente maior das duas fornecidas e: %d/%d/%d", dia2, mes2, ano2);
    }




    //Questao 8
    printf("\n \n \n \nProgama Reajuste de Precos: \n \n \n");

    float vendmensal, preco, novopreco;

    printf("\nDigite o valor medio de vendas de um determinado produto: ");
    scanf("%f", &vendmensal);

    printf("Digite o valor desse produto, em reais: ");
    scanf("%f", &preco);

    if(vendmensal<500 && preco<30) {
    
        novopreco = (preco * 0.10) + preco;
        printf("\nO novo preco do produto com o reajuste e de %.2f reais.\n", novopreco);
    } 
    else {
        if ((vendmensal>=500 && vendmensal<1200) && (preco>=30 && preco<80)){

            novopreco = (preco * 0.15) + preco;
            printf("\nO novo preco do produto com o reajuste e de %.2f reais.\n", novopreco);
        }
        else {

            if (vendmensal>=1200 && preco>=80){

                novopreco = preco - (preco * 0.20);
                printf("\nO novo preco do produto com o reajuste e de %.2f reais.\n", novopreco);
            }
            else {

                printf("\nA Venda Media Mensal ou o Preco Atual desse produto nao sofre alteracoes, nos criterios adotados pelo supermercado\n");        
            }
        }
    }
    



    //Questao 9
    printf("\n \n \n \nProgama Triangulos: \n \n \n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  

    float cat1, cat2, hipo, variatemp; // hipo = num1, cat1 = num2, cat2 = num3

    printf("\nDigite tres numeros, separados por espacos: ");
    scanf("%f %f %f", &hipo, &cat1, &cat2);

    if (hipo < cat1) {
       
        variatemp = hipo;
        hipo = cat1;
        cat1 = variatemp;
    }
    if (hipo < cat2) {
        
        variatemp = hipo;
        hipo = cat2;
        cat2 = variatemp;
    }
    if (cat1 < cat2) { 
        
        variatemp = cat1;
        cat1 = cat2;
        cat2 = variatemp;
    } // Ordem Decrescente Hipo, Cat1, Cat2
    if(hipo >= (cat1 + cat2)){

        printf("\nNao e possivel formar um triangulo com os valores informados");
    }
    else if (hipo == cat1 && cat1 == cat2){

        printf("\nO triangulo formado por esses valores e denominado como EQUILATERO ");
    }
    else if((cat1 == cat2 && cat1 != hipo) || (cat1 == hipo && hipo != cat2) || (cat2 == hipo && cat2 != cat1)){

        printf("\nO triangulo formado por esses valores e denominado como ISOCELES");
    }
    else {

        printf("\nO triangulo formado por esses valores e denominado como ESCALENO");
    } 



    printf("\n \n \nFim");


    return 0;

}

//by Manoel Pedro :P