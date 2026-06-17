#include <stdio.h>

int main() {

    float temperatura;
    char situacao[] = "";

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura > 30.1) {
        situacao[0] = "quente";
    } else if (temperatura >= 15.1 && temperatura <= 30) {
        situacao[0] = "ameno";
    } else {
        situacao[0] = "frio";
    }
    printf("A temperatura está em %f, %s\n", temperatura, situacao);
    return 0;
}