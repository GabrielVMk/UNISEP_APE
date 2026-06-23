/*
16) Faça um programa que peça números ao usuário até que ele digite 0. No final, 
mostre a soma de todos os números digitados.
*/

int main() {
    int numero, soma = 0;
    
    do {
        printf("dijite um numero (ou 0 para sair): ");
        scanf("%d", &numero);
        
        soma += numero;
        
    }while (numero != 0);
    
        printf("A soma de todos os numeros é: %d\n", soma);
        
    
    return 0;
}