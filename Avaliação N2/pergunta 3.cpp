#include <stdio.h>
// a divisao de inteiros retorna um valor inteiro

float dividir(int a, int b) {
    return a / b;
}

int main() {
    printf("%.2f\n", dividir(5, 2));
    return 0;
}
