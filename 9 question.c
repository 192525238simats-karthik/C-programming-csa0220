
#include <stdio.h>

int main() {
    int year, month, days;

    scanf("%d%d", &year, &month);

    if (year < 1900 || year > 9999 ||
        month < 1 || month > 12) {
        printf("0\n");
        return 0;
    }

    if (month == 2) {
        if (year % 400 == 0 ||
            (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    }
    else if (month == 4 || month == 6 ||
             month == 9 || month == 11)
        days = 30;
    else
        days = 31;

    printf("%d Days\n", days);

    return 0;
}
