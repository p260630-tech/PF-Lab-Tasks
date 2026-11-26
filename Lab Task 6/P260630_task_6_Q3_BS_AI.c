#include <stdio.h>

int main() {

    
    float n,x,s,fact,power;
    s = 0;

    printf("Enter the value for n: ");
    scanf("%f",&n);
    printf("Enter the value for x: ");
    scanf("%f",&x);

    for (int i = 0; i <= n; i++)
    {
        power = 1;
        fact = 1;
        for (int j = 0; j < i; j++)
            power = power * x;
        for (int j = 1; j <= i; j++)
            fact = fact * j;

        s = s + (power / fact);
            
    }

    printf("s = %0.1f", s);

    
    return 0;
}