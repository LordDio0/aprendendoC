#include <stdio.h>

int main() {
    int idade;
    float altura;
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("=== DADOS DO ALUNO ===\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}