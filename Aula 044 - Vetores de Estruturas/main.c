#include <stdio.h>

int main(void) {

    struct horario {
        int hora;
        int minuto;
        int segundo;
    };

    struct horario teste[5] = {{10, 20, 30}, {20, 30, 40}, {30, 40, 50}, {40, 50, 60}, {50, 60, 70}};

    for (int i = 0; i < 5; i++) {
        printf("%i:%i:%i\n", teste[i].hora, teste[i].minuto, teste[i].segundo);
    }

    return 0;
}