#include <stdio.h>
int calcularQuadrado(int n) {
    return n * n;
}
int main() {
    int numero = 5;
    printf("O quadrado de %d é %d\n", numero, calcularQuadrado(numero));
    return 0;
}
