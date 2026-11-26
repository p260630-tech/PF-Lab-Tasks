#include <stdio.h>

int main() {

    for (int i = 1; i < 6; i++)
    {
        for (int j = 6; j > i; j--)
            printf("*");
        printf("\n");

        for (int x = 0; x < i; x++)
            printf(" ");
    }
    printf("\n");
    for (int i = 1; i < 6; i++)
    {
        for (int x = 5; x > i; x--)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}