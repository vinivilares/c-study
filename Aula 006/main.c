#include <stdio.h>

int main() {
    // Variavel
    int minhaIdade = 25;
    int maeIdade = 48;
    int paiIdade = 50;
    int irmaoIdade = 15;

    int idadeTotal;

    idadeTotal = minhaIdade * maeIdade / paiIdade + irmaoIdade;
    
    printf("%i\n", idadeTotal);
    
    return 0;
}