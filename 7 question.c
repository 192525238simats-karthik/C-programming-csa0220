
#include <stdio.h>

int main() {
    float principal, rate, years;
    float interest, amount, discount, finalAmount;

    scanf("%f%f%f", &principal, &rate, &years);

    interest = principal * rate * years / 100;
    amount = principal + interest;
    discount = interest * 0.02;
    finalAmount = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", finalAmount);

    return 0;
}
