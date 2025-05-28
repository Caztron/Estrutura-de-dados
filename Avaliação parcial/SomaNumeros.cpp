#include <stdio.h>

int main() {
    float num1, num2, soma, resultado;

    // Dois numeros
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Adição
    soma = num1 + num2;

    // Condição 
    if (soma > 20) {
        resultado = soma + 8;
        printf("A soma (%.2f) e maior que 20. Resultado final: %.2f\n", soma, resultado);
    } else {
        resultado = soma - 5;
        printf("A soma (%.2f) e menor ou igual a 20. Resultado final: %.2f\n", soma, resultado);
    }

    return 0;
}
