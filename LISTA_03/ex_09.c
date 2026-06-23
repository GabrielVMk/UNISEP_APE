#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero[10];
    int i;

    for (i = 0; i < 10; i++){
        printf("dijite o %d° numeros: ");
        scanf("%d", &numero);

        if (numero[i] < 0){
            numero[i] = 0;
        }
    }

    printf("\nNegativos por zero\n\n");
    for (i = 0; i < 10; i++){
        printf("numero %d: %d\n", i + 1, numero[i]);
    }

    return 0;
}