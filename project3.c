#include <stdio.h>

main() {
    int s = 1; 
    int i, j;

    for (i = 5; i >= s; i--) {
        for (j = i; j >s; j--) {
            printf("  "); 
        }
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n"); 
    }
}