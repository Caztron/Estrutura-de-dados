#include <stdio.h>

// Defini��o da fun��o imprimir
void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

int main() {
    int numeros[5] = {1, 2, 3, 4, 5}; // Declara��o e inicializa��o de um vetor de 5 elementos
    imprimir(numeros, 6); // Chamada da fun��o imprimir
    return 0;
}
