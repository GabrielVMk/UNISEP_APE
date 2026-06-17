int main() {
    
    int numero[10];
    
    for(int i = 0; i < 10; i++){
        printf("dijite um numero para armazena-lo: ");
        scanf("%d", &numero[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if(numero[i] % 2 == 0){
            printf("Posição [%d]: %d\n", i, numero[i]);
        }
        
    }
    return 0;
}