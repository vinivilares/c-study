// Escreva um programa que inverta as cifras de um número INTEIRO POSITIVO digitado pelo usuário. Exemplo: Se o usuário digitar 1234 o programa deve retornar na tela 4321.

#include <stdio.h>

int main() {
    int numero, cifra;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    if (numero >= 0) {
        do {
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        } while (numero != 0);

        printf("\n");

    } else if (numero < 1) {
        numero = numero * -1;
        printf("-");

        do {
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        } while (numero != 0);

        printf("\n");
    }

    return 0;
}