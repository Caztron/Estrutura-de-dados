#include <stdio.h>

int main() {
    char nomeAutomovel[50];
    float precoFabrica, precoFinal;

    // O nome do autom�vel
    printf("Digite o nome do autom�vel: ");
    scanf("%49[^\n]", nomeAutomovel); // L� at� 49 caracteres

    // O pre�o de f�brica
    printf("Digite o pre�o de f�brica do autom�vel: R$ ");
    scanf("%f", &precoFabrica);

    // Calculo do pre�o final (pre�o de f�brica + 45% de impostos + 28% do revendedor)
    precoFinal = precoFabrica + (precoFabrica * 0.45) + (precoFabrica * 0.28);

    //  O nome do autom�vel e o pre�o final
    printf("\nAutom�vel: %s\n", nomeAutomovel);
    printf("Pre�o final: R$ %.2f\n", precoFinal);

    return 0;
}
