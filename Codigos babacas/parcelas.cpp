#include<stdio.h>

int main (){
	float prazo = 0;
	int vezes = 0;
	printf("-----------venda parcelada----------\n");
	printf("Digite a quantidade de parcelas: \n");
	scanf("%i", &vezes);
	printf("Digite o valor da parcela: \n");
	scanf("%f", &prazo);
	prazo = prazo * vezes;
	printf("%g e o valor das parcelas", prazo);
	
	
}
