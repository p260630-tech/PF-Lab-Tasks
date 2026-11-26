#include<stdio.h>

int main()
{

int pennies = 368;
int quarter = 0;
int dime = 0;
int nickel = 0;
int remaining = 0;
int remaining2 = 0;
int remaining3 = 0 ;

quarter = pennies / 25;
remaining = pennies % 25;
printf("\nquarters : %d", quarter);

dime = remaining / 10;
remaining2 = remaining % 10;
printf("\ndime : %d", dime);

nickel = remaining2 / 5;
remaining3 = remaining2 % 5;   
printf("\nnickels : %d", nickel);

printf("\npennies : %d", remaining3);


return 0;
}

