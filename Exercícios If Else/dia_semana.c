#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numero);

    if (numero == 1) {
        printf("Domingo\n");
    } else if (numero == 2) {
        printf("Segunda-feira\n");
    } else if (numero == 3) {
        printf("Terca-feira\n");
    } else if (numero == 4) {
        printf("Quarta-feira\n");
    } else if (numero == 5) {
        printf("Quinta-feira\n");
    } else if (numero == 6) {
        printf("Sexta-feira\n");
    } else if (numero == 7) {
        printf("Sabado\n");
    } else {
        printf("Numero invalido! Digite um valor entre 1 e 7.\n");
    }
    
    return 0;
}