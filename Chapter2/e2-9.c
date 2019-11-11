/*
Author: Anthony Bustamante
Date: 09Nov19
Description:  Exercise 2-9 - In a two's complement number system, 
x &= (x-1) deletes the rightmost 1-bit in x. Explain why. Use 
this observation to write a sfaster version of bitcount.

x &= (x-1);

In a binary systems, specifically twos' complement systems. Subtracing 1 from x
has the affect of always clearning the right most 1 and filling in the rest of the
bits with 1's ie...

128 64  32  16  8  4    2   1
1   0   0   1   0   0   0   0   <- 144
1   0   0   0   1   1   1   1   <- subtracing 1 turns the 16 bit off and the remaining bits on which add up to 1 less than 16.
______________________________
1   0   0   0   0   0   0   0   <- the result AND ensures that the bit is cleared and reassigned to x

*/

#include <stdio.h>

int bitcount(unsigned int x);

int main (void) {
int x;
    printf("%d\n", bitcount(0xFFFF)); // 0xFFFF = 16 bits

    return 0;
}


int bitcount(unsigned int x) {
    int bc = 0;

    while ( x && ( ++bc ) ) 
        x &= x-1;

    return bc;

}