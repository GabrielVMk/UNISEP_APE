/*
19) Peça números até o usuário digitar 999. 
Mostre o maior número digitado.
*/

int main() {
    int numero, maior = 0;
    
    printf("Dijite um numero (999 para parar): \n");
    scanf("%d", &numero);
    
    if (numero == 999){
        printf("cabo");
    }else{
        maior = numero;
        
        while (1){
            printf("dijte um numero (999 para parar): \n");
            scanf("%d", &numero);
            
            if (numero == 999){
                break;
            }
            if (numero > maior){
                maior = numero;
            }
        }
        printf("O maior numero é: %d\n", maior);
    }
    return 0;
}