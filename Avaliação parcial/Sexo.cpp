#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char sexo;

    // Solicita e lê o nome da pessoa
    printf("Digite o nome: ");
    scanf("%99[^\n]", nome); // Lê até 99 caracteres ou até encontrar uma quebra de linha

    // Solicita o sexo (M/F)
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo); // O espaço antes do %c ignora espaços em branco e quebras de linha

    // Verificação do sexo 
    if (sexo == 'M' || sexo == 'm') {
        printf("Ilmo. Sr. %s\n", nome);
    } 
    else if (sexo == 'F' || sexo == 'f') {
        printf("Ilma. Sra. %s\n", nome);
    } 
    else {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
    }
    
    return 0;
}
