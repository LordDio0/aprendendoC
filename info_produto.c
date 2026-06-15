#include <stdio.h>

int main() {

    char nome[50];
    float preco;
    int quantidade;

    printf("Digite o nome do produto: ");
    scanf("%s", nome);
    
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &quantidade);

    printf("=== INFORMAÇÕES DO PRODUTO ===\n");
    printf("Nome: %s\n", nome);
    printf("Preco: R$ %.2f\n", preco);
    printf("Quantidade em estoque: %d unidades\n", quantidade);

    return 0;
}