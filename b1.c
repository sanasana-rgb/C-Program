#include <stdio.h>
int main() {
    int i, j;
    int h = 9;
    for (i = 0; i < h; i++) {
        printf("*"); 
        if (i == 0 || i == h/2 || i == h-1) {
            for (j = 0; j < 6; j++)
                printf("*");
        } else {
            printf("     *");
        }

        printf("\n");
    }

    return 0;
}
