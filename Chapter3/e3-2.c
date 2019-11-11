/*
Author: Anthony Bustamante
Date: 10Nov19
Description:  Exercise 3-2 - Write a function escape(s,t) that converts charactgers like
newline and tab intro visible escape sewquences like \n and \t as it copies the string 
t to s. Use a switch statement. Write a function for the other direction as well, 
converting escape sequences into the real characters.
*/

#include <stdio.h>

#define MAXLINE 1000

int myGetline(char line[], int maxline);
void copy(char to[], char from[]);
void escape(char to[], char from[]);
void rescape(char to[], char from[]);

main()
{
	//char input[MAXLINE];
	//myGetline(input, MAXLINE);

	char input1[MAXLINE] = "This	is	a	test";
	char input2[MAXLINE] = "This\nis\na\ntest";
	char output1[MAXLINE];
	char output2[MAXLINE];
	

	escape(output1, input1);
	printf("%s\n", output1);

	rescape(output2, input2);
	printf("%s", output2);
		
	
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

void escape(char to[], char from[]){
	int i, offset;
	i = offset = 0;
	
	while ((to[i + offset] = from[i]) != '\0') {
		switch(from[i]) {
			case '\n':
				to[i + offset] = '\\';
				to[i + 1 + offset] = 'n';
				offset += 1;
				break;

			case '\t':
				to[i + offset] = '\\';
				to[i + 1 + offset] = 't';
				offset += 1;
				break;
			default:
				break;
		}
		++i;
	}
}

void rescape(char to[], char from[]){
	int i, offset;
	i = offset = 0;
	
	while ((to[i] = from[i + offset]) != '\0') {
		if (from[i + offset] == '\\') {
			switch (from[i + offset + 1]) {
				case 'n':
					to[i] = '\n';
					++offset;
					break;
				case 't':
					to[i] = '\t';
					++offset;
					break;
				default:
					break;

			}
		
		}
		++i;
	}
}

		

