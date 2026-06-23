#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[6];
    int maior = INT_MIN;
    int segundo_maior = INT_MIN;
    int i;

    
    printf("Digite 6 valores inteiros:\n");
    for (i = 0; i < 6; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);

        
        if (vetor[i] > maior) {
            segundo_maior = maior; 
            maior = vetor[i];      
        } else if (vetor[i] > segundo_maior && vetor[i] != maior) {
            segundo_maior = vetor[i]; 
    }

    
    printf("\n--- Resultados ---\n");
    if (segundo_maior == INT_MIN) {
        printf("Não foi possível encontrar um segundo maior valor (todos os números podem ser iguais).\n");
    } else {
        printf("O maior valor é: %d\n", maior);
        printf("O segundo maior valor é: %d\n", segundo_maior);
    }

    return 0;
}
