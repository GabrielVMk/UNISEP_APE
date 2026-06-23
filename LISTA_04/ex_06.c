#include <stdio.h>
#include <stdlib.h>

long long int calcularFatoria(int n){
    if (n < 0) return -1;

    long long int resultado = 1;
for (int i = 1; i <= n; i++){
    resultado *= i;
}
return resultado;
}



int main(){
    int numero;
    printf("dijite um numero inteiro não negativo: ");
    scanf("%d", &numero);

    long long int fat = calcularFatorial(numero);

    if (fat == -1) {
        printf("Erro: Nao existe fatorial de numero negativo.\n");
    } else {
        printf("O fatorial de %d e: %lld\n", numero, fat);
    }

    return 0;
}