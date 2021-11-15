#include <stdio.h>

int main() {
    
    short x = 2147483647; // overflow
    short y = -2147483648; // underflow

    printf("%i\n", x);
    printf("%i\n", y);

    getchar();
    
    return 0;
}