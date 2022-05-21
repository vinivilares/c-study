#include <stdio.h>

int somarVetor(int vetor[], const int n) {
    int soma = 0;
    int *ponteiro;
    int *const finalVetor = vetor + n;

    // comparando o endereço de memoria
    for (ponteiro = vetor; ponteiro < finalVetor; ++ponteiro) {
        // buscando o valor armazenado no endereço de memoria
        soma += *ponteiro;   
    }

    return soma;
}

int main(void) {
    int somarVetor(int vetor[], const int n);
    int vetor[10] = {5,5,5,5,5,5,5,5,5,5};

    printf("A soma dos membros do vetor = %i", somarVetor(vetor, 10));

    getchar();
    return 0;
}