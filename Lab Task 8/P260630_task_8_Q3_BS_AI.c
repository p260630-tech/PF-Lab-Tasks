#include <stdio.h>

void circleInfo(float radius, float *area, float *circumference) {
    float pi = 3.14159;
    
    *area = pi * radius * radius;
    *circumference = 2 * pi * radius;
}

int main() {
    float radius, area, circumference;

    while (1) {
        printf("Enter radius: ");
        scanf("%f", &radius);

        if (radius < 0) {
            printf("Radius cannot be negative.\n");
        } else {
            break; 
        }
    }

    circleInfo(radius, &area, &circumference);
    
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}