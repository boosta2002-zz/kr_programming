#include <stdio.h>

int main(void) {

    printf("Size of int: %d\n", sizeof(int));
    printf("Size of short: %d\n", sizeof(short));
    printf("Size of long: %d\n", sizeof(long));

    printf("size of int constant %d\n", sizeof(1234));
    printf("size of long constant %d\n", sizeof(1234L));

}