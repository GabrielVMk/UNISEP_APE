int main() {
    
    int numero[6];
    int menor = 0;
    
    
    for (int i = 0; i < 6; i++){
        printf("dijite um numero para armazena-lo: ");
        scanf("%i", &numero[i]);
    }
    
    menor = numero[0];
    
    for (int i = 0; i < 6; i++) {
        if (numero[i] < menor){
            menor = numero[i];
        }
    }
    
    for (int i = 0; i < 6; i++){
        printf("%i\n", numero[i]);
    }
    
    printf("\nO menor numero é o %d\n", menor);
    
    return 0;
}