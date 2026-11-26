#include <stdio.h>

int main() {

    char sym;
    printf("Enter symbol: ");
    scanf("%c",&sym);

    for (int i = 6; i > 1; i--)
    {
        for (int j = 6; j > i; j--)
            printf("%c",sym);
    printf("\n");
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 5; j > i; j--)
            printf("%c",sym);
    printf("\n");
    }

    
    return 0;
}