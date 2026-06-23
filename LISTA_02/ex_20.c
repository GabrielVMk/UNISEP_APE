/*
20) Faça um programa que 
peça uma senha até que o usuário acerte 
(senha fixa no código).
*/


int main() {
    const int SENHA_CORRETA = 2026;
    int senha_digitada;

    
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);

        if (senha_digitada != SENHA_CORRETA) {
            printf("Senha incorreta! Tente novamente.\n\n");
        }
    } while (senha_digitada != SENHA_CORRETA);

    
    printf("Acesso liberado!\n");

    return 0;
}