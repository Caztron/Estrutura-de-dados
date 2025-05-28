#include<stdio.h>

int main(){
	int n, m, i, j;
	printf("----------Calculadora de Matrizes----------\n");
	printf("Digite as dimensoes (nxm): \n");
	scanf("%ix%i", &n, &m);
	
	float matriz1[n][m], matriz2[n][m], soma[n][m];
	printf("----------matriz 1----------\n");
	
		for (i=0; i<n; i++)
			for (j=0; j<m; j++) {
				printf("Elemento (%i,%i): \n", &i+1, &j+1);
				scanf("%f", &matriz1[i][j]);
			}
	
	printf("----------matriz 2----------\n");
	
		for (i=0; i<n; i++)
			for (j=0; j<m; j++) {
				printf("Elemento (%i,%i): \n", &i+1, &j+1);
				scanf("%f", &matriz2[i][j]);
			}
	
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) {
			soma[i][j] = matriz1[i][j]+matriz2[i][j];
		}
	 
	printf("Soma: \n");
		for(i=0; i<n;i++){
			printf("|");
			for(j=0; j<m; j++)
				printf("%10.2f", soma[i][j]);
	printf("|\n");
	}
}
