#include <stdio.h>

int menor(int x, int y) {  return x>y; }
int maior(int x, int y) { return x<y; }

int minmax(int v[], int n, int (*cmp)(int,int)) {
  
  int i, x=v[0];
  
  for(i=1; i<n; i++)
    if( cmp(x,v[i]) )
      x = v[i];
  
  return x;

}

int main(){

    int vetor[5], i;

    printf("Vetor de 5 Posicoes!\n\n");

    for(i=0; i<5; i++){
      printf("Digite o valor da %d%c posicao do vetor: ", i+1, 248);
      scanf("%d", &vetor[i]);
    }

    printf("\nO maior numero eh: %d", minmax(vetor,5,maior));

}