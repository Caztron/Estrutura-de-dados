#include <stdio.h>

int main() {
    int numero;

    // numero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verificação
    if (numero >= 20 && numero <= 40) {
        printf("O número %d esta na faixa entre 20 e 40.\n", numero);
    } else {
        printf("O número %d não esta na faixa entre 20 e 40.\n", numero);
    }

    return 0;
}
