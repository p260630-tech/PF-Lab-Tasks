#include <stdio.h>

int main() {
    int lap, current, monthly; 
    int total, count;

    count = 0;

    printf("Laptop price: "); 
    scanf("%d", &lap); 
    printf("Current savings: "); 
    scanf("%d", &current); 
    printf("Monthly saving: ");
    scanf("%d", &monthly);

    // this loop will run until enough money saved 
    while (lap > current)
    { 

        count = count + 1;
        current = current + monthly; 
        printf("Month %d: savings = %d\n", count, current);

    }  

    printf("Sara can buy the laptop after %d month(s).", count);

    
    return 0;
}