/*
Author: Anthony Bustamante
Date: 08Nov19
Description:  Exercise 2-7 - Write a function invert(x,p,n) that 
returns x with the n bits that begin at position p inverted 
(i.e., 1 changed into 0 and vice versa).
*/
#include <stdio.h>
#include "../otherstuff/busta.h"




int invert(unsigned int x, unsigned int p, unsigned int n);

int main (void) {

    int x_input, position, number_of_bits, result;
    x_input = 0x0f0f;
    position = 15;
    number_of_bits = 16;
   
    result = invert(x_input, position, number_of_bits);
    printf("result: %s\n", i2b(result));


    return 0;
}


int invert(unsigned int x,unsigned int p,unsigned int n) {
    unsigned int x_mask, y_mask;
    // create mask to isolate n bits at offset p 
    x_mask = ((~(~0 << n)) << (p - (n-1)));
    printf("x mask: %s\n", i2b(x_mask));

    // Flip bits with xor
    x = x^x_mask;
    
    return x;

}