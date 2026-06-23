/*
17) Peça números até que o usuário digite um número negativo. 
Exiba quantos números foram digitados.
*/

int main() {
    int numero;
    int contador = 0;
    
    printf("dijite numeros inteiros, quanso quiser parar dijite um numero negativo: ");
    
    do{
        printf("dijite um numero: ");
        scanf("%d", &numero);
        
        if (numero >= 0){
            contador++;
        }
    } while (numero >= 0);
    
    printf("\nvoce dojitou %d numero(s) positivo(s).\n", contador);
    
    return 0;
}