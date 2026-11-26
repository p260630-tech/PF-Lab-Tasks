#include<stdio.h>

int main()
{

int num1,num2,temp;

printf("\n num1 :");
scanf("%d", &num1);

printf("\n num2 :");
scanf("%d", &num2);

temp = num1;
num1 = num2;
num2 = temp;

printf("\n num1 : %d", num1);
printf("\n num2 : %d", num2);

return 0;
}

