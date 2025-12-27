#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 7; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1) {
                printf("*");
            }
            else if(i + j == 6) {
                printf("*");
            }
            else if(i - j == 2) {
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