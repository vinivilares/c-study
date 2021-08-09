#include <stdio.h>

struct horario {
    int hora;
    int minuto;
    int segundo; 
};

int main(void) {
    void receberHorarios(struct horario lista[5]);
    void printHorarios(struct horario lista[5]);
    struct horario listaHorarios[5];

    receberHorarios(listaHorarios);
    printHorarios(listaHorarios);

    return 0;
}

void receberHorarios(struct horario lista[5]) {
    for (int i = 0; i < 5; i++) {
        printf("Digite o %i horario (hh:mm:ss): ", i+1);
        scanf("%i:%i:%i", &lista[i].hora, &lista[i].minuto, &lista[i].segundo);
    }
}

void printHorarios(struct horario lista[5]) {
    for (int i = 0; i < 5; i++) {
        
        printf("O %i Horario e' = %i:%i:%i\n", i + 1, lista[i].hora, lista[i].minuto, lista[i].segundo);
    }
}