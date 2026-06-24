#include <stdio.h>

int main() {
    int numero = 0;

    for(int i = 0; i <= 100; i++) {
        numero += i;
    }
    printf("Soma: %d\n", numero);
    return 0;
}