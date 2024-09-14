#include <stdio.h>
#include <math.h>

int main()
{


    printf("QuestÃ£o 1:\n");
    printf("Progama da MÃ©dia Ponderada\n");

    float nt1,nt2,nt3,p1,p2,p3,medp;

    printf("\nEscreva uma nota e seu respectivo peso, separando-os por espaÃ§o: ");
    scanf("%f %f", &nt1, &p1);


    printf("Escreva mais uma nota e seu respectivo peso, separando-os por espaÃ§o: ");
    scanf("%f %f", &nt2, &p2);


    printf("Escreva outra nota e seu respectivo peso, separando-os por espaÃ§o: ");
    scanf("%f %f", &nt3, &p3);


    medp = ((nt1*p1)+(nt2*p2)+(nt3*p3))/(p1+p2+p3);

    printf("A mÃ‰dia ponderada dessas notas Ã‰: %.2f \n \n \n", medp);




    printf("QuestÃ£o 2:\n");
    printf("Progama da DistÃ¢ncia Dois Pontos\n");

    float x1,x2,y1,y2,dist;

    printf("\nDÃª um valor de um determinado ponto em um plano (x;y), separando-os por espaÃ§o: ");
    scanf("%f %f", &x1,&y1);

    printf("DÃª mais um valor de um determinado ponto em um plano (x;y), separando-os por espaÃ§o: ");
    scanf("%f %f", &x2,&y2);

    dist = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));

    printf("A distancia entre os dois pontos Ã‰: %.2f \n \n \n", dist);




    printf("QuestÃ£o 3:\n");
	printf("Programa de Aumento de SalÃ¡rio\n");
	
	float sal, aumen, novo_sal;
	
	printf("\nDigite o seu salÃ¡rio: ");
	scanf("%f",&sal);

    printf("Digite o aumento em %%: ");
    scanf("%f",&aumen);
	
	aumen = (aumen/100)*sal;
	novo_sal = sal+aumen;
	
	printf("O seu aumento foi de %.2f, logo o seu novo salÃ¡rio Ã©: %.2f \n \n \n",aumen, novo_sal);





    printf("QuestÃ£o 4:\n");
    printf("Progama Rendimento DepÃ³sito: \n");

    float deposito, taxa, tempo, juros,mont;

    printf("\nDigite o valor de um depÃ³sito bancÃ¡rio: ");
    scanf("%f", &deposito);

    printf("Digite o valor da taxa de juros em %%: ");
    scanf("%f", &taxa);

    printf("Digite o tempo do rendimento em meses: ");
    scanf("%f", &tempo);

    juros = deposito*taxa/100*tempo;

    printf("\nO depÃ³sito de %.2f com rendimento simples durante %.0f meses gerou: %.2f, o que torna o valor final de: %.2f \n", 
    deposito, tempo, juros, deposito+juros);

    mont = deposito*pow((1+taxa/100),tempo);

    printf("O depÃ³sito de %.2f com rendimento composto durante %.0f meses gerou: %.2f, o que torna o valor final de: %.2f \n \n \n",
    deposito, tempo, mont-deposito, mont);





    printf("QuestÃ£o 5:\n");
	printf("Programa de OperaÃ§Ãµes de PotÃªncia\n");
	
	unsigned int n, quadrado, cubo;
	float raizq, raizc;
	
	printf("\nDigite um nÃºmero: ");
	scanf("%d",&n);
	
	quadrado = n*n;
	cubo = n*n*n;
	raizq = sqrt(n);
	raizc = cbrt(n);
	
	printf("\nO numero %.0d elevado ao quadrado Ã© %.1d \nAo cubo Ã© %.1d \nSua raiz quadrada Ã© %.2f \nSua raiz cubica Ã© %.2f.\n \n \n",n,quadrado,cubo,raizq,raizc);





    printf("QuestÃ£o 6:\n");
	printf("Programa Saco de RaÃ§Ã£o Gatos\n");
	
	int consumo_gatos, saco_racao, cinco_dias, restante;
	
	printf("\nDigite uma quantidade de raÃ§Ã£o que dois gatos consumiram em gramas (g) em um dia: ");
	scanf("%d",&consumo_gatos);

    printf("Agora digite o peso no saco de um raÃ§Ã£o em quilogramas (kg): ");
    scanf("%d", &saco_racao);
	
	saco_racao = saco_racao*1000;
	cinco_dias = consumo_gatos*2*5;
	restante = saco_racao - cinco_dias;
	
	printf("\nApÃ³s cinco dias a quantidade restante no saco de raÃ§Ã£o em gramas (g) Ã© de: %.2d\n \n \n", restante);





    printf("QuestÃ£o 7:\n");
    printf("Aplicativo de SeparaÃ§Ã£o de Dezenas de Milhares\n");

    int num, unidade, dezena, centena, milhar, dezmilhar;

    printf("Digite apenas cinco nÃºmeros juntos: ");
    scanf("%d",&num);

    dezmilhar = num/10000;
    milhar = (num-(dezmilhar*10000))/1000; 
    centena = (num-(dezmilhar*10000+milhar*1000))/100;
    dezena = (num-(dezmilhar*10000+milhar*1000+centena*100))/10;
    unidade = (num-(dezmilhar*10000+milhar*1000+centena*100+dezena*10));

    printf("%d %d %d %d %d\n \n \n", dezmilhar, milhar, centena, dezena, unidade);  





    printf("QuestÃ£o 8:\n");
    printf("Progama de Conversor de Segundos\n");

    int seg, dias, hora, min, seg2;

    printf("\nDigite uma quantidade de segundos: ");
    scanf("%d",&seg);

    dias = seg/86400;
    hora = (seg%86400)/3600;
    min = ((seg%86400)%3600)/60;
    seg2 = ((seg%86400)%3600)%60;

    printf("Esses segundos sao iguais a %d dia(s), %d hora(s), %d minuto(s) e %d segundo(s) \n \n \n", dias, hora, min, seg2);


    printf("Fim!");


    return 0;
}