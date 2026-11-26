#include <stdio.h>

#define size 7

int main() {
    float score[size];
    float sum = 0;
    float highest, lowest, fscore;
    int judge = -1;
    int i;

    for (i = 0; i < size; i++) {
        printf("Judge %d score: ", i + 1);
        scanf("%f", &score[i]);
    }

    highest = score[0];
    lowest = score[0];

    for (i = 0; i < size; i++) {
        sum = sum + score[i];

        if (score[i] > highest) {
            highest = score[i];
        }
        if (score[i] < lowest) {
            lowest = score[i];
        }
    }

    fscore = (sum - highest - lowest) / 5;

    printf("\nHighest score dropped: %.1f\n", highest);
    printf("Lowest score dropped: %.1f\n", lowest);
    printf("Final score: %.2f\n", fscore);

    for (i = 0; i < size; i++) {
        if (score[i] == 10.0) {
            judge = i + 1;
            break;
        }
    }

    if (judge != -1) {
        printf("Judge %d gave a perfect 10!\n", judge);
    } else {
        printf("No judge gave a perfect 10.\n");
    }

    return 0;
}
