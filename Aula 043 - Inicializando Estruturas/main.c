#include <stdio.h>

int main(void) {

    struct horario {
        int horas;
        int minutos;
        int segundos;
    } agora = { 10, 20, 30 };

    // struct horario agora;

    // struct horario agora = {10, 20, 30};

    // agora.horas = 10;
    // agora.minutos = 20;
    // agora.segundos = 30;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
    return 0;
}