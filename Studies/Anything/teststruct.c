#include <stdio.h>


int main(void) {
    struct horario {
        int horas;
        int minutos;
        int segundos;
    }; 
    
    struct horario agora;
    agora.horas = 17;
    agora.minutos = 18;
    agora.segundos = 54; 

    printf("A hora agora e %d horas\n", agora.horas);
    printf("A hora agora e %d minutos\n", agora.minutos);
    printf("A hora agora e %d segundos\n", agora.segundos);

    return 0;
}
