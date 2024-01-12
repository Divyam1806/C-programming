#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

void add_times(struct time t1, struct time t2, struct time *sum) {
    sum->seconds = t1.seconds + t2.seconds;
    sum->minutes = t1.minutes + t2.minutes;
    sum->hours = t1.hours + t2.hours;

    // adjust if seconds exceed 60
    if (sum->seconds >= 60) {
        sum->minutes += sum->seconds / 60;
        sum->seconds %= 60;
    }

    // adjust if minutes exceed 60
    if (sum->minutes >= 60) {
        sum->hours += sum->minutes / 60;
        sum->minutes %= 60;
    }
}

int main() {
    struct time t1, t2, sum;

    printf("Enter the first time (hh:mm:ss): ");
    scanf("%d:%d:%d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter the second time (hh:mm:ss): ");
    scanf("%d:%d:%d", &t2.hours, &t2.minutes, &t2.seconds);

    add_times(t1, t2, &sum);

    printf("Sum of times: %02d:%02d:%02d", sum.hours, sum.minutes, sum.seconds);

    return 0;
}
