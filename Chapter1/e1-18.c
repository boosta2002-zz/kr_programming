/*
Author: Anthony Bustamante
Date: 02Nov19
Description:  Exercise 1-18 - Write a program to remove trailling blanks and tabs from each line of input, and to delete entirely blank lines. 

*/

#include <stdio.h>

#define MAXLINE 1000
#define MAXLEN 80

int myGetline(char line[], int maxline);
void copy(char to[], char from[]);
void checktail(char [], int len);

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;

	while ((len = myGetline(line, MAXLINE)) > 0)  {
		checktail(line, len);
		printf("%s",line);
	}
}

int myGetline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		//s[i] = c;
		//++i;
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

void checktail(char s[], int len) {
	int i;
	for (i = 1; s[len-i] == '32' || s[len-i] == '\t'; ++i)
	; 
	s[(len-i)+1] = '\n';
	s[(len-i)+2] = '\0';
	
 }