/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float n1, n2, resultado;
    int operacao;
    
    printf("dijite seu 1° número: ");
    scanf("%f", &n1);
    
    printf("dijite seu 2° número: ");
    scanf("%f", &n2);
    
    printf("Agora escolha a operação\n adição-1\n subtração-2\n multiplicaçaõ-3\n divisão-4\n Dijite sua opção: ");
    scanf("%i", &operacao);
    
    if (operacao == 1){
        resultado = n1 + n2;
        printf("o resultado é: %.2f\n", resultado);
    }
    
    else if (operacao == 2){
        resultado = n1 - n2;
        printf("o resultado é: %.2lf\n", resultado);
    }
    
    else if (operacao == 3){
        resultado = n1 * n2;
        printf("o resultado é %.2lf\n", resultado);
    }
    
    else if (operacao == 4){
        if (n2 =! 0){
            resultado = n1 / n2;
            printf("o resultado é %,2f\n", resultado);
            
        }else{
            printf("Erro: Divisão por zero!\n");
        }
    }else{
        printf("Erro: Operação inválida!\n");
    }
    return 0;
}