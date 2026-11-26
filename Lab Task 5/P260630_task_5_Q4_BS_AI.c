#include <stdio.h>

int main() {

    int num, marks, high, total, pass, fail;
    float average;
    
    high = 0;
    total = 0;
    average = 0;
    pass = 0;
    fail = 0;
    
    printf("Number of students: ");
    scanf("%d", &num);
    

    for (int x=1; x <= num; x++)
    { 
        printf("Marks of student %d: ", x);
        scanf("%d", &marks);
        total = total + marks;

        if (marks >= 50)
            pass = pass + 1;
        else
            fail = fail + 1;

        if (marks > high)
            high = marks;
    }

    printf("\nPassed: %d", pass);
    printf("\nFailed: %d", fail);
    printf("\nHighest: %d", high);

    average = (float)total/num;

    printf("\nAverage: %.2f", average);
        
            

    return 0;
}