#include <stdio.h>

int main() {
    
    float radius = 7.5f;
    float pi = 3.14159f;
    float diameter = 2.0f * radius;
    float circumference = 2.0f * pi * radius;
    float area = pi * radius * radius;

    printf("          CIRCLE GEOMETRY REPORT \n");

    printf("Given Radius:                %.3f cm\n", radius);
    printf("Calculated Diameter:         %.3f cm\n", diameter);
    printf("Calculated Circumference:    %.3f cm\n", circumference);
    printf("Calculated Area:             %.3f sq.cm\n", area);

    return 0;
}