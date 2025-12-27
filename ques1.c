#include <stdio.h>
int main() {
    int a = 10;
    float b = 12.5;
    char c = 'A';
    double d = 123.456;
    printf("Value of int variable a: %d\n", a);
    printf("Size of int: %lu bytes\n\n", sizeof(a));
    printf("Value of float variable b: %.2f\n", b);
    printf("Size of float: %lu bytes\n\n", sizeof(b));
    printf("Value of char variable c: %c\n", c);
    printf("Size of char: %lu byte\n\n", sizeof(c));
    printf("Value of double variable d: %.3lf\n", d);
    printf("Size of double: %lu bytes\n", sizeof(d));
    return 0;
}