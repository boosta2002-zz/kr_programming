/*
Author: Anthony Bustamante
Date: 03Nov19
Description:  Exercise 1-20 - Write a program detab that replaces tabs in the input 
with the proper number of blanks to space to the next tab stop.  Assume a fxied set 
of tab stops, say every n columns. 
*/
#include <stdio.h>

// Constants
#define MAXLINE 1000
#define TABSTOP 4

// Prototypes
int detab(char s[], int lim);

// Globals



int main(void) {

    int len;
    char line[MAXLINE];

    while ((len = detab(line, MAXLINE)) > 0) {
	    printf("%s", line);
	}
}


int detab(char s[], int lim)
{
	int c, i, nexttab;
    nexttab = 0; 
    int tab_triggered = 0;


	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        if (c == '\t') {
            nexttab = TABSTOP-(i%TABSTOP);            
            while (nexttab != 0 ) {
                tab_triggered = 1;
                s[i] = ' ';
                ++i;
                --nexttab;
            }
        }
        else {
            s[i] = c;
        }
        
        if (tab_triggered == 1) {
            tab_triggered = 0;
            --i;
        }
    }

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

