#include <stdio.h>

int main() 
{
    int w;
    printf("Enter weight(kg) : ");
    scanf("%d",&w);

    if(w > 2 && w % 2 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
