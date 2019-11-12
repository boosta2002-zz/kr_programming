#include <stdio.h>
#include "busta.h"
#include <ctype.h>
/*
int main(void) {

}
*/

int main(void) {
signed int n_min = INT_MIN; 
signed int n_max = INT_MAX;
signed int n = INT_MIN;
n = -(n);
printf("n_min is %d\n", n_min);
printf("n_min is %d\n", n_max);
printf("now: %u\n", n);

}


/*
int main(void) {
    int x = 1;
    x<<1;
    printf("%d\n", x);
}

*/




/* 
int main () {

    int n, p, ret; 
    n = 2; 
    p = 6; 
    ret = 0;

    ret = ~((~(~0 << 2)) << (p-1)); 
    printf("\n%u\n", ret);

    return 0;
}
 */



/* 
int main () {
    int y; 
    int n = 3;
    y = 0x6;
    y = (~(~0 << n))&y;

    printf("\n%d\n", y);
    return 0;

}
 */