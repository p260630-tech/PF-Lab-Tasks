#include <stdio.h>

int readUnits(void);
float calculateBill(int units);

int main() {
    int units;
    float total;

    units = readUnits();
    total = calculateBill(units);
    printf("Units consumed: %d\n", units);
    printf("Total bill: Rs %.2f\n", total);

    return 0;
}

int readUnits(void) {
    int units;
    int found = 0;
    while (found == 0) 
	{
        printf("Enter units consumed: ");
        scanf("%d", &units);
        
        if (units >= 0)
        {
        	found = 1;
        	break;
		}
        else
        	printf("Units cannot be negative.\n");
    }
    
    return units;
}

float calculateBill(int units) {
    float bill = 0;

    if (units <= 100) 
        bill = units * 10;
    else if (units <= 300)
        bill = (100 * 10) + ((units - 100) * 15);
    else
        bill = (100 * 10) + (200 * 15) + ((units - 300) * 20);
    
    if (bill > 3000)
        bill = bill + (bill * 0.05);

    return bill;
	/*returning the value allows the function to be reused again and again */
}
