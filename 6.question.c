
#include <stdio.h>

int main() {
    int A, B, C, cars;

    scanf("%d%d%d%d", &A, &B, &C, &cars);

    if (cars % 3 == 1)
        printf("Car 1 goes into road A\n");
    else if (cars % 3 == 2)
        printf("Car 1 goes into road B\n");
    else
        printf("Car 1 goes into road C\n");

    return 0;
}
