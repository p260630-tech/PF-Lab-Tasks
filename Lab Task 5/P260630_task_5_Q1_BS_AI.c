#include <stdio.h>

int main() {
    int x, run, total, bound, dot;
    total = 0;
    bound = 0;
    dot =0;

    for (x = 1; x<=6; x++)
    {
            printf("ball %d runs : ",x);
            scanf("%d", &run);
            total = total + run;
            if(run == 6 || run == 4)
                bound = bound + 1;
            else if (run == 0)
                dot = dot + 1;
    }
    
    printf("Total runs: %d\n", total);
    printf("Boundaries: %d\n", bound);
    printf("Dot balls: %d\n", dot);

    
    return 0;
}