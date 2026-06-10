#include <stdio.h>

int main() {
    int numeroInteiro = 10;
    float numeroReal = 50.49;
    char umaLetra = 'S';
    char escola[] = "Senai";
    _Bool alunoAprovado = 1;
    printf("O numero inteiro é: %d\n", numeroInteiro);
    printf("O numero real é: %.2f\n", numeroReal);  
    printf("A letra é: %c\n", umaLetra);
    printf("A escola é: %s\n", escola);
    printf("O aluno está aprovado: %s\n", alunoAprovado ? "Sim" : "Nao");
    return 0;
}
