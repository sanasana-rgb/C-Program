#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
void showMenu();
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);
double squareRoot(double num);
double power(double base, double exp);
void getTwoNumbers(double *num1, double *num2);
void getOneNumber(double *num);
int main() {
    int choice;
    double num1, num2, result;
    while(1) { 
        showMenu();
        if(scanf("%d", &choice) != 1) { 
            printf("Invalid input. Please enter a number.\n");
            
            while(getchar() != '\n'); 
            continue;
        }
        switch(choice) {
            case 0:
                printf("Exiting the calculator. Goodbye!\n");
                exit(0); 
            case 1:
                getTwoNumbers(&num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                getTwoNumbers(&num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                getTwoNumbers(&num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                getTwoNumbers(&num1, &num2);
                result = divide(num1, num2);
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 5:
                getOneNumber(&num1);
                result = squareRoot(num1);
                printf("Result: sqrt(%.2lf) = %.2lf\n", num1, result);
                break;
            case 6:
                getTwoNumbers(&num1, &num2);
                result = power(num1, num2);
                printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                break;
            default:
                printf("Error: Invalid choice. Please select a valid option from the menu.\n");
        }
        printf("\n");
    }

    return 0;
}
void showMenu() {
    printf("--- Multi-Functional Calculator Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

void getTwoNumbers(double *num1, double *num2) {
    printf("Enter two numbers: ");
    
    if(scanf("%lf %lf", num1, num2) != 2) {
        printf("Invalid input. Please enter numbers.\n");
        while(getchar() != '\n'); 
    }
}

void getOneNumber(double *num) {
    printf("Enter a number: ");
    if(scanf("%lf", num) != 1) {
        printf("Invalid input. Please enter a number.\n");
        while(getchar() != '\n');
    }
}

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return NAN;
    }
}

double squareRoot(double num) {
    if (num >= 0) {
        return sqrt(num); 
    } else {
        printf("Error: Cannot calculate the square root of a negative number.\n");
        return NAN;
    }
}

double power(double base, double exp) {
    return pow(base, exp);
}