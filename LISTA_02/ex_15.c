int main() {
    int numero, soma = 0;
    
    printf("dijite os numeros:");
    scanf("%d", &numero);
    while (numero != 0){
        soma += numero;
        printf("dijite o proximo: ");
        scanf("%d", &numero);
        
    }
    printf("A soma de tudo da: %d\n.", soma);
}