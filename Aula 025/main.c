#include <stdio.h>

int main(void) {
    int matriz[3][3] = {1, 2, 3, 4, 5, 6 ,7, 8, 9};

    // Primeira linha
    printf("%i ", matriz[0][0]);
    printf("%i ", matriz[0][1]);
    printf("%i\n", matriz[0][2]);

    // Segunda linha
    printf("%i ", matriz[1][0]);
    printf("%i ", matriz[1][1]);
    printf("%i\n", matriz[1][2]);
    
    // Terceira linha
    printf("%i ", matriz[2][0]);
    printf("%i ", matriz[2][1]);
    printf("%i\n", matriz[2][2]);
    
    return 0;
}