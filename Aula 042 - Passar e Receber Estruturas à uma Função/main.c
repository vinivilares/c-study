#include <stdio.h>

// Estrutura global
struct horario {
    int horas;
    int minutos;
    int segundos;
};

int main(void) {
    struct horario teste(struct horario x);

    struct horario agora;
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 58;

    struct horario proxima;
    proxima = teste(agora);

    printf("%i:%i:%i\n", proxima.horas, proxima.minutos, proxima.segundos);

    return 0;
}

struct horario teste(struct horario x) {
    printf("%i:%i:%i\n", x.horas, x.minutos, x.segundos);

    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;

    return x;
}