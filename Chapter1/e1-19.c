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
void reverse(char [], int len);

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;

	while ((len = myGetline(line, MAXLINE)) > 0)  {
		reverse(line, len);
		printf("%s",line);
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
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}

void reverse(char s[], int len) {
	
	char temp[len]; 
	int end = len;
	int x = 0; 

	while (end != -1) {
		temp[x] = s[end-1];
		--end;
		++x;
	}
	//printf("WTF");
	copy(s,temp);

 }