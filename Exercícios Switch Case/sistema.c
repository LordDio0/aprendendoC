#include <stdio.h>

int main () {

    int opcao;
    printf("Confirme a operacao desejada:\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Consultar notas\n");
    printf("3 - Atualizar dados\n");
    printf("4 - Sair\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Cadastro de aluno selecionado.\n");
            break;
        case 2:
            printf("Consulta de notas selecionada.\n");
            break;
        case 3:
            printf("Atualização de dados selecionada.\n");
            break;
        case 4:
            printf("Saindo do sistema. Até logo!\n");
            break;
        default:
            printf("Opção inválida. Por favor, selecione uma opção entre 1 e 4.\n");
    }
    return 0;
}