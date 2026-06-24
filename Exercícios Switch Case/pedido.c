#include <stdio.h>

int main() {

    int produto;
    int quantidade;

    printf("Digite qual produto você deseja:\n");
    printf("1 - Pastel\n");
    printf("2 - Pizza\n");
    printf("3 - Coxinha\n");
    printf("4 - Dog\n");
    scanf("%d", &produto);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch (produto) {
        case 1:
            printf("O valor total de %d pastéis é R$%.2f.\n", quantidade, quantidade * 5.00);
            break;
        case 2:
            printf("O valor total de %d pizzas é R$%.2f.\n", quantidade, quantidade * 8.00);
            break;
        case 3:
            printf("O valor total de %d coxinhas é R$%.2f.\n", quantidade, quantidade * 4.00);
            break;
        case 4:
            printf("O valor total de %d dogs é R$%.2f.\n", quantidade, quantidade * 8.00);
            break;
        default:
            printf("Produto inválido. Por favor, selecione um produto válido (Pastel, Pizza, Coxinha, Dog).\n");
    }

    return 0;
}