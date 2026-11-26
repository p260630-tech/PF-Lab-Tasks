#include<stdio.h>

int main()
{

float num, difference;
int converted;

printf("\n enter number :");
scanf("%f", &num);


if ( num <= 1000)
{
	if ( num >= -1000)
	{
	converted = (int) (num);
	difference = num - converted;
	printf("\noriginal value = %f", num);
	printf("\nconverted integer = %d", converted);
	printf("\ndifference = %f", difference);
	}
}
else
printf("value not between -1000 and 1000");

return 0;
}

