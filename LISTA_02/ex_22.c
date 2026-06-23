/*
22) Solicite um número positivo. 
Caso o usuário digite um número inválido, peça novamente.
*/

int main() {
    int numero;
    
    do {
        printf("dijite um numero positivo: ");
        scanf("%d", &numero);
        
        if (numero <= 0){
            printf("\ndijite um numero valido\n\n");
        }
    }while (numero <= 0);
    
    printf("\nnumero valido: %d\n\n");
    
    return 0;
}