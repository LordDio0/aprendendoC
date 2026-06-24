#include <stdio.h>

int main() {

    int mensagem;

    printf("Qual o motivo da mensagem no setor de suporte?\n");
    printf("1 - Falha na Internet\n");
    printf("2 - Faturas em aberto\n");
    printf("3 - Alteração de cadastro\n");
    scanf("%d", &mensagem);

    switch (mensagem) {
        case 1:
            printf("Repassando para o setor técnico de falhas na internet.\n");
            break;
        case 2:
            printf("Repassando para o setor técnico de faturas em aberto.\n");
            break;
        case 3:
            printf("Repassando para o setor técnico de alteração de cadastro.\n");
            break;
        default:
            printf("Motivo inválido. Por favor, selecione um motivo válido (1, 2 ou 3).\n");
    }
    return 0;
}