#include <stdio.h>
#include "busta.h"

/*
int main(void) {

}
*/

int main(void) {
    printf("%s\n",i2b(240));
}




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