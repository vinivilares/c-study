#include <stdio.h>

int gVariavelGlobal = 2; // Funciona igual a variavel estatica

int main(void) {
    void teste(void);

    printf("Global = %i\n", gVariavelGlobal);

    teste();
    teste();

    return 0;
}

void teste(void) {
    int variavelLocalAutomatica = 2; // Sempre é recriada
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2; // É criada apenas uma vez e mantem o valor
    variavelLocalEstatica *= 2;
    gVariavelGlobal *= 2;

    printf("Local Automatica = %i\n", variavelLocalAutomatica);
    printf("Local Estatica = %i\n", variavelLocalEstatica);
    printf("Global = %i\n", gVariavelGlobal);
}