/*
Author: Anthony Bustamante
Date: 8Nov19
Description:  Some useful functions
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



// return 32 bit binary string of integer input
char *i2b(int x); 


char *i2b(int x) {
    // final array with bytes in big endian
    //char s[(sizeof(int)*8)+1];
    char *s = (char *) malloc(32);//(sizeof(int)*8)+1

    // zero out array
    for ( int i = 0 ; i < (sizeof(int)*8)+1; ++i) {
        s[i] = 0;
    }

    int i, j;
    i = j = 0;
    for (; i < sizeof(int)*8; ++i) {
        if ( x & 1) 
            s[i] = '1';
        else 
            s[i] = '0';
        x = x>>1;
    }
    s[i] = '\0';

    int hold;
    hold = 0;
    for (; j < ((sizeof(int)*8)/2); j++) {
        hold = s[j];
        s[j] = s[i-1];
        s[i-1] = hold;
        --i;
    }
        
    s[sizeof(int)*8] = '\0';

    return s;

}




