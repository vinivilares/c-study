#include <stdio.h>

int main(void) {
    void teste(void);

    teste();
    teste();
    teste();

    return 0;
}

void teste(void) {
    int variavelLocalAutomatica = 2; // Sempre é recriada
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2; // É criada apenas uma vez e mantem o valor
    variavelLocalEstatica *= 2;

    printf("Local Automatica = %i\n", variavelLocalAutomatica);
    printf("Local Estatica = %i\n", variavelLocalEstatica);
}