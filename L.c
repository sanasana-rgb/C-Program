#include <stdio.h>

int main() {
    int height = 7; 
    for (int i = 0; i < height; i++) {
        printf("*\n");
    }
    for (int i = 0; i < height - 1; i++) {
        printf("* ");
    }
    return 0;
}
