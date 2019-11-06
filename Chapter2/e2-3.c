/*
Author: Anthony Bustamante
Date: 05Nov19
Description:  Exercise 2-3 - Write a function htoi(s), which converts
a string of hexadecmial digits (including an optional 0x or 0X) into its
equivalent integer value. The allowable digits are 0 through 9, a through f
and A through F
*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>

// function prototype
int htoi(char s[]) ; 


int main (void) {
    char s[100] = "0x6321ADF2";
    printf("The integer value of %s is %d", s, htoi(s));
 

    return 0;
}

int htoi(char s[]) {
    int i = 0;
    int prefix = 0;
    int ret = 0; 
    int len = 0;

    // if first two bytes are 0x or 0X move past them
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
        prefix = 1;
    }

    
    // Input validation and store length 
    while (s[i] != '\0') {
        if (isdigit(s[i]) || (toupper(s[i]) >= 'A' && toupper(s[i]) <= 'F')) {
           //Debug printf
           //printf("Entry: %c \n", s[i]);
            ++i;
        }
        else if (s[i] != '\0')
        {
            printf("Invalid Input");
            break;
        }
    }

    int pos;
    int offset;
    if (prefix) {
        pos = i - 2;
        offset = 2;
    }
    else {
        pos = i;
        offset = 0;
    } 

    i = 0;
    while (s[i+offset] != '\0' && (pos-- > 0)) {
        if (isdigit(s[i+offset])){
            ret+=(pow(16,pos)*(s[i+offset]-48));
        }
        else {
            ret+=(pow(16,pos)*(toupper(s[i+offset])-55));
        }
        ++i;
    }  

    return ret;
}