#include <stdio.h>

int main(void) {
	int vetor[3] = {1,2,3};
	// aponta para o primeiro elemento do vetor
//	int *ponteiro = vetor;
	// também posso indicar o indice diretamente
 int *ponteiro = &vetor[1];

	printf("%i", *ponteiro);

	getchar();
	return 0;
}
