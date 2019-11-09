#include <stdio.h>

int main(void) {
    int x = 0; 

    if ( ++x == 1 ) {
        printf("If x = 0, the value of ++x should be 1: %d\n ", x);
    }
    x = 0;
    
    if (x++ == 0) {
        printf("If x = 0, the value of x++ should be 0: %d\n ", x);
    }
    int g;
    int q;
    q = (g = 221);
    printf("\n%d\n", q);

    return 0; 
}