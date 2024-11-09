#include <stdio.h>


typedef struct{
    int hora;
    int minuto;
    int segundo;
}Horas;


int main() {

    //Questão 5
    printf("\n\nProgama Horario: \n\n");

    Horas agora;

    agora.hora = 12;
    agora.minuto = 32;
    agora.segundo = 12;

    printf("%.2d:%.2d:%.2d", agora.hora, agora.minuto,
    agora.segundo);
    
    return 0;
}