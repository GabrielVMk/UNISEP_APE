int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("dijite um numero positivo.\n");
    } else {
        
        printf("Contagem regressiva:\n");
        for (int i = numero; i >= 0; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}