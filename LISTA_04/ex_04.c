#include <stdio.h>
#include <stdlib.h>

int encontraMaior(int num1, int num2, int num3) {
    int maior = num1;

    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    return maior;
}

int main() {
    int a, b, c, resultado;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    resultado = encontraMaior(a, b, c);

    printf("O maior número é: %d\n", resultado);

    return 0;
}