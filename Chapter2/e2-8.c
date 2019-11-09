/*
Author: Anthony Bustamante
Date: 08Nov19
Description:  Exercise 2-8 - Write a function rightrot(x,n)
that returns the value of the integer x rotated to the right 
by n bit positions.
*/
#include <stdio.h>
#include "../otherstuff/busta.h"



int rightrot(unsigned int x, unsigned int n);

int main (void) {

    int x_input, rotate_bits, result;
    x_input = 0x0A;
    rotate_bits = 4;
   
    result = rightrot(x_input, rotate_bits);
    printf("result: %s\n", i2b(result));


    return 0;
}


int rightrot(unsigned int x, unsigned int n) {
    unsigned int msb = ((~0u)>>1u)+1;
    printf("msb: %s\n", i2b(msb));
    for (int i = 0 ; i < n ; ++i) {
        printf("res: %d\n", x&1);
        if (x&1) {
            x = x>>1;
            x = x^msb;
        }
        else
        {
            x = x>>1;
        }
    }
  
    
    return x;

}