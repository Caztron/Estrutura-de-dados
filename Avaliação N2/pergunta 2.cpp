#include <stdio.h>
// o programa não compila com a troca do &x por x
void altera(int *v) {
    *v = *v + 1;
}

int main() {
    int x = 5;
    altera(&x); // Passa o endereço de x
    printf("%d", x);
    return 0;
}
