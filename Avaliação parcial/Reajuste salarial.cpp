#include <stdio.h>

int main() {
    char nome[50];
    float salario, salario_reajustado;

    // Nome do funcionário
    printf("Digite o nome do funcionário: ");
    scanf("%49[^\n]", nome);

    // Salário atual
    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);

    // Calculo do reajuste salarial
    if (salario < 1000.00) {
        salario_reajustado = salario * 1.20; // Aumento de 20%
        printf("\n%s teve um aumento de 20%%.\n", nome);
        printf("Salário reajustado: R$ %.2f\n", salario_reajustado);
    } 
    else if (salario >= 1000.00 && salario < 2000.00) {
        salario_reajustado = salario * 1.10; // Aumento de 10%
        printf("\n%s teve um aumento de 10%%.\n", nome);
        printf("Salário reajustado: R$ %.2f\n", salario_reajustado);
    } 
    else if (salario >= 2000.00 && salario < 3000.00) {
        salario_reajustado = salario * 1.05; // Aumento de 5%
        printf("\n%s teve um aumento de 5%%.\n", nome);
        printf("Salário reajustado: R$ %.2f\n", salario_reajustado);
    } 
    else {
        printf("\n%s não tem direito a aumento.\n", nome);
    }

    return 0;
}
