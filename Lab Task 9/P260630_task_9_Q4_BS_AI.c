#include <stdio.h>

#define size 7

int main() {
    int guard[size];
    int newRoster[size];
    int k, search_id;
    int new_day = -1;
    int i;

    printf("Enter guard IDs for Day 1 to Day 7:\n");
    for (i = 0; i < size; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &guard[i]);
    }

    printf("Shift roster forward by how many days (1-6)? ");
    scanf("%d", &k);

    for (i = 0; i < size; i++) {
        newRoster[(i + k) % size] = guard[i];
    }

    printf("\nDay\tOld\tNew\n");
    for (i = 0; i < size; i++) {
        printf("Day %d\t%d\t%d\n", i + 1, guard[i], newRoster[i]);
    }

    printf("\nEnter your guard ID: ");
    scanf("%d", &search_id);

    for (i = 0; i < size; i++) {
        if (newRoster[i] == search_id) {
            new_day = i + 1;
            break;
        }
    }

    if (new_day != -1) {
        printf("Guard %d now has duty on Day %d.\n", search_id, new_day);
    } else {
        printf("Guard %d not found in the roster.\n", search_id);
    }

    return 0;
}
