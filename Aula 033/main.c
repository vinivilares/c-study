// Formatação de Output
#include <stdio.h>

int main(void) {
    int intVar = 9999999;
    int intVar2 = 10;
    double doubleVar = 100.123456789;

    printf("Formatacao de variaveis inteiras:\n");
    printf("Variavel inteira (%%i) = %7i\n", intVar2); // %i Integer
    printf("Variavel inteira (%%d) = %d\n", intVar); // %d Decimal
    printf("Variavel inteira (%%x) = %x\n", intVar); // %x Hexadecimal
    printf("Variavel inteira (%%o) = %o\n", intVar); // %o Octal
    printf("\n");

    printf("Formatacao de variaveis float e double:\n");
    printf("Variavel double (%%f) = %f\n", doubleVar); // %f numero ponto flutuante
    printf("Variavel double (%%e) = %e\n", doubleVar); // %e notação cientifica
    printf("Variavel double (%%g) = %g\n", doubleVar); // %g notação cientifica simplificada do %e
    printf("Variavel double (%%a) = %a\n", doubleVar); // %a notação cientifica usando virgula
    printf("\n");
}