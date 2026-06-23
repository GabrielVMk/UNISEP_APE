#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n) {
    if (n <= 1) {
        return 0; 
    }
    

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    
    return 1; 
}

int main() {
    int numero;

    printf("Digite um numero para verificar: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d e um numero primo!\n", numero);
    } else {
        printf("%d Nao e um numero primo.\n", numero);
    }

    return 0;
}