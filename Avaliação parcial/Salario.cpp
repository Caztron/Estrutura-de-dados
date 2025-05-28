#include <stdio.h>
#include <math.h>

int main() {
    float horas_trabalhadas, valor_hora, salario_bruto, salario_liquido;
    float desconto_inss = 0, desconto_irrf = 0;

    // Horas trabalhadas e o valor da hora
    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);

    // Calculo do salário bruto
    salario_bruto = horas_trabalhadas * valor_hora;

    // Cálculo do desconto do INSS
    if (salario_bruto <= 1320.00) {
        desconto_inss = salario_bruto * 0.075;
    } else if (salario_bruto <= 2571.29) {
        desconto_inss = (1320.00 * 0.075) + ((salario_bruto - 1320.00) * 0.09);
    } else if (salario_bruto <= 3856.94) {
        desconto_inss = (1320.00 * 0.075) + (1251.29 * 0.09) + ((salario_bruto - 2571.29) * 0.12);
    } else if (salario_bruto <= 7507.49) {
        desconto_inss = (1320.00 * 0.075) + (1251.29 * 0.09) + (1285.65 * 0.12) + ((salario_bruto - 3856.94) * 0.14);
    } else {
        desconto_inss = 7507.49 * 0.14; // Teto do INSS
    }

    // Salário base para cálculo do IRRF (Salário Bruto - INSS)
    float base_irrf = salario_bruto - desconto_inss;

    // Cálculo do desconto do IRRF (Tabela 2023)
    if (base_irrf <= 2112.00) {
        desconto_irrf = 0;
    } else if (base_irrf <= 2826.65) {
        desconto_irrf = (base_irrf * 0.075) - 158.40;
    } else if (base_irrf <= 3751.05) {
        desconto_irrf = (base_irrf * 0.15) - 370.40;
    } else if (base_irrf <= 4664.68) {
        desconto_irrf = (base_irrf * 0.225) - 651.73;
    } else {
        desconto_irrf = (base_irrf * 0.275) - 884.96;
    }

    // Cálculo do salário líquido
    salario_liquido = salario_bruto - desconto_inss - desconto_irrf;

    // Resultados
    printf("\nSalario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto INSS: R$ %.2f\n", desconto_inss);
    printf("Desconto IRRF: R$ %.2f\n", desconto_irrf);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
