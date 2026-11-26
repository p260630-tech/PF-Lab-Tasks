#include <stdio.h>

int main() {
    int count,total;
    count = 0;

    for (int i = 2; count < 4; i++) 
    {
        total = 0;

        for (int j = 1; j <= i / 2; j++) 
        {
            if (i % j == 0) 
                total = total + j;
        }

        if (total == i) 
        {
            printf("%d is a perfect number\n", i);

            printf("1"); 
            for (int j = 2; j <= i / 2; j++) 
            {
                if (i % j == 0) 
                    printf("+%d", j);
            }
            printf("=%d\n", i);

            count = count + 1;
        }
    }

    return 0;
}
