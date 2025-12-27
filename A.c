#include <stdio.h>
int main() {
    int i, j, n = 7; 

    for (i = 0; i < n; i++) {
        for (j = 0; j <= n; j++) {
            
            if (j == 0 || j == n) {
                printf("*");
            }
           
            else if (i == 0 && j < n) {
                printf("*");
            }
           
            else if (i == n / 2 && j < n) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


