#include<stdio.h>

void separador(int tamanho){
	int i;
	for (i=0; i<tamanho; i++)
		putchar('-');
}

int fatorial(int numero){
	int i, resultado=1;
	for(i=numero; i>1; i--)
		resultado*=i;
	return resultado;
}

int main(){
	int valor;
	separador(15);
	printf(" Fatorial ");
	separador(15);
	printf("\nDigite um valor inteiro: ");
	scanf("%i", &valor);
	separador(40);
	printf("\n%i! = %i\n", valor, fatorial(valor));
	separador(40);
	putchar('\n');
	return 0;
}
