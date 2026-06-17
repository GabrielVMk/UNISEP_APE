int main() {
    
    int numero[10];
    int soma = 0;
    float media;
    
    
    for (int i = 0; i < 10; i++){
        printf("dijite um numero para armazena-lo: ");
        scanf("%i", &numero[i]);
        soma += numero[i];
    }

    media = (float)soma / 10;
    
    printf("\nA media dos numeros eh: %.2f\n", media);
    
    return 0;
}