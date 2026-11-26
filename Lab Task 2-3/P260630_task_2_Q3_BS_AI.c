#include<stdio.h>

int main()
{

float tr;
int salary;
float tax;
float salary_remaining;


printf("\nenter the tax rate in percentage :");
scanf("%f", &tr);

printf("\nenter the salary :");
scanf("%d", &salary);

tax = (float) (salary * tr/100);
salary_remaining = (float) (salary - tax);

printf("\n tax amount is %f ", tax);
printf("\n net income is %f ", salary_remaining);

return 0;
}

