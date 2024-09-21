#include <stdio.h>
#include <math.h>

int posouneg(int x);
int somatorial(int a, int b);
int somatorial_divisao(int a, int b, int c);
void conversor_seg(int seg);
float acrescimo(float x, float y);
float media_arit_pond(float n1, float n2, float n3, char opcao);
int ddcpf(int cpf);

	
int posouneg(int x){
    if(x >= 0)
        return 1;
    
    else
        return 0;
}



int somatorial(int a,int b){
	
	int soma=0; 
	
	if(a<b){
		
		int aux = a;
		a = b;
		b = aux;		
	}
	
	for(++b; b < a; b++){
		soma += b;
	}
		
	return soma; 
	
}


int somatorial_divisao(int a, int b, int c){



	int soma = 0;
	
	if(b<c){
		
		int aux = b;
		b = c;
		c = aux;		
	}
	
	
	for(; c <= b; c++){
		if(c%a == 0)
			soma += c;
	}
	
	return soma;
	
	
}


void conversor_seg(int seg){

	int hora, minutos, segundos;

	hora = seg/3600;
	minutos = (seg%3600)/60;
	segundos = (seg%3600)%60;

	printf("Os %d segundos convertidos sao iguais a %d hora(s) %d minuto(s) %d segundo(s)", seg, hora, minutos, segundos);

}


float acrescimo(float x, float y){

	float acrescimo = ((y - x)/50)*100;

	return acrescimo;

}

float media_arit_pond(float n1, float n2, float n3, char opcao){

	float media;
	float p1=5.0, p2=3.0, p3=2.0;

	switch(opcao){
		case 'A':
			media = (n1+n2+n3)/3.0;
		break;

		case 'P':
			media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
		break;

		default:
			media = 0.00;
		break;
	}

	return media;

}

void desret(int m, int n){ //desret (Desenhar Retangulo)

    for (int coluna = 0; coluna < m; coluna++) {
        for (int linha = 0; linha < n; linha++) {
            printf("* ");
        }
        printf("\n");
    }
}

int ddcpf(int cpf){ //ddcpf (Dois Digitos CPF)

	int soma_digitos = 0, digito = cpf, soma_digitos2=0;
	

	for(int i=10; i>=0; i--){
		digito = cpf/((int)pow(10,i))%10;
		soma_digitos += digito;
	}

	
	int mult_da_soma = (soma_digitos/10)*(soma_digitos%10);
	int primeiro_digito = (mult_da_soma%10)-(mult_da_soma/10);
	

	for(int i=10; i>=0; i--){
		digito = cpf/((int)pow(10,i))%10;
		soma_digitos2 += digito;  
	}

	// soma = 36 + 7 
	soma_digitos2 += primeiro_digito; 

	int mult_da_soma2 = (soma_digitos2/10)*(soma_digitos2%10);
	int segundo_digito = (mult_da_soma2%10)-(mult_da_soma2/10);


	int dig_verificador = (primeiro_digito*10)+segundo_digito;


	return dig_verificador;
}