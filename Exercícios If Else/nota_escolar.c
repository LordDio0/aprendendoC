#include <stdio.h>

int main() {

    int nota;
    char situacao[] = "";

    printf("Digite sua nota de 0 a 100: ");
    scanf("%d", &nota);

    if (nota >= 60 && nota <= 100) {
        printf("Aprovado!\n");
    }else if (nota >= 40 && nota < 59) {
        printf("Recuperação!\n");
    } else if (nota >= 0 && nota < 40) {
        printf("Reprovado!\n");
    } else {
        printf("Nota invalida! Digite um valor entre 0 e 100.\n");
    }

    printf("=== Situação do aluno ===\n");
    printf("Com a nota %d, o aluno está %s\n", nota, situacao);
    return 0;
}