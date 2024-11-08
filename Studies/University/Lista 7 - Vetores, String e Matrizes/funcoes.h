#include <stdio.h>


void minimax(float *vetor, int tam, float *maior, float *menor);
void carrega(int *v,int n);
void novoputs(char *s);
void novostrcpy(char *s, char *t);
int novostrlen(char *s);
void novostrcat(char *s,char *t, int x);
int novostrpos(char *s, char c);
void novostrdel(char *s, int p);
void imprimircampo(char c[][5]);

void minimax(float *vetor, int tam, float *maior, float *menor){

    *menor = 99999.99;
    *maior = -99999.99;

    for(int j = 0; j < tam; j++){
        if(*menor > *(vetor+j))
            *menor = *(vetor+j);
        
        if(*maior < *(vetor+j))
            *maior = *(vetor+j);
    }
    

}

void carrega(int *v,int n){

    putchar('\n');

    for(int i = 0; i < n; i++){
		printf("Digite o numero na posicao (%d/%d): ", i, n);
		scanf("%d", &v[i]);
	}

}

void novoputs(char *s){

    int i = 0;

    while(*(s+i) != '\0'){
        
        printf("%c",*(s+i));
        i++;
    }

    printf("\n");
}

void novostrcpy (char *s, char *t){

    int l = 0;

    while (*(t + l) != '\0') {
        *(s + l) = *(t + l);
        l++;
    }

    // Adiciona o caractere nulo ao final da string s
    *(s + l) = '\0';

}

int novostrlen(char *s){

    int k = 0, contador = 0;

    while(*(s+k) != '\0'){

        contador += 1;
        k++;
    }

    return contador;

}

void novostrcat(char *s, char *t, int x){
    
    int p = 0;

    while (*(s + p) != '\0') {
        p++;
    }


    for (int i = 0; i < x; i++) {
        
        *(s + p) = *(t + i);  
        p++;
    }

    *(s + p) = '\0';
}

int novostrpos(char *s, char c){

    int y = 0, contador = 0; 

    do{

        contador += 1;
        
        if(*(s+y) == c)
            return contador;      
        
        y++;

    }while(*(s+y) != '\0');

    return -1;

}

void novostrdel(char *s, int p) {
    
    if (s[p] == '\0') return; 

    
    int i = p;

    while (s[i] != '\0') {
        
        s[i] = s[i + 1];
       
        i++;
    }
}

void imprimircampo(char c[][5]){

    putchar('\n');
    
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5;j++){
            printf("%c", c[i][j]);
        }
        putchar('\n');
    }
}