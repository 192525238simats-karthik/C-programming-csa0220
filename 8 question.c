
#include <stdio.h>

int main() {
    int experience, performance;

    scanf("%d%d", &experience, &performance);

    if (experience > 7 && performance >= 85)
        printf("Level: Senior\n");
    else if (experience >= 3 && experience <= 7
             && performance >= 80)
        printf("Level: Mid-Level\n");
    else
        printf("Level: Junior\n");

    return 0;
}
