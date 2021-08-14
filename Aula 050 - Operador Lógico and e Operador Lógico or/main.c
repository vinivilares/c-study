#include <stdio.h>

int main(void) {

    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 20 && idade <= 40) {
        printf("deu certo\n");
    } else {
        printf("nao deu certo\n");
    }

    // if (idade >= 20 || idade <= 40) {
    //     printf("deu certo\n");
    // } else {
    //     printf("nao deu certo\n");
    // }
    
    return 0;
}