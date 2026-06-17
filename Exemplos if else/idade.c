#include <stdio.h>

int main() {

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Voce e menor de idade.\n");
    } else {
        printf("Voce e maior de idade e tem %d anos.\n", idade);
    }

    return 0;
}