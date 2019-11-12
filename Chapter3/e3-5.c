/*
Author: Anthony Bustamante
Date: 11Nov19
Description:  Exercise 3-5. Write the function itob(n,s,b) that converts the integer n
into a base b character representation in the string s. In particular,
itob(n,s,16) formats n as a hexadecimal integer in s.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAXLINE 1000

void itob(int n, char s[], int b);

int main() {
	char s[MAXLINE];
	int n = -INT_MAX;
	int b = 16;
	itob(n, s, b); 
	printf("%s\n", s);
}


void itob(int n, char s[], int b) {
	int i, sign;
	unsigned int x;
	if ((sign = n) < 0)  
		x = (unsigned int) -n;			 
	else
		x = (unsigned int) n;
	i = 0;
	do {		
		if ((x % b) >= 0 && (x % b) <= 9) 
			s[i++] = x % b + '0'; // convert int to character number equivalent 	
		else
			s[i++] = x % b + '7'; // convert numbers greater than 9 to a letter number equivalent ie. 10 = A, 11 = B, 12 = C...
	} while ((x /= b) > 0 ); 	
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	strrev(s);

}



