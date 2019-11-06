/*
Author: Anthony Bustamante
Date: 04Nov19
Description:  Exercise 2-1 - Write a program to determine the ranges of 
char, short, int and long variables, both signed and unsigned, by printing 
appropriate values from standard headers and by direct computation. Harder 
if you compute them: determin the ranges of the various floating-point types.
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main () {
    printf("The values from <limits.h>\n");
    printf("The minimum value for unsigned char: %u\n", 0);
    printf("The maximum value for unsigned char: %u\n", UCHAR_MAX);
    printf("The minimum value for unsigned int: %u\n", 0);
    printf("The maximum value for unsigned int: %u\n", UINT_MAX);
    printf("The minimum value for unsigned short: %u\n", 0);
    printf("The maximum value for unsigned short: %u\n", USHRT_MAX);
    printf("The minimum value for unsigned long: %u\n", 0);
    printf("The maximum value for unsigned long: %u\n", ULONG_MAX);
    printf("The minimum value for signed char: %d\n", SCHAR_MIN);
    printf("The maximum value for signed char: %d\n", SCHAR_MAX);
    printf("The minimum value for signed int: %d\n", INT_MIN);
    printf("The maximum value for signed int: %d\n", INT_MAX);
    printf("The minimum value for signed short: %d\n", SHRT_MIN);
    printf("The maximum value for signed short: %d\n", SHRT_MAX);
    printf("The minimum value for signed long: %d\n", LONG_MIN);
    printf("The maximum value for signed long: %d\n", LONG_MAX);
    
    printf("\nThe values manually calculated\n");
    
    unsigned char uchar = ~(0^0);
    printf("The minimum value for unsigned char: %u\n", 0);
    printf("The maximum value for unsigned char: %u\n", uchar);
    
    unsigned int uint = ~(0^0);
    printf("The minimum value for unsigned int: %u\n", 0);
    printf("The maximum value for unsigned int: %u\n", uint);

    unsigned short ushrt = ~(0^0);
    printf("The minimum value for unsigned short: %u\n", 0);
    printf("The maximum value for unsigned short: %u\n", ushrt);

    unsigned long ulong = ~(0^0);
    printf("The minimum value for unsigned long: %u\n", 0);
    printf("The maximum value for unsigned long: %u\n", ulong);

    unsigned char set_char_msb = ~(0^0);
    set_char_msb = ~(set_char_msb>>1);
    signed char schar_min = set_char_msb;
    signed char schar_max = ~(set_char_msb);
  
    printf("The minimum value for signed char: %d\n", schar_min);
    printf("The maximum value for signed char: %d\n", schar_max);

    unsigned int set_int_msb = ~(0^0);
    set_int_msb = ~(set_int_msb>>1);
    signed int sint_min = set_int_msb;
    signed int sint_max = ~(set_int_msb);
  
    printf("The minimum value for signed int: %d\n", sint_min);
    printf("The maximum value for signed int: %d\n", sint_max);

    unsigned short set_short_msb = ~(0^0);
    set_short_msb = ~(set_short_msb>>1);
    signed short sshrt_min = set_short_msb;
    signed short sshrt_max = ~(set_short_msb);
  
    printf("The minimum value for signed short: %d\n", sshrt_min);
    printf("The maximum value for signed short: %d\n", sshrt_max);

    unsigned long set_long_msb = ~(0^0);
    set_long_msb = ~(set_long_msb>>1);
    signed long slong_min = set_long_msb;
    signed long slong_max = ~(set_long_msb);
  
    printf("The minimum value for signed long: %d\n", slong_min);
    printf("The maximum value for signed long: %d\n", slong_max);

    

    

}