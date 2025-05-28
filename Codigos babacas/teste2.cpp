#include<stdio.h>

int main(){
	float base, area, altura;
	printf("Digite a base: \n");
	scanf("%f", &base);
	printf("digite a altura: \n");
	scanf("%f", &altura);
	area = (base*altura) /2;
	printf("%.2f e a base", area);
	
	return 0;
	
}
