#include <stdio.h>

int main() {
    int mat[3][3], i, j; // Declara uma matriz 3x3 (índices 0, 1, 2)

    for (i = 0; i <= 3; i++) { // Loop para i
        for (j = 0; j <= 3; j++) { // Loop para j
            mat[i][j] = i + j;
        }
    }

    printf("%d\n", mat[2][2]);
    return 0;
}
