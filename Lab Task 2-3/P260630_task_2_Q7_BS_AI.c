#include<stdio.h>

int main()
{

int sub1,sub2,sub3,total;
float avg;

printf("\n enter first subject marks :");
scanf("%d", &sub1);

printf("\n enter second subject marks :");
scanf("%d", &sub2);

printf("\n enter third subject marks :");
scanf("%d", &sub3);

total = sub1 + sub2 + sub3;
avg = (float) (total/3);

printf("\nTotal : %d", total);
printf("\nAverage : %f", avg);

return 0;
}

