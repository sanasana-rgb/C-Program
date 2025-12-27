#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 7; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1) {
                printf("*");
            }
            else if(j == 3) {
                printf("*");
            }
            else if(i == 7 && j <= 3) {
                printf("*");
            }
            else if(i == 6 && j == 2) {
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