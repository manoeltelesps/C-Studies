#include <stdio.h>

int bemVindo(){
    printf("Bem-vindo(a)! Fico feliz em te-lo(a) conosco.\n");
    return 0;
}

int erro(){
    printf("Ocorreu um erro. Por favor, tente novamente.\n");
    return 0;
}

int ateLogo(){
    printf("Até logo! Espero ve-lo(a) em breve.\n");
    return 0;
}

int main() {

    //Questão 9
    printf("\n\nProgama Mensagens\n\n");
    int (*mensagens[])() = {bemVindo, erro, ateLogo}, opcao;
    
    printf("\n\n\t0 - Mensagem de Boas-vindas\n\t1 - Mensagem de Erro\n\t2 - Mensagem de Despedida\n\nOpcao: ");
    scanf("%d", &opcao);

    if(opcao < 0 || opcao > 2){
        printf("Opcao Invalida, tente novamente! ");
    }
    else{
        putchar('\n');
        mensagens[opcao]();
    }



    return 0;
   
}
