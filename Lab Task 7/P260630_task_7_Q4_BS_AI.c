#include <stdio.h>

float toFahrenheit(float c);
float toCelsius(float f);
void printTable(int start, int end, int step);

int main() {
    int start, end, step;
    float fahren, celsius;

    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);
    printf("Step: ");
    scanf("%d", &step);

    printTable(start, end, step);

    printf("\nEnter a temperature in Fahrenheit: ");
    scanf("%f", &fahren);

    celsius = toCelsius(fahren);
    printf("%.1f F = %.2f C\n", fahren, celsius);

    return 0;
}

float toFahrenheit(float c) {
    int F;
    F = (c * 9.0f / 5.0f) + 32.0f;
	return F;
}

float toCelsius(float f) {
    int C;
    C = (f - 32.0f) * 5.0f / 9.0f;
	return C;
}

void printTable(int start, int end, int step) {
    printf("Celsius   Fahrenheit\n");
    
    for (int x = start; x <= end; x = x + step) {
        printf("%7d %12.1f\n", x, toFahrenheit((float)x));
    }
}
