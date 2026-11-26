#include <stdio.h>

int main() 
{

    int year;
    printf("\nEnter a year : ");
    scanf("%d", &year);

    if(year % 100 == 0)
    {
        if(year % 400 == 0)
            printf("\nIt is a leap year");
        else
            printf("\nNot a leap year");
    }
    else
    {
        if(year % 4 == 0)
            printf("\nIt is a leap year");
        else
            printf("\nNot a leap year");
    }
    return 0;
}