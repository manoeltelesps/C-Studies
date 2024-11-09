#include <stdio.h>
#include <stdlib.h>

void ordemCrescente(int *v) {
    int temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (*(v + i) > *(v + j)) {
                temp = *(v + i);
                *(v + i) = *(v + j);
                *(v + j) = temp;
            }
        }
    }
}

void ordemDecrescente(int *v) {
    int temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (*(v + i) < *(v + j)) {
                temp = *(v + i);
                *(v + i) = *(v + j);
                *(v + j) = temp;
            }
        }
    }
}

void ordemAbsoluta(int *v) {
    int temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (abs(*(v + i)) > abs(*(v + j))) {
                temp = *(v + i);
                *(v + i) = *(v + j);
                *(v + j) = temp;
            }
        }
    }
}

int main() {
    printf("\n\nPrograma Ordenacao\n\n");

    int opcao;
    int vetor[5] = {12, -58, 97, 45, -74};

    void (*operador[])(int *) = {ordemCrescente, ordemDecrescente, ordemAbsoluta};

    printf("\t0 - Crescente\n\t1 - Decrescente\n\t2 - Absoluta \n\nEscolha a opcao de ordenacao: ");
    scanf("%d", &opcao);

    if (opcao < 0 || opcao > 2) {
        printf("Opcao Invalida, tente novamente!\n");
    } else {
        putchar('\n');
        printf("Vetor original: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");

        operador[opcao](vetor);

        printf("Vetor ordenado: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }

    return 0;
}
