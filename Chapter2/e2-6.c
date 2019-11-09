/*
Author: Anthony Bustamante
Date: 08Nov19
Description:  Exercise 2-6 - Write a function setbits(x,p,n,y) that returns x
with the n bits that begin at position p set to the right most n bits on y, 
leaving the other bits unchanged. 
*/
#include <stdio.h>
#include "../otherstuff/busta.h"




int setbits(unsigned int x, unsigned int p, unsigned int n, unsigned int y);

int main (void) {

    int x_input, position, number_of_bits, y_input, result;
    x_input = 0xFF;
    position = 7;
    number_of_bits = 4;
    y_input = 0xA;

    printf("x input: %s\n", i2b(x_input));
    printf("y raw: %s\n", i2b(y_input));
    result = setbits(x_input, position, number_of_bits, y_input);
    printf("Result: %s\n",i2b(result));


    return 0;
}


int setbits(unsigned int x,unsigned int p,unsigned int n,unsigned int y) {
    unsigned int x_mask, y_mask;
    // create mask to isolate n bits at offset p 
    x_mask = ~((~(~0 << n)) << (p - (n-1)));
    printf("x mask: %s\n", i2b(x_mask));

    // clear n bits of x at p
    x = x & x_mask;
    printf("x cleared: %s\n", i2b(x));

    // isolate rightmost n bits of y and put them at pos p
    y_mask = (((~(~0 << n )) & y) << (p - (n-1)));
    printf("y mask: %s\n", i2b(y_mask));
    // Copy over n bits from y to x 
    x = x ^ y_mask;
    
    return x;

}