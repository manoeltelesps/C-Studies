#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cidades.h"

int compararCidades(const void *X, const void *Y) {
    Cidade *cidadeX = (Cidade *)X;
    Cidade *cidadeY = (Cidade *)Y;
    return cidadeX->Posicao - cidadeY->Posicao;
} 

Estrada *getEstrada(const char *nomeArquivo) { 
    
    FILE *arquivo = fopen(nomeArquivo, "r"); 
    if (arquivo == NULL) {
        printf("Erro! Falha ao abrir o arquivo.\n");
        return NULL;
    }

    Estrada *estrada = (Estrada *)malloc(sizeof(Estrada));
    if (estrada == NULL) {
        printf("Erro! Falha ao alocar memória.\n");
        fclose(arquivo);
        return NULL;
    }

    fscanf(arquivo, "%d", &estrada->T); //lendo o comprimento da estrada
    fscanf(arquivo, "%d", &estrada->N); //lendo o número de cidades


    if (estrada->T < 3 || estrada->T > 1000000) {
        printf("Erro! Tamanho de estrada inferior a 3 km ou superior a 1.000.000 km \n");
        free(estrada); 
        fclose(arquivo);
        return NULL;
    }

    if (estrada->N < 2 || estrada->N > 10000) {
        printf("Erro! Número de cidades inferior a 2 ou superior a 10.000 \n");
        free(estrada); 
        fclose(arquivo);
        return NULL;
    }

    if (estrada->N > estrada->T) {
        printf("Erro! Número de cidades maior que o tamanho da estrada \n");
        free(estrada); 
        fclose(arquivo);
        return NULL;
    }

    estrada->C = (Cidade *)malloc(estrada->N * sizeof(Cidade));
    if (estrada->C == NULL) {
        printf("Erro! Falha ao alocar memória.\n");
        free(estrada); 
        fclose(arquivo); 
        return NULL;
    }

    for (int i = 0; i < estrada->N; i++) {

        fscanf(arquivo, "%d", &estrada->C[i].Posicao);
        fgetc(arquivo);
        fgets(estrada->C[i].Nome, 256, arquivo);
        estrada->C[i].Nome[strcspn(estrada->C[i].Nome, "\n")] = 0;

        for (int j = 0; j < i; j++) {
            if (estrada->C[i].Posicao == estrada->C[j].Posicao) {
                printf("Erro! Ponto de cidade repetido: %d\n", estrada->C[i].Posicao);
                free(estrada->C);
                free(estrada);
                fclose(arquivo);
                return NULL;
            }
        }
    }

    
        qsort(estrada->C, estrada->N, sizeof(Cidade), compararCidades);
        fclose(arquivo);
        return estrada;
    }
    

double calcularMenorVizinhanca(const char *nomeArquivo) {
    
    Estrada *estrada = getEstrada(nomeArquivo);
    if (!estrada) {
        return -1;
    }

    double menorVizinhanca = estrada->T;

    for (int i = 0; i < estrada->N; i++) {
        double inicio, fim;

        if (i == 0) { // Primeira cidade
            inicio = 0;
            fim = (estrada->C[i].Posicao + estrada->C[i+1].Posicao) / 2.0;
        } else if (i == estrada->N - 1) { // Última cidade
            inicio = (estrada->C[i-1].Posicao + estrada->C[i].Posicao) / 2.0;
            fim = estrada->T;
        } else { // Cidade no meio
            inicio = (estrada->C[i-1].Posicao + estrada->C[i].Posicao) / 2.0;
            fim = (estrada->C[i].Posicao + estrada->C[i+1].Posicao) / 2.0;
        }

        double vizinhanca = fim - inicio;
        if (vizinhanca < menorVizinhanca) {
            menorVizinhanca = vizinhanca;
        }
    }

    free(estrada->C);
    free(estrada);

    return menorVizinhanca;
}
    
char *cidadeMenorVizinhanca(const char *nomeArquivo) {

    Estrada *estrada = getEstrada(nomeArquivo);
    if (!estrada) {
        return NULL;
    }

    double menorVizinhanca = calcularMenorVizinhanca(nomeArquivo);
    char *cidadeMenor = NULL;

    for (int i = 0; i < estrada->N; i++) {
        double inicio, fim;

        if (i == 0) { // Primeira cidade
            inicio = 0;
            fim = (estrada->C[i].Posicao + estrada->C[i+1].Posicao) / 2.0;
        } else if (i == estrada->N - 1) { // Última cidade
            inicio = (estrada->C[i-1].Posicao + estrada->C[i].Posicao) / 2.0;
            fim = estrada->T;
        } else { // Cidade no meio
            inicio = (estrada->C[i-1].Posicao + estrada->C[i].Posicao) / 2.0;
            fim = (estrada->C[i].Posicao + estrada->C[i+1].Posicao) / 2.0;
        }

        double vizinhanca = fim - inicio;
        if (vizinhanca == menorVizinhanca) {
            cidadeMenor = strdup(estrada->C[i].Nome);
            break;
        }
    }

    free(estrada->C);
    free(estrada);

    return cidadeMenor;
}
