/*
Erros da Pergunta 10
	Pornto e virgula no final do for encerra a função
	Uso prematuro do return 0 encerra o codigo
	A Variavel "Arquivo" foi corrigida para "arquivo" pois não era igual a variavel declarada
	if ( arquivo = NULL ) foi trocado para if ( arquivo == NULL ) pois o objetivo não era fazer uma atribuição
*/

#include<stdio.h>

int main() {
	FILE *arquivo;
	int i;
	
	/*Abre um arquivo para gravação*/
	arquivo = fopen("dados.txt", "w");
	if ( arquivo == NULL){
		printf("Erro ao abrir o arquivo para escrita.");
		return 1;
	}
	
	/*Escreve os numeros de 1 a 5 */
	for (i=1; i<=5; i++) {
		fprintf(arquivo, "%d\n", i);
	}
	
	/*Fecha o arquivo apos a gravação*/
	fclose(arquivo);
	printf("Dados escritos em dados.txt \n");
	
	/*Abre o arquivo para leituira*/
	arquivo = fopen("dados.txt", "r");
	if (arquivo == NULL) {
		printf("Erro ao abrir arquivo para leitura. \n");
		return 1;
	}
	
	printf("\nLendo dados do arquivo: \n");
	
	/*Realiza a leitura e exibição do arquivo*/
	while (fscanf(arquivo, "%d", &i) ==1) {
		printf("%d\n", i);
	}
	
	/*Fecha o arquivo*/
	fclose(arquivo);
	printf("leitura do arquivo concluida.\n");
	
	
	return 0;
	
	
}
