#include <stdio.h>
#include <stdlib.h>

void inverter(char vetor[], int tamanho) {
    int inicio = 0, fim = tamanho - 1;
    while (inicio < fim) {
        char temp = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char v[] = {'a', 'b', 'c', 'd', 'e'};
    int tam = 5;
    inverter(v, tam);
    for (int i = 0; i < tam; i++) {
        printf("%c ", v[i]);
    }
    return 0;
}