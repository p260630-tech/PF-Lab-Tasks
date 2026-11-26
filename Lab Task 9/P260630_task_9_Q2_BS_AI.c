#include <stdio.h>

#define size 10

int main() {
    int lockers[size];
    int empty = 0;
    int code, i;
    int found = 0;
    

    printf("Enter item code in each locker (0 = empty):\n");
    for (i = 0; i < size; i++) {
        printf("Locker %d: ", i + 1);
        scanf("%d", &lockers[i]);

        if (lockers[i] == 0)
            empty = empty + 1;
    }

    printf("\nEnter item code to search: ");
    scanf("%d", &code);

    for (i = 0; i < size; i++) {
        if (lockers[i] == code) {
            printf("Item %d is in locker %d\n", code, i + 1);
            found = found + 1;
        }
    }

    if (found == 0)
        printf("Item %d was not found in any locker.\n", code);
    else
        printf("Total lockers with this item: %d\n", found);

    printf("Empty lockers: %d\n", empty);

    return 0;
}
