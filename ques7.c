#include <stdio.h>
int main() {
    float balance, interest, charges, bonus, divisor;
    printf("Enter initial bank balance: ");
    scanf("%f", &balance);
    printf("Enter interest amount to add: ");
    scanf("%f", &interest);
    balance += interest;
    printf("Balance after adding interest: %.2f\n", balance);
    printf("Enter service charge to deduct: ");
    scanf("%f", &charges);
    balance -= charges;
    printf("Balance after deducting charges: %.2f\n", balance);
    printf("Enter bonus factor (e.g., 1.05 for 5%% bonus): ");
    scanf("%f", &bonus);
    balance *= bonus;
    printf("Balance after applying bonus: %.2f\n", balance);
    printf("Enter divisor (e.g., 2 to split the balance in half): ");
    scanf("%f", &divisor);
    balance /= divisor;
    printf("Balance after division: %.2f\n", balance);
    return 0;
}