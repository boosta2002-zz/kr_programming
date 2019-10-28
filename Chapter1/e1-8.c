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
            ++nl;
        }

        else if (c == ' ') {
            ++bl;
        }
        else if (c == '\t') {
            ++tl;
        }
    }

    printf("New Lines: %d\n", nl);
    printf("Blanks: %d\n", bl);
    printf("Tabs: %d\n", tl);


}