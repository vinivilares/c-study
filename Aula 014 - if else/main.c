#include <stdio.h>

int main() {
    int idade;

    printf("Favor informar idade:\n");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("Bebidas alcoolicas nao estao liberadas.\n");
    } else {
        printf("Bebidas alcoolicas estao liberadas\n");
    }

    return 0;
}