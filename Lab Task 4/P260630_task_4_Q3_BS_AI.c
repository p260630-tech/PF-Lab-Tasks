#include <stdio.h>

int main() 
{

    int x,y;
    printf("\nEnter coordinates :\n");
    scanf("%d %d", &x, &y);

    if(x>0 && y>0)
        printf("Quadrant I");
    else if(x<0 && y>0)
        printf("Quadrant II");
    else if(x<0 && y<0)
        printf("Quadrant III");
    else if(x>0 && y<0)
        printf("Quadrant IV");
    else if(x==0 && y==0)
        printf("Origin");
    else if(x!=0 && y==0)
        printf("On the X-axis");
    else if(x==0 && y!=0)
        printf("On the Y-axis");
    
    return 0;
}