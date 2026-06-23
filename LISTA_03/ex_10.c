#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int i, j, temp;

    
    printf("Digite 10 números:\n");
    for(i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(vetor[j] > vetor[j+1]) { 
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

    
    printf("\nNúmeros em ordem crescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}