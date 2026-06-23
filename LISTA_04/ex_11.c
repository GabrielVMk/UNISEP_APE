#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int x = 48, y = 18;
    printf("MDC(%d, %d) = %d\n", x, y, mdc(x, y));
    return 0;
}