#include <stdio.h>
int main() {
    int x =5,y,z;
    y = ++x; 
    printf("After pre-increment (++x):\n");
    printf("x = %d, y = %d\n\n", x, y);
    x = 5;
    z = x++; 
    printf("After post-increment (x++):\n");
    printf("x = %d, z = %d\n", x, z);
    return 0;
}