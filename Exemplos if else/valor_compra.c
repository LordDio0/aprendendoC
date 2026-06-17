#include <stdio.h>

int main() {

    float valor_compra, frete;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    if (valor_compra >= 150){
        printf("Frete Gratis!\n");
    }else{
        frete = valor_compra * 0.1;
        printf("Valor do frete: R$ %.2f\n", frete);
    }
    return 0;
}