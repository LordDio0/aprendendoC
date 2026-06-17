#include <stdio.h>

int main() {

    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 9) {
        printf("Conceito A\n");
    } else if (nota >= 7) {
        printf("Conceito B\n");
    } else {
        printf("Conceito C\n");
    }

    return 0;
}