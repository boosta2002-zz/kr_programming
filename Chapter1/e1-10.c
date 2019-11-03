/*
Author: Anthony Bustamante
Date: 27Oct19
Description:  Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

main()

{

    int c, nl, tl, bl;


    nl = 0;
    tl = 0; 
    bl = 0; 

    while ((c = getchar()) != EOF) {

        if (c == '\n') {
            printf("\\n");
        }
        else if (c == '\t') {
            printf("\\t");
        }
        else if (c == '\\') {
            printf("\\");
        }
        else {
            putchar(c);
            continue;
        }

    }

    printf("New Lines: %d\n", nl);
    printf("Blanks: %d\n", bl);
    printf("Tabs: %d\n", tl);


}