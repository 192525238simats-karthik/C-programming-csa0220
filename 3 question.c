
#include <stdio.h>

int main() {
    int coins, x, y;
    int longBen, remaining, blackbeard, others;

    scanf("%d%d%d", &coins, &x, &y);

    longBen = coins * x / 100;
    remaining = coins - longBen;

    blackbeard = remaining * y / 100;
    others = remaining - blackbeard;

    printf("%d\n", longBen);
    printf("%d\n", blackbeard);
    printf("%d\n", others);

    return 0;
}
