#include <stdio.h>

int main() {
    int i = 0;

    // Verifica depois executa
    while (i != 0)
    {
        printf("Teste");
    }

    // Executa depois verifica
    do
    {
        printf("Teste 2\n");
    } while (i != 0);

    return 0;
}