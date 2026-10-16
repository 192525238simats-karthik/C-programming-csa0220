
#include <stdio.h>

int main() {
    int distance, member;
    float fare = 100;

    scanf("%d%d", &distance, &member);

    if (distance > 10)
        fare += (distance - 10) * 20;

    if (member == 1)
        fare *= 0.90;

    printf("Final Fare: Rs.%.0f\n", fare);

    return 0;
}
