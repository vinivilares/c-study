#include <stdio.h>
#include <stdbool.h> // caso for utilizar boolean

int main() {
    char variavelChar = 'a';
    printf("%c\n", variavelChar);
    scanf("%c", &variavelChar);
    printf("%c\n", variavelChar);

    bool variavelBool = false;
    printf("%i\n", variavelBool);

    int variavelInt = 10;
    printf("%i\n", variavelInt);
    scanf("%i", &variavelInt);
    printf("%i\n", variavelInt);

    long int variavelLong = 1098319178;
    printf("%i\n", variavelLong);
    scanf("%i", &variavelLong);
    printf("%i\n", variavelLong);

    float variavelFloat = 10.10;
    printf("%f\n", variavelFloat);
    scanf("%f", &variavelFloat);
    printf("%f\n", variavelFloat);

    double variavelDouble = 10.10;
    printf("%f\n", variavelDouble);
    scanf("%lf", &variavelDouble);
    printf("%f\n", variavelDouble);

    return 0;
}