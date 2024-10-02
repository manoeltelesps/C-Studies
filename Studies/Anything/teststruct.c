#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[100] ;
    int idade; 
    float altura;
};

//x = nome, y = idade, z = altura.
struct Pessoa criar(char x[], int y, float z){
    struct Pessoa novaPessoa;
        strcpy(novaPessoa.nome, x);
        novaPessoa.idade = y;
        novaPessoa.altura = z; 

    return novaPessoa;
};

int main (){

    struct Pessoa p = criar("Lucas", 20, 1.79);
    printf("%s, %d, %.2f", p.nome, p.idade, p.altura);

    return 0;
}


