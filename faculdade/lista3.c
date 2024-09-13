#include <stdio.h>
#include <math.h>

int main (){

    //Questao 1
    printf("\n\nProgama Ordem Numeros: \n");

    int i, temp;
    float a, b, c;

    printf("\nEscreva um numero inteiro, que seja (1, 2 ou 3): ");
    scanf("%d", &i);

    printf("\nEscreva tres numeros reais, separados por espacos: ");
    scanf("%f %f %f", &a, &b, &c );

    if (a < b) { // Conferir se 1º número é menor que o 2º número, caso contrario eles trocam de lugar.
       
            temp = a;
            a = b;
            b = temp;
    }
    if (a < c) { // Conferir se 1º número é menor que o 3º número, caso contrario eles trocam de lugar.
        
            temp = a;
            a = c;
            c = temp;
    }
    if (b < c) { // Conferir o 2º e 3º número o que pode torna-los, primeiros ou segundos na ordem, dependendo da comparação com o 1º número. 
        
            temp = b;
            b = c;
            c = temp;
    }

    switch (i){
    case 1:
        
        printf("\nA ordem crescente desses numeros e: %.2f %.2f %.2f \n", c, b, a);
        break;

    case 2:

        printf("\nA ordem decrescente desses numeros e: %.2f %.2f %.2f \n", a, b, c);
        break;

    case 3:

        printf("\nO maior numero fica no meio desses numeros sendo: %.2f %.2f %.2f \n", b, a, c);
        break;

    default:

        printf("\nO numero inteiro digitado nao atende os criterios usados nesse progama.");
        break;
    }




    //Questao 2
    printf("\n\nProgama Menu de Opcoes: \n");

    char o;
    float n1;

    printf("\nDigite um numero: ");
    scanf("%f", &n1);

    printf("\nEscolha uma das opcoes abaixo: \n");
    printf("\n a) %.2f ao quadrado \n b) %.2f ao cubo \n c) Raiz quadrade de %.2f \n d) Raiz cubica de %.2f", n1, n1, n1, n1);

    printf("\n\nOpcao: ");
    scanf(" %c", &o);

    switch(o){
    case 'a':

        n1 *= n1; // n1 = n1 * n1
        printf("\nO quadrado do numero e: %.2f\n", n1);
        break;
    
    case 'b':

        n1 = pow(n1,3);
        printf("\nO numero elevado ao cubo e: %.2f\n", n1);
        break;

    case 'c':

        n1 = sqrt(n1);
        printf("\nA raiz quadrada do numero e: %.2f\n", n1);
        break;

    case 'd':

        n1 = cbrt(n1);
        printf("\nA raiz cubica do numero e: %.2f\n", n1);
        break;

    default:

        printf("\nOpção indisponível. Por favor, selecione outra.\n");
        break;

    }




    //Questao 3
    printf("\n\nCalculadora: \n");

    int op, resto, num1rest, num2rest;
    float num1, num2, resultcalreais; // Varíaveis - Números e Resultados Operações Reais 

    printf("\nEscolha uma das opcoes abaixo: \n");
    printf("\n 1) Somar; \n 2) Subtrair \n 3) Dividir \n 4) Multiplicacar \n 5) Elevar (Potencia) \n 6) Radicalizar em Qualquer Indice \n 7) Resto de Divisao");

    printf("\n\nOpcao: ");
    scanf(" %d", &op);

    switch(op){

    case 1:

        printf("\n\nDigite dois numeros separados por espaco para soma-los: ");
        scanf("%f %f", &num1, &num2);

        resultcalreais = num1 + num2;

        printf("\nA soma entre %.4f e %.4f resulta em: %.4f \n\n", num1, num2, resultcalreais);
        break;

    case 2:

        printf("\n\nDigite os dois numeros separados por espaco para fazer a subtracao: ");
        scanf("%f %f", &num1, &num2);

        resultcalreais = num1 - num2;

        printf("\nA subtracao entre %.4f e %.4f resulta em: %.4f \n\n", num1, num2, resultcalreais);
        break;

    case 3:

        printf("\n\nDigite os dois numeros separados por espaco para fazer a divisao: ");
        scanf("%f %f", &num1, &num2);

        resultcalreais = num1 / num2;

        printf("\nA divisao entre %.4f e %.4f resulta em: %.4f \n\n", num1, num2, resultcalreais);
        break;

    case 4:

        printf("\n\nDigite os dois numeros separados por espaco para fazer a multiplicacao: ");
        scanf("%f %f", &num1, &num2);

        resultcalreais = num1 * num2;

        printf("\nA multiplicacao entre %.4f e %.4f resulta em: %.4f \n\n", num1, num2, resultcalreais);
        break;

    case 5:

        printf("\n\nDigite um numero seguido do expoente ao qual deseja eleva-lo, separados por espaco: ");
        scanf("%f %f", &num1, &num2);

        resultcalreais = pow(num1,num2);

        printf("\nA potencia de %.4f elevado a %.4f resulta em: %.4f \n\n", num1, num2, resultcalreais);
        break;

    case 6:

        printf("\n\nDigite o numero e o indice para extrair a raiz, separados por espaco: ");
        scanf("%f %f", &num1, &num2);

        resultcalreais = pow(num1, 1/num2 );

        printf("\nA raiz de %.4f com indice %.4f resulta em: %.4f \n\n", num1, num2, resultcalreais);
        break;

    case 7:

        printf("\n\nDigite o dividendo e o divisor separados por espaco para calcular o resto da divisao: ");
        scanf("%d %d", &num1rest, &num2rest);

        resto = num1rest % num2rest;
    
        printf("\nA resto da divisao de %d por %d resulta em: %d\n\n", num1rest, num2rest, resto);
        break;

    default:

        printf("\nOps! Essa opção não existe na calculadora. Escolha uma das opções listadas \n\n");
        break;

    }



    // Questão 4   
    printf("\n\nProgama Duração Jogos: \n");

    int hora1, minuto1, hora2, minuto2, tempoh, tempom, inicio, fim, duracao;

    printf("\nDigite a hora e o minuto inicial, separados por espaco: ");
    scanf("%d %d", &hora1, &minuto1);

    printf("\nAgora, digite a hora e o minuto final, separados por espaco: ");
    scanf("%d %d", &hora2, &minuto2);

    inicio = hora1 * 60 + minuto1;
    fim = hora2 * 60 + minuto2;

    if (fim < inicio) {
        fim += 24 * 60;  
    }

    duracao = fim - inicio;
    tempoh = duracao / 60;
    tempom = duracao % 60;

    printf("\n\nO jogo perdurou por %d horas e %d minutos.\n", tempoh, tempom);
    




    //Questao 5
    printf("\n\nProgama Aumento Salario: \n");

    int codigo;
    float sal, aument;

    printf("\nDigite o codigo do funcionario seguindo o exemplo (00000): ");
    scanf("%d", &codigo);

    codigo = (codigo%6);

    if(codigo == 0){

        printf("\nNao existe nenhuma funcao com esse codigo, por favor tente outro.\n\n");    
    }
    else{

        printf("\nDigite o salario desse funcionario: ");
        scanf("%f", &sal);
    
        switch(codigo){

        case 1:

            printf("\n\nO codigo do funcionario e de um Escriturario");

            aument = sal * (50.0/100.0);
            sal += aument;

            printf("\n\nDadas as condicoes de reajuste, o antigo salario sofreu um aumento de %.2f tornando-se um novo salario de %.2f\n\n", aument, sal);
            break;
    
        case 2:

            printf("\n\nO codigo do funcionario e de um Secretario");

            aument = sal * (35.0/100.0);
            sal += aument;

            printf("\n\nDadas as condicoes de reajuste, o antigo salario sofreu um aumento de %.2f tornando-se um novo salario de %.2f\n\n", aument, sal);
            break;        
    
        case 3:

            printf("\n\nO codigo do funcionario e de um Caixa");

            aument = sal * (20.0/100.0);
            sal += aument;

            printf("\n\nDadas as condicoes de reajuste, o antigo salario sofreu um aumento de %.2f tornando-se um novo salario de %.2f\n\n", aument, sal);
            break;

        case 4:

            printf("\n\nO codigo do funcionario e de um Gerente");

            aument = sal * (10.0/100.0);
            sal += aument;

            printf("\n\nDadas as condicoes de reajuste, o antigo salario sofreu um aumento de %.2f tornando-se um novo salario de %.2f\n\n", aument, sal);
            break;

        case 5:

            printf("\n\nO codigo do funcionario e de um Diretor");

            printf("\n\nDadas as condicoes de reajustes o salario do Diretor nao sofre alteracao, mantendo-se %.2f\n\n", sal);
            break;

        default:
                printf("\nErro: código inválido.\n\n");
                break;
        }
    }




    //Questao 6
    printf("\n\nProgama Salario e Imposto: \n");

    int escolha;
    float salario;

    printf("\nEscolha sua operacao: \n\n 1) Imposto\n 2) Novo Salario\n 3) Classificacao\n\n");
    printf("Digite-a: ");
    scanf("%d", &escolha);

    printf("\nDigite seu salario: ");
    scanf("%f", &salario);

    switch(i){

        case 1:

            float imposto;

            if (salario > 850.0){

                imposto = salario * 0.15;
            } else if (salario >= 500.0){

                imposto = salario * 0.10;
            } else{

                imposto = salario * 0.05;  
            }

            printf("\nO valor do imposto em cima do seu salario e de %.2f reais\n", imposto);
        break;
        

        case 2:

            float novoSalario;

            if (salario > 1500.0){

                novoSalario = salario + 25.0;
            } else if (salario >= 750.0){

                novoSalario = salario + 50.0;
            } else if (salario >= 450.0){

                novoSalario = salario + 75.0;
            } else{

                novoSalario = salario + 100.0;
            }
            printf("\nO valor do seu salario com aumento e de %.2f reais\n", novoSalario);
        break;
        

        case 3:
            if (salario <= 700.0) {

                printf("\nMal remunerado\n");
            } 
            else {

                printf("\nBem remunerado\n");
            }
        break;

        default:

            printf("\nOperacao invalida\n");
        break;
    }




    //Questao 7
    printf("\n\nProgama Altura e Peso e Classificacao: \n");

    float altura, peso;
    int classifaltura;
    char classicao;

    printf("\nDigite a altura de uma pessoa, sguindo esse modelo (m.cm / 0.00): ");
    scanf("%f", &altura);

    printf("Digite o peso dessa pessoa em kilogramas (kg): ");
    scanf("%f", &peso);

    if(altura < 1.20){

        classifaltura = 1;
    }
    else if(altura <= 1.70){

        classifaltura = 2;
    }
    else {

        classifaltura = 3;
    }

    switch(classifaltura){

    case 1:

        if(peso < 60)
            classicao = 'A';

        else if(peso <= 90)
            classicao = 'D';
        
        else 
            classicao = 'G';
    
        break;

    case 2:

        if(peso < 60)
            classicao = 'B';

        else if(peso <= 90)
            classicao = 'E';
        
        else 
            classicao = 'H';
    
        break;

    case 3: // Acima de 1.90

        if(peso < 60)
            classicao = 'C';

        else if(peso <= 90)
            classicao = 'F';
        
        else 
            classicao = 'I';
    
        break;
        
    default:

        printf("\n\nAltura fora das estabelecidas na tabela");
        break;

    }

    printf("\nA classificao dessa pessoa e %c\n\n", classicao);





    //Questao 8
    printf("\n\nProgama de Conversao e Imposto: \n");

    int cod, codpais;
    float quilo, peso1, preco, precototal, imposto;

    printf("\nDigite o codigo do produto comprado: ");
    scanf("%d", &cod);

    printf("Digite o peso do produto comprado em quilo (kg): ");
    scanf("%f", &quilo);

    printf("Digite o codigo do pais do produto: ");
    scanf("%d", &codpais);

    peso1 = quilo*1000;

    if(cod >= 1 && cod <= 4){

        preco = peso1 * 10;
    }
    else if(cod >= 5 && cod <= 7){

        preco = peso1 * 25;
    }
    else if(cod >= 8 && cod <= 10){

        preco = peso1 * 35;
    }

    printf("\n\nO peso em gramas (g) e de %.2f\nO preco do produto e de %.2f\n", peso1, preco);

    switch (codpais){
    case 1:

        printf("Esse pais e isento de imposto");

        break;
    case 2: 

        imposto = preco * 0.15;
        printf("O valor do imposto eh: %.2f reais", imposto);

        break;

    case 3:
        imposto = preco * 0.25;
        printf("O valor do imposto e de %.2f reais", imposto);

        break;
    }

    precototal = preco + imposto;

    printf("\n\nO preco total com imposto e de %.2f reais\n\n", precototal);




    //Questao 9 e 10
    printf("\n\nProgama Imposto Caminhao: \n");

    int codestad, codcarg;
    float pesocaminh, precopkg, impostopkg, valorttl;

    printf("\nDigite o codigo do estado de origem do caminhao: \n 1) Estado Regiao Norte \n 2) Estado Regiao Nordeste \n 3) Estado Regiao Centro-Oeste \n 4) Estado Regiao Sudeste \n 5) Estado Regiao Sul \n\nDigite: ");
    scanf("%d", &codestad);

    printf("\nDigite o peso do caminhao (em toneladas): ");
    scanf("%f", &pesocaminh);

    printf("\nDigite o codigo da carga (entre 10 e 40): "); // Tem que ser entrem 10 e 40
    scanf("%d", &codcarg);

    pesocaminh *= 1000.00;

    printf("\n\nO peso da carga em quilogramas (kg) %.2f", pesocaminh);


    if(codcarg >= 9 && codcarg <= 20){

        precopkg = pesocaminh * 100.00;
                   
    }
    else if(codcarg > 20 && codcarg <= 30){

        precopkg = pesocaminh * 250.00;

    }
    else{

        precopkg = pesocaminh * 340.00;

    }



    if ((codestad < 1 || codestad > 5) || (codcarg < 10 || codcarg > 40)) {

        printf("\n\nCodigo de estado ou codigo de carga invalido.\n\n");

    }
    else{

        switch (codestad){

        case 1:

                impostopkg = precopkg * 0.35;
                valorttl = precopkg + impostopkg;

                printf("\nO preco da carga do caminhao e de %.2f reais", precopkg);
                printf("\nO valor do imposto dos caminhoes vindos dos estados da regiao Norte e de %.2f reais", impostopkg);
                printf("\nO valor total transportado pelo caminhao e de %.2f reais \n\n", valorttl);

            break;

            case 2:
            
                impostopkg = precopkg * 0.25;
                valorttl = precopkg + impostopkg;

                printf("\nO preco da carga do caminhao e de %.2f", precopkg);
                printf("\nO valor do imposto dos caminhoes vindos dos estados da regiao Nordeste e de %.2f", impostopkg);
                printf("\nO valor total transportado pelo caminhao e de %.2f\n\n", valorttl);

            break;

            case 3:
            
                impostopkg = precopkg * 0.15;
                valorttl = precopkg + impostopkg;

                printf("\nO preco da carga do caminhao e de reais %.2f", precopkg);
                printf("\nO valor do imposto dos caminhoes vindos dos estados da regiao Centro-Oeste e de %.2f", impostopkg);
                printf("\nO valor total transportado pelo caminhao e de reais %.2f\n\n", valorttl);

            break;

            case 4:
            
                impostopkg = precopkg * 0.05;
                valorttl = precopkg + impostopkg;

                printf("\nO preco da carga do caminhao e de reais %.2f", precopkg);
                printf("\nO valor do imposto dos caminhoes vindos dos estados da regiao Sudeste e de %.2f", impostopkg);
                printf("\nO valor total transportado pelo caminhao e de reais %.2f\n\n", valorttl);

            break;

            case 5:
            
                impostopkg = 0;
                valorttl = precopkg + impostopkg;

                printf("\nO preco da carga do caminhao e de reais %.2f", precopkg);
                printf("\nOs caminhoes dos estados da regiao Sul estao isentos");
                printf("\nO valor total transportado pelo caminhao e de reais %.2f\n\n", valorttl);

            break;
        
        default:

            printf("\nCodigo do estado invalido. Por favor, insira um valor entre 1 e 5.\n\n");

            break;
        }

    }




    //Questao 11
    printf("\n\nProgama de Medias e Notas: \n");

    char selecao;

	printf("Escolha a media usada: \n\n a) Media Aritmetica Simples\n b) Media Ponderada\n\nDigite: ");
    scanf("%c", &selecao);

	float nota1, nota2, nota3, nota4, p1, p2, p3, p4, notaf;
	
	printf("\nDigite a sua primeira, segunda, terceira e quarta nota, respectivamente, separadas por espaco: ");
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    switch (selecao){
    case 'a':
        
        notaf = (nota1+nota2+nota3+nota4) / 4.0;
        break;
    
    case 'b':

        printf("\nDigite o Peso 1, Peso 2, Peso 3 e Peso 4, respectivamente, separados por espaco: ");
        scanf("%f %f %f %f", &p1, &p2, &p3, &p4);

        notaf = ((nota1*p1) + (nota2*p2) + (nota3*p3) + (nota4*p4))/(p1+p2+p3+p4);
        break;

    default:

        break;
    }
	
	

	printf("\nSua nota e de %.2f\n", notaf);




    //Questao 12
    printf("\n\nProgama de Conversor de Unidades: \n");

    int tipo, conversao;
    float novamed;

    printf("Escolha o tipo de conversor que gostaria de usar: \n\n 1) Temperatura (Celsius, Fahrenheit, Kelvin);  \n 2) Distancia (Metros, Quilometros, Milhas); \n 3) Tempo (Segundos, Minutos, Horas).\n\nDigite: ");
    scanf("%d", &tipo);

    switch (tipo){

    case 1:
        
        int convertemp;
        float temp;

        printf("\n\nEscolha o tipo de conversao que gostaria de fazer: \n\n 1) Celsius para Fahrenheit ou Kelvin; \n 2) Kelvin para Fahrenheit ou Celsius; \n 3) Fahrenheit para Kelvin ou Celsius. \n\nDigite: ");
        scanf("%d", &convertemp);

        switch (convertemp){

        
        case 1:

            printf("\n\nDigite a temperatura em Celsius: ");
            scanf("%f", &temp);
            
            printf("\n\nQual a conversao: \n\n1) Celsius para Fahrenheit \n2) Celsius para Kelvin\n\nDigite: ");
            scanf("%d",&conversao);

            switch (conversao){

            case 1:
                novamed = (temp * 1.8) + 32.00;
                 printf("\n\n%.2f Celsius e equivalente a %.2f Fahrenheit.\n\n", temp, novamed);
                break;
            
            case 2:
                novamed =  temp + 273.15;
                printf("\n%.2f Celsius equivalente a %.2f Kelvin.\n\n", temp, novamed);
                break;

            default:

                printf("\nOpcao invalida, selecione outra! \n\n.");
                break;
            }

            break;
        
        case 2:
            
            printf("\n\nDigite a temperatura em Kelvin: ");
            scanf("%f", &temp);

            printf("\n\nQual a conversao: \n\n1) Kelvin para Celsius \n2) Kelvin para Fahrenheit\n\nDigite: ");
            scanf("%d",&conversao);

            switch (conversao){
            
            case 1:
                novamed = temp - 273.15;
                printf("\n%.2f Kelvin e equivalente a %.2f Celsius\n\n", temp, novamed);
                break;
            
            case 2:
                novamed = ((temp - 273.15) * 1.8) + 32.0;
                printf("\n%.2f Kelvin e equivalente a %.2f Fahrenheit\n\n", temp, novamed );
                break;

            default:
                printf("\nOpcao invalida, selecione outra!\n\n.");
                break;
            }

            break;

        case 3:
            
            printf("\n\nDigite a temperatura em Fahrenheit: ");
            scanf("%f", &temp);

            printf("\n\nQual a conversao: \n\n1) Fahrenheit para Celsius \n2) Fahrenheit para Kelvin\n\nDigite: ");
            scanf("%d",&conversao);

            switch (conversao){

            case 1:
                novamed = (temp - 32) * 0.5556;
                printf("\n%.2f Fahrenheit e equivalente a %.2f Celsius\n\n", temp, novamed);
                break;
            
            case 2:
                novamed = ((temp - 32) * 0.5556) + 273.15;
                printf("\n%.2f Fahrenheit e equivalente a %.2f Kelvin\n\n", temp, novamed);
                break;

            default:
                printf("\nOpcao invalida, selecione outra!\n\n");
                break;
            }

        break;

        default:
            printf("\nOpcao invalida, selecione outra!\n\n");
            break;
        }
    break;

    case 2:
        
        int convertdist;
        float dist;

        printf("\n\nEscolha o tipo de conversao que gostaria de fazer: \n\n 1) Metros para Quilometros ou Milhas; \n 2) Quilometros para Milhas ou Metros; \n 3) Milhas para Metros ou Quilometros. \n\nDigite: ");
        scanf("%d", &convertdist);

        switch (convertdist){

        
        case 1:

            printf("\n\nDigite a distancia em Metros (M): ");
            scanf("%f", &dist);
            
            printf("\n\nQual a conversao: \n\n1) Metros para Quilometros \n2) Metros para Milhas\n\nDigite: ");
            scanf("%d",&conversao);

            switch (conversao){

            case 1:
                novamed = dist/1000.00;
                printf("\n\n%2.f metros (m) e equivalente a %.4f quilometros (km)\n\n", dist, novamed);
                break;
            
            case 2:
                novamed= dist / 1609.344;
                printf("\n%2.f metros (m) e equivalente a %.4f milhas (mi)\n\n", dist, novamed);
                break;

            default:
                printf("\nOpcao invalida, selecione outra!\n\n.");
                break;
            }

            break;
        
        case 2:
            
            printf("\n\nDigite a distancia em Quilometros (KM): ");
            scanf("%f", &dist);

            printf("\n\nQual a conversao: \n\n1) Quilometros para Milhas \n2) Quilometros para Metros \n\nDigite: ");
            scanf("%d",&conversao);

            switch (conversao){
            
            case 1:
                novamed = dist * 0.621371;
                printf("\n%.2f quilometros (km) e equivalente a %.2f milhas (mi)\n\n", dist, novamed);
                break;
            
            case 2:
                novamed = dist * 1000.00;
                printf("\n%.2f quilometros (km) e equivalente a %.2f metros (m)\n\n", dist, novamed);
                break;

            default:
                printf("\nOpcao invalida, selecione outra!\n\n.");
                break;
            }

            break;

        case 3:
            
            printf("\n\nDigite a distancia em Milhas (MI): ");
            scanf("%f", &dist);

            printf("\n\nQual a conversao: \n\n1) Milhas para Metros \n2) Milhas para Quilometros\n\nDigite: ");
            scanf("%d",&conversao);

            switch (conversao){

            case 1:
                novamed = dist * 1609.344;
                printf("\n%.2f milhas (mi) e equivalente a %.2f metros (m)\n\n", dist, novamed);
            break;
            
            case 2:
                novamed = dist * 1.609344;
                printf("\n%.2f milhas (mi) e equivalente a %.2f quilometros (km)\n\n", dist, novamed);

            break;

            default:
                printf("\nOpcao invalida, selecione outra!\n\n");
            break;
            }

        break;

        default:
            printf("\nOpcao invalida, selecione outra!\n\n");
            break;
        }
        break;
    
    case 3:

        int converttemp;
        float tempo;

        printf("\n\nEscolha o tipo de conversao que gostaria de fazer: \n\n 1) Segundos para Minuto(s) ou Hora(s); \n 2) Minutos para Hora(s) ou Segundo; \n 3) Horas para Segundo ou Minutos. \n\nDigite: ");
        scanf("%d", &converttemp);

        switch (converttemp){

        
        case 1:
            printf("\n\nDigite o tempo em Segundos (s): ");
            scanf("%f", &tempo);
            
            printf("\n\nQual a conversao: \n\n1) Segundos para Minuto(s) \n2) Segundos para Hora(s) \n\nDigite: ");
            scanf("%d",&conversao);

            switch (conversao){

            case 1:
                novamed = tempo / 60.00;
                 printf("\n\n%.2f segundos (s) e equivalente a %.2f minutos (min)\n\n", tempo, novamed);
                break;
            
            case 2:
                novamed = tempo / 3600.00;
                 printf("\n\n%.2f segundos (s) e equivalente a %.4f horas (h)\n\n", tempo, novamed);
                break;

            default:
                printf("\nOpcao invalida, selecione outra!\n\n.");
                break;
            }

            break;
        
        case 2:
            

            printf("\n\nDigite o tempo em Minutos (min): ");
            scanf("%f", &tempo);

            printf("\n\nQual a conversao: \n\n1) Minutos para Hora(s) \n2) Minutos para Segundos \n\nDigite: ");
            scanf("%d",&conversao);

            switch (conversao){
            
            case 1:
                novamed = tempo / 60;
                printf("\n%.2f minutos (min) e equivalente a %.2f horas (h)\n\n", tempo, novamed);
                break;
            
            case 2:
                novamed = tempo * 60;
                printf("\n%.2f minutos (min) e equivalente a %.2f segundos (s)\n\n", tempo, novamed);
                break;

            default:
                printf("\nOpcao invalida, selecione outra!\n\n.");
                break;
            }

            break;

        case 3:
            printf("\n\nDigite o tempo em Horas (h): ");
            scanf("%f", &tempo);

            printf("\n\nQual a conversao: \n\n1) Horas para Segundos \n2) Horas para Minutos\n\nDigite: ");
            scanf("%d",&conversao);

            switch (conversao){

            case 1:
                novamed = tempo * 3600.00;
                printf("\n%.2f horas (h) e equivalente %.2f segundos (s)\n\n", tempo, novamed);
                break;
            
            case 2:
                novamed = tempo * 60;
                printf("\n%.2f horas (h) e equivalente %.2f minutos (min)\n\n", tempo, novamed);
                break;

            default:
                printf("\nOpcao invalida, selecione outra!\n\n");
                break;
            }

            break;

        default:
            printf("\nOpcao invalida, selecione outra!\n\n");
            break;
        }
        break;

    
    default:
        printf("\nOpcao invalida, selecione outra!\n\n");
        break;
    }


    return 0;
}