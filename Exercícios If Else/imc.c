#include <stdio.h>

int main() {

    float altura, peso;
    char imc[] = "";

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    
    float indice = peso / (altura * altura);

    if (indice > 30) {
        imc[0] = "Obesidade";
    } else if (indice >= 25.1 && indice <= 30) {
        imc[0] = "Sobrepeso";
    } else if (indice >= 18.6 && indice <= 25) {
        imc[0] = "Peso normal";
    } else {
        imc[0] = "Abaixo do peso";
    }
    printf("Seu IMC e %f, %s\n", indice, imc);
    
    return 0;
}