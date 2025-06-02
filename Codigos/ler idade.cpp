#include<stdio.h>
#include<conio.h>

int main() {
    int idade;
    char nome[30];
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("%s sua idade e %d anos \n", nome, idade);
}