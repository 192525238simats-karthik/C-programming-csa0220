
#include <stdio.h>

int main() {
    int units;
    float bill;

    scanf("%d", &units);

    if (units <= 200)
        bill = units * 0.50;
    else if (units <= 400)
        bill = units * 0.65 + 100;
    else if (units <= 600)
        bill = units * 0.80 + 200;
    else
        bill = units * 1.25 + 425;

    printf("Rs.%.2f\n", bill);

    return 0;
}
