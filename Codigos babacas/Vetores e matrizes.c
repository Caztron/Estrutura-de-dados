#include<stdio.h>

int main (){
	int n, m, i, j;
	printf("-------- Soma de Matrizes --------\n");
	printf("Digite as dimensoes (nxm()");
	scanf("%ix%i", &n, &m);
	float matriz1[n] [m], matriz2[n][m], soma [n] [m];
	printf("--------Matriz1--------\n");
	for (i=0; i<n; i++)
		for(j=0; j<n; j++)
		{
			printf("Elemento (%i, %i): ", i+1, j+1);
			scanf("%f", &matriz1[i][j]);
		}
		
	printf("--------Matriz2--------\n");
	for (i=0; i<n; i++)
		for(j=0; j<n; j++)
	{
		printf("Elemento (%i, %i): ", i+1, j+1);
		scanf("%f", &matriz2[i][j]);
	}
}
