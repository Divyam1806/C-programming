#include <stdio.h>

struct distance {
    int km;
    int m;
};

int main() {
    struct distance d1, d2, sum;

    printf("Enter the first distance in kilometers and meters: ");
    scanf("%d %d", &d1.km, &d1.m);

    printf("Enter the second distance in kilometers and meters: ");
    scanf("%d %d", &d2.km, &d2.m);

    sum.m = d1.m + d2.m;
    sum.km = d1.km + d2.km;

    // convert extra meters to kilometers if applicable
    if (sum.m >= 1000) {
        sum.km += sum.m / 1000;
        sum.m = sum.m % 1000;
    }

    printf("Sum of distances: %d km %d m", sum.km, sum.m);

    return 0;
}
