#include <stdio.h>
#include <string.h> 

int main() {
    char login[20];
    int senha;

    //  O login
    printf("Digite o login: ");
    scanf("%19s", login);  // Le no m�ximo 19 caracteres

    // Senha
    printf("Digite a senha: ");
    scanf("%d", &senha);

    // Verifica��o do login e senha
    if (strcmp(login, "Admin") == 0 && senha == 5432) {
        printf("Acesso permitido!\n");
    } else {
        printf("Acesso negado! Login ou senha incorretos.\n");
    }

    return 0;
}
