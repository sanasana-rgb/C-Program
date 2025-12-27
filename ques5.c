#include <stdio.h>
int main() {
    float a, b;
    printf("Enter first balance: ");
    scanf("%f", &a);
    printf("Enter second balance: ");
    scanf("%f", &b);
    printf("\nBoth are equal        : %d", a == b);
    printf("\nFirst is greater      : %d", a > b);
    printf("\nSecond is greater     : %d", b > a);
    return 0;
}