#include<stdio.h>


int main (){
	
	int a,b,c;
	
	printf("Digite o primeiro numero:\t");
	scanf("%d", &a);
	printf("\nDigite o segundo numero:\t");
	scanf("%d", &b);
	printf("\nDigite o terceiro numero:\t");
	scanf("%d", &c);
	if (a > b) 
		if (a > c) 
			printf("\nO Maior e %d",a);
		else 
			printf("\nO Maior e %d",c);
	else
		if (b > c)
			printf("\nO Maior e %d", b);
		else 
			printf("\nO Maior e %d", c);
		
			
}
