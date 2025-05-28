#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool par;
	int numero;
	printf("Digite um inteiro: ");
	scanf("%i", &numero);
	//par = numero%2 == 0; 
	if (numero%2)
		printf("o numero %i e impar", numero);
	else 
	printf("o numero %i e par", numero);
}
