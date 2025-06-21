#include <stdio.h>

int main() {
    int quantia;
    int notas100, notas50, notas10, notas5, notas1;

    printf("Quantia? R$ ");
    scanf("%d", &quantia);

    // Calcula a quantidade de cada cédula
    notas100 = quantia / 100;
    quantia %= 100; // Atualiza a quantia restante

    notas50 = quantia / 50;
    quantia %= 50;

    notas10 = quantia / 10;
    quantia %= 10;

    notas5 = quantia / 5;
    quantia %= 5;

    notas1 = quantia / 1;
    // quantia %= 1; // Não é necessário, a quantia restante já será 0 ou 1 aqui

    // Imprime o resultado apenas para as cédulas que foram utilizadas
    if (notas100 > 0) {
        printf("%d cédula%s de R$100,00\n", notas100, (notas100 > 1 ? "s" : ""));
    }
    if (notas50 > 0) {
        printf("%d cédula%s de R$50,00\n", notas50, (notas50 > 1 ? "s" : ""));
    }
    if (notas10 > 0) {
        printf("%d cédula%s de R$10,00\n", notas10, (notas10 > 1 ? "s" : ""));
    }
    if (notas5 > 0) {
        printf("%d cédula%s de R$5,00\n", notas5, (notas5 > 1 ? "s" : ""));
    }
    if (notas1 > 0) {
        printf("%d cédula%s de R$1,00\n", notas1, (notas1 > 1 ? "s" : ""));
    }

    return 0;
}
