#include <stdio.h>

int main() {

    float numeros[2];
    printf("Digite dois numeros para realizar uma operacao: ");
    scanf("%f", &numeros[0]);
    scanf("%f", &numeros[1]);

    char operador;
    printf("Digite o operador desejado (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("Resultado: %.2f\n", numeros[0] + numeros[1]);
            break;
        case '-':
            printf("Resultado: %.2f\n", numeros[0] - numeros[1]);
            break;
        case '*':
            printf("Resultado: %.2f\n", numeros[0] * numeros[1]);
            break;
        case '/':
            if (numeros[1] != 0) {
                printf("Resultado: %.2f\n", numeros[0] / numeros[1]);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operador inválido. Por favor, selecione um operador válido (+, -, *, /).\n");
    }

    return 0;
}