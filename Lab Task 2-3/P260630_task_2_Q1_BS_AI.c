#include<stdio.h>

int main()
{

float time;
float distance;
float speed;

printf("\nEnter Time in hrs :");
scanf("%f", &time);

printf("\nEnter Distance travelled in km :");
scanf("%f", &distance);

speed = distance / time;

printf("\nThe average speed is %f km/h", speed);

return 0;
}

