#include <stdio.h>

int main(void) {

    char teste[] = {'b', 'r', 'a', 's', 'i', 'l'};
    
    for (int i = 0; i < 6; i++) {
        printf("%c", teste[i]);
    }
    printf("\n");
    return 0;
}