#include <stdio.h>

#define size 6

int main() {
    int roll[size];
    int marks[size];
    int temp;
    int i, j;

    for (i = 0; i < size; i++) {
        printf("Student %d - roll no and marks: ", i + 1);
        scanf("%d %d", &roll[i], &marks[i]);
    }

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (marks[i] < marks[j]) {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;

                temp = roll[i];
                roll[i] = roll[j];
                roll[j] = temp;
            }
        }
    }

    printf("\nRank Roll Marks\n");
    for (i = 0; i < size; i++) {
        printf("  %d\t  %d\t %d\n", i + 1, roll[i], marks[i]);
    }

    printf("\nPosition holders:\n");
    printf("1st: Roll %d (%d marks)\n", roll[0], marks[0]);
    printf("2nd: Roll %d (%d marks)\n", roll[1], marks[1]);
    printf("3rd: Roll %d (%d marks)\n", roll[2], marks[2]);

    return 0;
}
