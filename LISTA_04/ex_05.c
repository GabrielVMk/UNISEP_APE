#include <stdio.h>
#include <stdlib.h>

double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main(){
    double tempC, tempF;

    printf("dijite a temperatura em graus Celsius: ");
    scanf("%f", &tempC);

    tempF = celsiusParaFahrenheit(tempC);

    printf("%.2lf graus Celsius equivalem a %.2lf graus Fahrenheit.\n", tempC, tempF);

    return 0;
}