#include <stdio.h>

int main(void) {
    void teste(void);

    teste();
    teste();
    teste();

    return 0;
}

void teste(void) {
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    printf("%i\n", variavelLocalAutomatica);
}