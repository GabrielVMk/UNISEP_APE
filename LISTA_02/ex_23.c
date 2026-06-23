/*
23) Exiba todos os números entre 1 e 100 que 
são divisíveis por 3 e 5 ao mesmo tempo.
*/

int main() {
    int i = 1;
    
    printf("numeros de 1 a 100 que são diviziveis\npor 3 e 5: \n\n");
    while(i <= 100){
        if (i % 3 == 0 && i % 5 == 0){
            printf("%d\n", i);
            
        }
        i++;
    }
    printf("\n\n");
    return 0;
    
}