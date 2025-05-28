#include <stdio.h>

int main() {
    int numero;

    // numero
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verificação 10, 20 e 30
    if (numero == 10) {
        printf("O numero e igual a 10.\n");
    } 
    else if (numero == 20) {
        printf("O numero e igual a 20.\n");
    }
    else if (numero == 30) {
        printf("O numero e igual a 30.\n");
    }
    else {
        printf("Numero invalido.\n");
    }

    return 0;
}
