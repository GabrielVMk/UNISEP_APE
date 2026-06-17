int main() {
    
    int numero[8];
    int soma = 0;
    int i = 0;
    
    
    for (int i = 0; i < 8; i++){
        printf("dijite um numero para armazena-lo: ");
        scanf("%d", &numero[i]);
    }
    
    for (int i = 0; i < 8; i++) {
        soma += numero[i];
        
    }
    printf("\nA soma de todos os números é: %d\n", soma);
    return 0;
}