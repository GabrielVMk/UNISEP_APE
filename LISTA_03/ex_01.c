int main() {int numero[5];
    
    for(int i = 0; i < 5; i++){
        printf("dijite um numero para armazena-lo: ");
        scanf("%d", &numero[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("Posição [%d]: %d\n", i, numero[i]);
    }
    return 0;
}