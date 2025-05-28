#include <stdio.h>

int main(){
	float area, baseMaior, baseMenor, altura;
	printf("Digite a base menor(cm) : ");
	scanf("%f", &baseMenor);
	printf("Digite a base Maior(cm) : ");
	scanf("%f", &baseMaior);
	printf("Digite a altura(cm) : ");
	scanf("%f", &altura);
	area = (baseMaior + baseMenor) * altura / 2;
	printf("Area = %2.f cm quadrados \n", area);
}


