#include <stdio.h>

int main() {

    char modelo[50];
    int ano;
    float valor;

    printf("Digite o modelo do veículo: ");
    scanf("%s", modelo);
    printf("Digite o ano do veículo: ");
    scanf("%d", &ano);
    printf("Digite o valor do veículo: ");
    scanf("%f", &valor);
    
    printf("=== DADOS DO VEÍCULO ===\n");
    printf("Modelo: %s\n", modelo);
    printf("Ano: %d\n", ano);
    printf("Valor: R$ %.2f\n", valor);

    return 0;
}