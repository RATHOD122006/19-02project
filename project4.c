#include <stdio.h>
main(){
    int s = 5;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        
        for (int k = 0; k < s - i; k++) {
            if (k % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}