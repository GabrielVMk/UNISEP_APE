/*
18) Solicite várias idades até o usuário digitar 0. 
Calcule a média das idades.
*/


int main() {
    int idade, soma = 0, contador = 0;
    float media = 0.0;

    printf("Digite as idades (digite 0 para encerrar):\n");

    while (1) {
        printf("Digite uma idade: ");
        scanf("%d", &idade);

        if (idade == 0) {
            break; 
        }
        
        if (idade > 0) {
            soma += idade;
            contador++;
        } else {
            printf("Digite uma idade valida (maior que 0).\n");
        }
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("\nO resultado é:\n");
        printf("Total de idades digitadas: %d\n", contador);
        printf("A media das idades e: %.2f\n", media);
    } else {
        printf("\nNenhuma idade valida foi inserida.\n");
    }

    return 0;
}