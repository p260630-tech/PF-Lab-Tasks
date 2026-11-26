#include <stdio.h>

int main() 
{

    int a,b,c;
    printf("\nEnter a three lengths :\n");
    scanf("%d %d %d", &a, &b, &c);

    if((a + b) > c || (a + c) > b || (b + c) > a)
    {
        if( a==b && a==c)
            printf("\nIt is an Equilateral Triangle");
        else if( a==b || a==c || b==c)
            printf("\nIt is an Isosceles Triangle");
        else
            printf("\nIt is a Scalene Triangle");
    }
    else
        printf("\nNot a valid triangle");
    
    return 0;
}