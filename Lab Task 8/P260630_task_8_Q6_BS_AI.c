#include <stdio.h>
#include <math.h>

int solveQuadratic(double a, double b, double c, double *r1, double *r2) {
    double d = (b * b) - (4 * a * c);

    if (d > 0) {
        *r1 = (-b + sqrt(d)) / (2 * a);
        *r2 = (-b - sqrt(d)) / (2 * a);
        return 2;
    } else if (d == 0) {
        *r1 = -b / (2 * a);
        *r2 = *r1;
        return 1;
    } else {
        return 0;
    }
}

int main() {
    double a, b, c;
    double r1, r2;

    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    int rootCount = solveQuadratic(a, b, c, &r1, &r2);

    if (rootCount == 2) {
        printf("Two roots: %.2f and %.2f\n", r1, r2);
    } else if (rootCount == 1) {
        printf("One root: %.2f\n", r1);
    } else {
        printf("No real roots.\n");
    }

    return 0;
}
/*   Explain why this function needs both a return value and pointer parameters.
     A function can only return one value, so return sends the count of roots while pointers send back the actual root values.  */