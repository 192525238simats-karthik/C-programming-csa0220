
#include <stdio.h>

int main() {
    float mileage;
    int petrol, distance;

    scanf("%f%d%d", &mileage, &petrol, &distance);

    if (mileage * petrol >= distance)
        printf("Can reach\n");
    else
        printf("Cannot reach\n");

    return 0;
}
