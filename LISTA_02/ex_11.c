
int main() {
    int n, i;
    long long fatorial = 1; // Usamos long long para suportar números maiores

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial para numeros negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i; // fatorial = fatorial * i;
        }
        printf("O fatorial de %d e: %lld\n", n, fatorial);
    }

}