#include <stdio.h>


typedef struct
{
	int hora;
	int min;
	int seg;
} Horario;

typedef struct
{
	int dia;
	int mes;
	int ano;
	Horario hora;

} Data;

typedef struct
{
	char origem[45];
	char destino[45];
	Data partida;
	Data chegada;
} Voo;



int main() {


    //Questão 6
    printf("\n\nProgama Voos: \n\n");

    Voo aeroJK[4] = {
        {"Brasilia","Wanderley",{8,11,2024,14,10,00},{8,11,2024,15,10,00}},
        {"Brasilia","Tailandia",{8,11,2024,13,00,00},{10,11,2024,14,00,00}},
        {"Brasilia","Buenos Aires",{9,11,2024,10,00,00},{9,11,2024,14,00,00}},
        {"Brasilia","Alemanha",{8,11,2024,17,00,00},{9,11,2024,3,00,00}}
    };

	printf("Origem\t\t\tDestino\t\t\tPartida\t\t\tChegada\n");
	for(int i=0;i<4;i++)
	{
		printf("%s\t->->\t%s\t\t%d/%d/%d %d:%d:%d\t%d/%d/%d %d:%d:%d\n",aeroJK[i].origem, aeroJK[i].destino, aeroJK[i].partida.dia,aeroJK[i].partida.mes, aeroJK[i].partida.ano,
        aeroJK[i].partida.hora.hora,aeroJK[i].partida.hora.min,aeroJK[i].partida.hora.seg,
        aeroJK[i].chegada.dia,aeroJK[i].chegada.mes, aeroJK[i].chegada.ano,
        aeroJK[i].chegada.hora.hora,aeroJK[i].chegada.hora.min,aeroJK[i].chegada.hora.seg);
	}
    

    return 0;
}

