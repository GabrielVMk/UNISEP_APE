#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int vetor[n];
    
    for(i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    int numeroMaisRepetido = vetor[0];
    int maiorFrequencia = 0;
    
    for(i = 0; i < n; i++) {
        int contagemAtual = 0;
        
        for(j = 0; j < n; j++) {
            if(vetor[i] == vetor[j]) {
                contagemAtual++;
            }
        }
        
        if(contagemAtual > maiorFrequencia) {
            maiorFrequencia = contagemAtual;
            numeroMaisRepetido = vetor[i];
        }
    }
    
    printf("\nO numero que mais se repete e: %d\n", numeroMaisRepetido);
    printf("Ele aparece %d vezes.\n", maiorFrequencia);
    
    return 0;
}