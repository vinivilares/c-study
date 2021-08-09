#include <stdio.h>

int main() {
    int num1 = 100;
    int num2 = 20;
    int res;

    num1 < num2 ? printf("sim\n") : printf("nao\n");
    num1 < num2 ? (res = 10) : (res = -10); // usar parenteses para nao dar erro

    printf("%i\n", res);
    return 0;
}