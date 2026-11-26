#include <stdio.h>

#define size 7

int main() {
    int tickets[size];
    int forged = 0;
    int genuine;
    int i, j;

    for (i = 0; i < size; i++) {
        printf("Ticket of person %d: ", i + 1);
        scanf("%d", &tickets[i]);
    }

    printf("\n--- GATE REPORT ---\n");

    for (i = 1; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (tickets[i] == tickets[j]) {
                printf("FORGED: person %d used ticket %d, already used by person %d\n", i + 1, tickets[i], j + 1);
                forged = forged + 1;
                break;
            }
        }
    }

    genuine = size - forged;
    printf("Genuine: %d, Forged: %d\n", genuine, forged);

    return 0;
}
