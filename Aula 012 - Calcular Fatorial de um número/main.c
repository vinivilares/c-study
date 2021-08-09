#include <stdio.h>

//Desafio calcular o Fatorial de um numero
int main() {
    int numero = 10;
    int fatorial = numero;
    int res = 1;

    for ( ; fatorial >= 1; --fatorial) {
        res *= fatorial;
    }
        printf("Fatorial de %i = %i\n", numero, res);

    return 0;
}