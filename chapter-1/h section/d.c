#include <stdio.h>

int main() {
    float tempInFahrenheit;
    printf("Enter the temperature in fahrenheit.\n");
    scanf("%f", &tempInFahrenheit);
    float tempInCelcius = ((tempInFahrenheit - 32) * 5) / 9;
    printf("Temperature in Celcius is %f\n", tempInCelcius);
}