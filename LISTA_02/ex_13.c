int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("A soma dos numeros impares entre 1 e 100 é: %d\n", soma);
    return 0;
}