#include <stdio.h>

int main() {

    int idade_atual;
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade atual: ");
    scanf("%d", &idade_atual);

    int idade_futura = idade_atual + 10;
    
    printf("Nome: %s\n", nome);
    printf("Idade atual: %d anos\n", idade_atual);
    printf("Idade daqui a 10 anos: %d anos\n", idade_futura);

    return 0;
}