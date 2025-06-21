#include <stdio.h>

// Definição da função imprimir
void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

int main() {
    int numeros[5] = {1, 2, 3, 4, 5}; // Declaração e inicialização de um vetor de 5 elementos
    imprimir(numeros, 6); // Chamada da função imprimir
    return 0;
}
