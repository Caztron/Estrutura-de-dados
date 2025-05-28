#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char sexo;

    // Solicita e l� o nome da pessoa
    printf("Digite o nome: ");
    scanf("%99[^\n]", nome); // L� at� 99 caracteres ou at� encontrar uma quebra de linha

    // Solicita o sexo (M/F)
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo); // O espa�o antes do %c ignora espa�os em branco e quebras de linha

    // Verifica��o do sexo 
    if (sexo == 'M' || sexo == 'm') {
        printf("Ilmo. Sr. %s\n", nome);
    } 
    else if (sexo == 'F' || sexo == 'f') {
        printf("Ilma. Sra. %s\n", nome);
    } 
    else {
        printf("Sexo inv�lido. Use 'M' para masculino ou 'F' para feminino.\n");
    }
    
    return 0;
}
