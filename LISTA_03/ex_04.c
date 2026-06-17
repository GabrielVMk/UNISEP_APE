int main() {
    
    int numero[6];
    int maior = 0;
    int i = 0;
    
    
    for (int i = 0; i < 6; i++){
        printf("dijite um numero para armazena-lo: ");
        scanf("%d", &numero[i]);
    }
    
    maior = numero[0];
    
    for (int i = 0; i < 6; i++) {
        if (numero[i] > maior){
            maior = numero[i];
        }
    }
    
    for (int i = 0; i < 6; i++){
        printf("%d", numero[i]);
    }
    
    printf("\nO maior numero é o %d\n", maior);
    
    return 0;
}