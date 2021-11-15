#include <stdio.h>

int main(void) {
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    // Valores dos ponteiros
    double soma = *pX + *pY; 

    // int *resultado;
    // resultado = 6422284;

    printf("Endereco x = %i - Valor x = %i\n", pX, *pX);
    printf("Endereco y = %i - Valor y = %f\n", pY, *pY);
    printf("Endereco z = %i - Valor z = %c\n", pZ, *pZ);
    printf("Soma = %f\n", soma);
    // printf("Valor x = %i\n", *resultado);

    getchar();
    return 0;
}