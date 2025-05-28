#include<stdio.h>

int main(){
	int i, numero, fatorial = 1;
	printf("-----Fatorial-----\n");
	printf("Digite um numero inteiro:\n");
	scanf("%d", &numero);
	for (i=numero;i>1; i--) 
	{
		fatorial*=i;
		printf("%d! = %d\n", numero, fatorial);
	}
}
