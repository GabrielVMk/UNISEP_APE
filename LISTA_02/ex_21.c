/*21) Crie um menu simples com opções:

1: Dizer "Olá"
2: Dizer "Tudo bem?"
3: Sair
O programa deve repetir até o usuário escolher sair.
*/

int main() {
    int opcao;
    
    do {
        printf("--MENU DE OPÇÕES--\n");
        printf("1: dizer olá \n");
        printf("2: dizer tudo bem \n");
        printf("3: sair \n");
        printf("escolha uma: ");
        scanf("%d", &opcao);
        
        switch (opcao){
            case 1:
                printf("\nolá\n\n");
                break;
            case 2:
                printf("\ntudo bem\n\n");
                break;;
            case 3:
                printf("\ncabo\n\n");
                break;
            default:
                printf("\n dejite uma opção valida da lista\n\n");
                break;
        }
    }while (opcao != 3);
    
    return 0;
}