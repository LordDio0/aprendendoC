#include <stdio.h>

int main() {

    int valorcompra;

    printf("Digite o valor da compra: ");
    scanf("%d", &valorcompra);

    if (valorcompra > 100) {
        printf("Desconto de 10%% aplicado! O valor final e: R$ %.2f\n", valorcompra * 0.9);
    } else {
        printf("Valor da compra: R$ %d\n", valorcompra);
    }

    return 0;
}