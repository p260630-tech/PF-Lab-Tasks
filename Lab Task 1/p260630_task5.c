#include <stdio.h>

int main() {

    float celsius = 37.5f;
    float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    float kelvin = celsius + 273.15f;

    printf("\t\tTEMPERATURE CONVERSION \n");

    printf("Temperature in Celsius:      %.2f °C\n", celsius);
    printf("Temperature in Fahrenheit:   %.2f °F\n", fahrenheit);
    printf("Temperature in Kelvin:       %.2f K\n", kelvin);

    return 0;
}