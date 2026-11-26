#include <stdio.h>

int main() 
{

    int a,b,c;
    printf("\nEnter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);


    if(a>b)
    {
        if(a>c)
            printf("largest value : %d",a);
        else
            printf("largest value : %d",c);
    }
    else if(b>c)

            printf("largest value : %d",b);    
        else
            printf("largest value : %d",c);    

    
    return 0;
}