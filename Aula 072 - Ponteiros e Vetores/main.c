#include <stdio.h>

int main(void) {
	// os ponteiros ocupam espaços de 4 em 4 bits
	int vetor[3] = {1,2,3};
	
	int *ponteiro = &vetor[0];

	*(ponteiro + 1) = 10; // mudando o elemento do vetor no ponteiro
	
	printf("%i\n", vetor[1]);
	// %p mostra o endereço de memoria do ponteiro em hexadecimal
	getchar();
	return 0;

}

