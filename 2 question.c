
#include <stdio.h>

int main() {
    int questions, time, submitted;

    scanf("%d%d%d", &questions, &time, &submitted);

    if (questions >= 1 && time > 0 && submitted == 0)
        printf("Submission Allowed\n");
    else
        printf("Submission Not Allowed\n");

    return 0;
}
