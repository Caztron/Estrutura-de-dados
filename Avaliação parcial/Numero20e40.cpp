#include <stdio.h>

int main() {
    int numero;

    // numero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica��o
    if (numero >= 20 && numero <= 40) {
        printf("O n�mero %d esta na faixa entre 20 e 40.\n", numero);
    } else {
        printf("O n�mero %d n�o esta na faixa entre 20 e 40.\n", numero);
    }

    return 0;
}
