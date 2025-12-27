//PRINT Q IN STAR PATTERN
#include <stdio.h>
int main() {    
    int i, j;    
    int n = 7;     
    for (i = 0; i < n; i++) {        
        for (j = 0; j < n; j++) {            
            if ((i == 0 && j > 0 && j < n - 2) || (i == n - 2 && j > 0 && j < n - 2) || (j == 0 && i > 0 && i < n - 2) || (j == n - 2 && i > 0 && i < n - 3) || (i == j && i >= n / 2))
                printf("*");            
            else                
                printf(" ");        
        }        
        printf("\n");    
    }    
    return 0;
}