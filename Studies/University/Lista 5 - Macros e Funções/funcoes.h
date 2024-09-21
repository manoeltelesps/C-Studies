#include <stdio.h>

int posouneg(int x);
int somatorial(int a, int b);
int somatorial_divisao(int a, int b, int c);

	
int posouneg(int x){
    if(x >= 0)
        return 1;
    
    if(x < 0)
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
	

	
	
}
