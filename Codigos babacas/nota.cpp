#include<stdio.h>
#include<stdlib.h>

int main() {
	float nota;
	printf("Digite sua nota final: ");
	scanf("%f", &nota);
	if (nota >= 60) {
		printf("Aprovado");
	}
	else if(nota >=40) {
		printf("Exame final");
	}
	else {
		printf("reprovado");
	}
}
