// Escreva um programa que peça que o usuário digite dois números INTEIROS. O seu programa deve verificar se o primeiro número é divisível pelo segundo e retornar na tela do usuário uma mensagem apropriada a verificação feita.

#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);
    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    if (n2 == 0) {
        printf("Divisao por 0 nao permitida\n");
    } else {
        if (n1 % n2 == 0) {
            printf("%i e divisivel por %i\n", n1, n2);
        } else {
            printf("%i nao e divisivel por %i\n", n1, n2);
        }
    }

    return 0;
}