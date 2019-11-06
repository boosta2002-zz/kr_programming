/*
Author: Anthony Bustamante
Date: 05Nov19
Description:  Exercise 2-2 - Write a loop equivalent to the for loop above without using && or ||.
*/
#include <stdio.h>

#define MAXLINE 1000

int myGetline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = myGetline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	
	if (max > 0)
		printf("%s", longest);
	
	return 0;
}

int myGetline(char s[], int lim)
{
	int c, i;

    for (i = 0; i < lim-1; ++i) { 
        if ((c=getchar()) == '\n') {
            break;
        }
        else if (c == EOF) {
            break;
        }
        else {
            s[i] = c;
        }
    }

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}





