#include <stdio.h>

int main() {
    char nomeAutomovel[50];
    float precoFabrica, precoFinal;

    // O nome do automóvel
    printf("Digite o nome do automóvel: ");
    scanf("%49[^\n]", nomeAutomovel); // Lê até 49 caracteres

    // O preço de fábrica
    printf("Digite o preço de fábrica do automóvel: R$ ");
    scanf("%f", &precoFabrica);

    // Calculo do preço final (preço de fábrica + 45% de impostos + 28% do revendedor)
    precoFinal = precoFabrica + (precoFabrica * 0.45) + (precoFabrica * 0.28);

    //  O nome do automóvel e o preço final
    printf("\nAutomóvel: %s\n", nomeAutomovel);
    printf("Preço final: R$ %.2f\n", precoFinal);

    return 0;
}
