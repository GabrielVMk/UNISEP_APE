#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, notas100, notas50, notas20, notas10, notas5, notas1;

    printf("dijite o valor para sacar: ");
    scanf("%d",valor);

    notas100 = valor /100;
    valor %= 100;

    notas50 = valor /50;
    valor %= 50;

    notas20 = valor /20;
    valor %= 20;

    notas10 = valor /10;
    valor %= 10;

    notas5 = valor /5;
    valor %= 5;

    notas1 = valor;

    printf("\nNotas necessarias\n\n");
    if (notas100 > 0) printf("Notas de R$ 100: %d\n", notas100);
    if (notas50 > 0) printf("Notas de R$ 50: %d\n", notas50);
    if (notas20 > 0) printf("Notas de R$ 20: %d\n", notas20);
    if (notas10 > 0) printf("Notas de R$ 10: %d\n", notas10);
    if (notas5 > 0) printf("Notas de R$ 5: %d\n", notas5);
    if (notas1 > 0) printf("Notas de R$ 1: %d\n", notas1);

    return 0;
}   