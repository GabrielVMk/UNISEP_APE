#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int i, j, aux;

    
    for(i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    
    printf("\nNumeros em ordem decrescente:\n");
    for(i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}