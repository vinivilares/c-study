#include <stdio.h>

int main(void) {
    int x = 10; // Variavel x recebe 10
    int *ponteiro; // Cria um ponteiro
    ponteiro = &x; // Variavel aponta para o endereço de memoria de x

    int y = 20; // Variavel y = 20
    *ponteiro = y; // x recebe o valor de y

    // printf("%i\n", &x);
    // printf("%i\n", *ponteiro);

    printf("%i %i\n", x, y);
    getchar();
    
    return 0;
}

// printf("%i\n", &x); &variavel = endereço de memória mas não é ponteiro