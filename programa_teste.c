#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade = 16;
    float altura = 1.75;
    char inicial = 'B';
    char nome[] = "Bruno";

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial: %c\n", inicial);
    printf("Nome: %s\n", nome);

    return 0;
}