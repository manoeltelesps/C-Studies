/*Questao 1 A*/

#include <stdio.h>

int fatorial(int n){
	int i, soma=n;
	
	for(i=n; i>0; i--){
		if(i==1)
			break;
		
		return soma *= fatorial(n-1);
	}
}


int main(){
	int num;
	
	scanf("%d", &num);
	
	printf("%d", fatorial(num));
	
}


/*Questao 1 B*/

#include <stdio.h>

int rest_div(int n1, int n2){
	int i=n1, j=n2;
	
	if(i<j)
		return i;
		
	else{
		return rest_div(n1-n2, n2);
	}
}


int main(){
	int num1, num2;
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	if(num1<num2)
		printf("o primeiro numero digitado tem que ser maior ou igual ao segundo numero digitado");
	
	else
	printf("Resto da divisao: %d", rest_div(num1, num2));
	
}


/*Questao 1 C*/

#include <stdio.h>

int coef_div(int n1, int n2){
	int i=n1, j=n2;
	
	if(i<j){
		return i;
	}
		
	else{
		return 1+ coef_div(n1-n2, n2);
	}
}


int main(){
	int num1, num2;
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	if(num1<num2)
		printf("o primeiro numero digitado tem que ser maior ou igual ao segundo numero digitado");
	
	else
	printf("Coeficiente da divisao: %d", coef_div(num1, num2));
	
}


/*Questao 1 D*/

#include <stdio.h>

int suc(int n){
	return n+1;
}

int pred(int n){
	return n-1;
}

int soma(int n1, int n2){
	if (n2 == 0) {
        return n1;
    }
	return suc(n1) + pred(n2);
}




int main(){
	int num1, num2;
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	printf("Sucessor do Primeiro Numero + Predecessor do Segundo Numero: %d", soma(suc(num1), pred(num2)));
	
}


/*Questao 2 A*/

#include <stdio.h>

int regr(int n){
		printf("%d\n", n);
		
		if(n==0)
			return 0;
		
		return regr(n-1);
}


int main(){
	int num;
	
	scanf("%d", &num);

	printf("Contagem Regressiva:\n");
	regr(num);
}


/*Questao 2 B*/

#include <stdio.h>

int bin(n){
	if(n>1)
		bin(n/2);
		
	printf("%d", n%2);
}


int main(){
	int num;
	
	scanf("%d", &num);
	
	if(num==0)
		printf("0");
	
	else{
		printf("Numero em Binario:");
		bin(num);
		printf("\n");
	}
	
}


/*Questao 3*/

#include <stdio.h>

int MDC(int n1, int n2){
	if(n2==0)
		return n1;
		
	return MDC(n2, n1%n2);
}


int main(){
	int num1, num2;
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	printf("\n%d", MDC(num1, num2));
	
	
}


/*Questao 4*/
#include <stdio.h>

int torrehanoi(int n){

    if(n == 1)
        return 1;
    else
        return 2*torrehanoi(n-1)+1;
}

int main(){
    int discos;

    printf("Digite a quantidade de discos: ");
    scanf("%d", &discos);


    printf("%d", torrehanoi(discos));


    return 0;
}


/*Questao 5*/

#include <stdio.h>

int qtdnum(int n){
	
	if(n<10){
		return 1;
	}
	
	return 1+ qtdnum(n/10);
	
}

int main(){
	int num;
	
	scanf("%d", &num);
	
	printf("O numero %d tem: %d digitos", num, qtdnum(num));
}


/*Questao 6*/

#include <stdio.h>

int soma_dig(int n){
	
	if(n<=0)
		return printf("Digite um numero positivo maior que zero!");
	
	if(n<10)
		return n;
	
	return (n%10)+ soma_dig(n/10);
	
}

int main(){
	int num;
	
	scanf("%d", &num);
	
	printf("A soma dos digitos do numero %d eh: %d", num, soma_dig(num));
}


/*Questao 7*/
#include <stdio.h>

int par_ou_impar(int n) {

    if (n == 0)
        return 1;

    if (n == 1)
        return 0;

    return par_ou_impar(n - 2);
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\n%d", par_ou_impar(numero));
}


/*Questao 8*/
	Linha 1: Declaração do ponteiro inteiro *p, e da variável inteira x que vale 5 inicialmente.
	Linha 2: Ponteiro *p recebe ele mesmo *(vezes) 2 *(vezes) ponteiro *p (novamente).
	Linha 3: Vai printar 5, pois a variável X não foi atribuído ao ponteiro *p. 


/*Questao 9*/
#include <stdio.h>

int main(){
	char t='A';
	char *s=&t, **r=&s, ***q=&r, ****p=&q;
	
	printf("%c", ****p);
}


/*Questao 10*/
A saída é a soma do endereço 0x1000 com o tamanho de cada tipo de variável.
Para o char, o incremento é de 1 byte, então o valor será 0x1001. 
Para o int, o incremento é de 4 bytes, resultando em 0x1004. 
O float também ocupa 4 bytes, portanto a saída será 0x1004 novamente.
Já o double ocupa 8 bytes, então a saída será 0x1008.


/* Questao 11*/
O ponteiro p começa em 0x1000 e é incrementado, movendo-se para 0x1004. Em seguida,
é decrementado por 3, indo para 0x0FF8, depois incrementado por 2 para voltar a 0x1000.
Finalmente, é decrementado por 1, resultando em 0x0FFC. A saída será: 0x1004 0xff8 0x1000 0xffc.


/*Questao 12-
#include <stdio.h>
void trocarCiclicamente(int *a, int *b, int *c){
    int aux = *a;
     *a = *c;
     *c = *b;
     *b = aux;
}


int main(){
    int num1, num2, num3;
    printf("Digite tres numeros separados por espacos: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("\nNumeros digitados: %d %d %d", num1, num2, num3);
    
    trocarCiclicamente(&num1, &num2, &num3);
    printf("\nNumeros trocados:  %d %d %d", num1, num2, num3);


    return 0;
}*/


/* Questao 13-
#include <stdio.h>
void incrementarDecrementar(int *valor, int *incrementado, int *decrementado){
    int aux = *valor;
    *incrementado = ++(*valor);
    *decrementado = aux-=2;
   
}
int main(){
    int num, i, d;
   
    printf("Digite um numero: ");
    scanf("%d", &num);
   
    incrementarDecrementar(&num, &i, &d);
    printf("Incremento: %d\n", i);
    printf("Decremento em 2: %d\n", d);
   
}
*/


/*Questao 14-
#include <stdio.h>
void contarDivisores(int *num, int *totalDivisores){
    *totalDivisores=0;
    for(int i=1; i <= *num; i++)
        if(*num % i == 0)
            (*totalDivisores)++;
    
}


int main(){
    int num, total;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    contarDivisores(&num, &total);
    printf("O total de divisores de %d e: %d", num, total);


    return 0;
}*/




/*Questao 15-


#include <stdio.h>
void comparar(int *a, int *b, int *maior, int *menor){
   *maior = *a;
   *menor = *b;
   
    if(*b > *a){
        *maior = *b;
        *menor = *a;
    }
}
int main(){
    int num1, num2, x, y;
   
    printf("Digite dois numeros separados por espaco: ");
    scanf("%d %d", &num1, &num2);
   
    comparar(&num1, &num2, &x, &y);
    printf("o maior numero e: %d\n", x);
    printf("o menor numero e: %d\n", y);
}
*/




/* Questao 16-
#include <stdio.h>
void calcularDobroMetade(float *num, float *dobro, float *metade){
     *dobro = (*num) * 2;
     *metade = (*num)/2;
     
}


int main(){
    float a, d, m;
    printf("Digite um numero: ");
    scanf("%f", &a);
    
    calcularDobroMetade(&a, &d, &m);
    printf("\nO Dobro de %.2f e: %.2f\nA metade de %.2f e: %.2f", a, d, a, m);


    return 0;
}*/




/*Questao 17-


#include <stdio.h>


void dividir(int *dividendo, int *divisor, int *quociente, int *resto){
    *quociente = *dividendo / *divisor;
    *resto = *dividendo % *divisor;
}


int main(){
    int num, d, q, r;
   
    printf("Digite um numero e seu divisor separado por espacos: ");
    scanf("%d %d", &num, &d);
   
    dividir(&num, &d, &q, &r);
    printf("\nResultado da divisao %d/%d e: %d\n", num, d, q);
    printf("Resto da divisao %d%%%d e: %d\n", num, d, r);
   
}
*/