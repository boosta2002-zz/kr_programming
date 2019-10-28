/*
Author: Anthony Bustamante
Date: 27Oct19
Description: Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
*/

#include <stdio.h>

main()

{

    int c;

    while ((c = getchar()) != EOF) {

        if ( c == ' ') {
            putchar(c);
            c = getchar();
            while (c == ' ') {
                c = getchar();
            }


        }

        putchar(c);
    
    }

}