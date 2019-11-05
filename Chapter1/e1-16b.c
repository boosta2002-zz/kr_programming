/*
Author: Anthony Bustamante
Date: 02Nov19
Description:  Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines and as much as possible of the text.

*/

#include <stdio.h>

#define MAXLINE 1000

// function definitions
int myGetline(char line[], int maxline);
void copy(char to[], char from[]);
void store(int len, char to[100][100], char from[], int line_number);

char line_storage[100][100];

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	int line_number = 0;

	while ((len = myGetline(line, MAXLINE)) > 0)  {
		store(len, line_storage, line, line_number);
		++line_number;
	}

	for (int x = 0 ; x < line_number ; ++x ) {
		printf("Length: %i | Line: %s", (line_storage[x][0]) - 1, line_storage[x]+1);
	}

}

int myGetline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
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

void store(int len, char to[100][100], char from[], int line_number){
	int i; 
	i = 0; 
	to[line_number][i] = len;
	while ( (to[line_number][i+1] = from[i]) != '\0' ){
		++i;
	}
}