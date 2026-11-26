#include <stdio.h>
#include <math.h>


int main() {
    double a, b;
    double hypo, roundup, rounddown, area;

    printf("Enter side a: ");     // Header: <stdio.h> Returns: int
    scanf("%lf", &a);             // Header: <stdio.h> Returns: int
    printf("Enter side b: ");
    scanf("%lf", &b);


    hypo = sqrt(pow(a, 2) + pow(b, 2));   //pow() = Header: <math.h>  Returns: double    sqrt() = Header: <math.h>  Returns: double
    roundup = ceil(hypo);            //Header: <math.h>  Returns: double
    rounddown = floor(hypo);         //Header: <math.h>  Returns: double
    area = 0.5 * a * b;

    printf("Hypotenuse: %.2lf\n", hypo);
    printf("Rounded up: %.0lf\n", roundup);
    printf("Rounded down: %.0lf\n", rounddown);
    printf("Area: %.2lf\n", area);

    return 0;
}




