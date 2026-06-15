#include <stdio.h>

int main() {

    char nome[50];
    char cargo[50];
    float salario;

    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);
    printf("Digite o cargo do funcionário: ");
    scanf("%s", cargo);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    printf("=== DADOS DO FUNCIONÁRIO ===\n");
    printf("Nome: %s\n", nome);
    printf("Cargo: %s\n", cargo);
    printf("Salário: R$ %.2f\n", salario);

    return 0;
}
