#include <stdio.h>

int main() {
    float numero;

    // O numero
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Positivo, negativo ou nulo
    if (numero > 0) {
        printf("O numero %.2f e POSITIVO.\n", numero);
    } 
    else if (numero < 0) {
        printf("O numero %.2f e NEGATIVO.\n", numero);
    } 
    else {
        printf("O numero e NULO (zero).\n");
    }

    return 0;
}
