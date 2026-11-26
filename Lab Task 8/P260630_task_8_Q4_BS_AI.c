#include <stdio.h>

void convertTime(int totalSeconds, int *h, int *m, int *s) {
    int remain;
    
    *h = totalSeconds / 3600;
    remain = totalSeconds % 3600;
    *m = remain / 60;
    *s = remain % 60;
}

void addSeconds(int *h, int *m, int *s, int extra) {
    int now;
    int new;
    
    now = (*h * 3600) + (*m * 60) + *s;
    new = now + extra;
    
    convertTime(new, h, m, s);
}

int main() {
    int h, m, s, totalSeconds, extra;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    convertTime(totalSeconds, &h, &m, &s);
    printf("Time: %02d:%02d:%02d\n", h, m, s);

    printf("Enter seconds to add: ");
    scanf("%d", &extra);

    addSeconds(&h, &m, &s, extra);
    printf("New time: %02d:%02d:%02d\n", h, m, s);

    return 0;
}