#include<stdio.h>

int calcularQuadrado (int n) { /*Anteriormente a fun��o foi declarada com o tipo void que n�o retorna valor*/
	return n * n;
}

int main () {
	int numero =5;
	printf("O quadrado de %d e %d\n", numero, calcularQuadrado(numero)); /*Aqui trocamos a variavel declarada como (NUMERO) para o correto (numero), havia um erro de compila��o por causa das variaveis */
	return 0;
}
