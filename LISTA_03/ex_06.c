int main() {
    
    int numero[10];
    int positivo = 0;
    
    
    for (int i = 0; i < 10; i++){
        printf("dijite um numero para armazena-lo: ");
        scanf("%i", &numero[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        if (numero[i] > 0){
            positivo++;
        }
    }
    
    printf("\nVocê dijitou %i numeros positivos \n", positivo);
    
    return 0;
}