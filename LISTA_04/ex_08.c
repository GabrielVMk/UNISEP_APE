#include <stdio.h>
#include <stdlib.h>

float media(int vetor[], int tamanho){
    int soma = 0;
    for (int i = 0; 1 < tamanho; i++){
        soma += vetor[i];
    }
    return (float)soma / tamanho;
}

int main(){
    int v[] = {10, 20, 30, 40, 50};
    int tam = 5;
    printf("Media: %.2f\n", media(v, tam));
    return 0;

}