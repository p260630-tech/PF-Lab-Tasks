#include <stdio.h>

int main() {
    int pin, attempt, count;

    attempt = 0;
    count = 3;
    
    do {
        printf("\nEnter PIN: ");
        scanf("%d", &pin);
        count = count - 1;

        if (pin == 4321)
        { 
            printf("Access granted");
            attempt = 1;
        }
        else if(count > 0)
            printf("Wrong PIN. %d attempt(s) left", count);
             
    } while (count > 0 && attempt == 0);

    if (count == 0 && attempt == 0)
        printf("\nCard blocked. Please contact your bank");


    return 0;
}