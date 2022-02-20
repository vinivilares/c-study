#include <stdio.h>

int main(void) {
    int x = 1;
    int y = 0;

    y = ++x;

    printf("x = %i\n", x);
    printf("y = %i\n", y);
    
    return 0;
}