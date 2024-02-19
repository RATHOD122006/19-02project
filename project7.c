#include <stdio.h>
main() {
    int s = 5;
    int c = 5;

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 || j == 0 || j == c - 1 || (i == s / 2 && j > 0)) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }
}