#include <stdio.h>
#include <stdlib.h>

int contarVogais(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            count++;
        }
    }
    return count;
}

int main() {
    char frase[] = "Algoritmos em C";
    printf("Vogais: %d\n", contarVogais(frase));
    return 0;
}