#include<stdio.h>

int calcularQuadrado (int n) { /*Anteriormente a função foi declarada com o tipo void que não retorna valor*/
	return n * n;
}

int main () {
	int numero =5;
	printf("O quadrado de %d e %d\n", numero, calcularQuadrado(numero)); /*Aqui trocamos a variavel declarada como (NUMERO) para o correto (numero), havia um erro de compilação por causa das variaveis */
	return 0;
}
