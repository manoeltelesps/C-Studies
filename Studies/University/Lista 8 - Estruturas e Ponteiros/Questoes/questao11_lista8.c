#include <stdio.h>
#include <string.h>

void converterMaiscula(char *phrase){
  
  int tam = strlen(phrase);

  for (int i = 0; i < tam; i++) {
    if (phrase[i] >= 'a' && phrase[i] <= 'z')
      phrase[i] -= 32; 
  }

  printf("%s", phrase);
}

void converterMinuscula(char *phrase){
  
  int tam = strlen(phrase);

  for (int i = 0; i < tam; i++) {
    if (phrase[i] >= 'A' && phrase[i] <= 'Z')
      phrase[i] += 32; 
  }

  printf("%s", phrase);
}

void inverterFrase(char *phrase){
  
  int tam = strlen(phrase);

  for (int i = 0; i < tam / 2; i++) {
    char temp = phrase[i];
    phrase[i] = phrase[tam - i - 1];
    phrase[tam - i - 1] = temp;
  }

  printf("%s", phrase);
}



int main(){
  
  //Questao 11
  printf("\n\nProgama do Word\n\n");

  void (*alterador[])(char *phrase) = {converterMaiscula, converterMinuscula, inverterFrase};
  int opcao;
  char frase [100];

  printf("Digite sua frase: ");
  fgets(frase, 100, stdin);


  printf("\n\t0 - Maiscula\n\t1 - Minuscula\n\t2 - Inverter\n\nOpcao: ");
  scanf("%d", &opcao);

  if(opcao < 0 || opcao > 2){
      printf("Opcao Invalida, tente novamente! ");
    }
    else{
      putchar('\n');
      alterador[opcao](frase);
    }
  
  




  return 0;

}
