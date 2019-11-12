/*
Author: Anthony Bustamante
Date: 11Nov19
Description:  Exercise 3-4. In a two's complement number representation, our version of 
itoa does not handle the largest negative number, that is, the value of n equal  to
-(2^(wordsize-1)). Explain why not. Modify it to print that value correctly,
regardless of the machine on which it runs. 
*/

/*
Explanation:  itoa_original converts n to a positive number before performing the conversion,
but the magnitude of a positive number in a two's compliment system is always one less than
the magnitude of a negative number. Therefore, the expression (n = -n) does not have the 
intended affect of converting the largest negative number, because it does not exist in 
the positive space. 

Futhermore:
A method used for twos compliment negation is to find the farthest right binary 1 and invert
all the bits to the left of it. In twos compliment the largest number, -(2^(wordsize-1) is
a leading 1 followed by all zeros thefore nothing is changed and it returns itself. 


INT_MIN: -2147483648
INT_MAX:  2147483647

Solution: Check for sign, but then use unsigned int to do computations. 

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAXLINE 1000


void itoa_original(int n, char s[]);
void itoa_updated(int n, char s[]);


int main() {
	char s[MAXLINE];
	int n = INT_MIN;
	itoa_original(n, s); // Does not work for maximum negative number
	printf("%s\n", s);
	itoa_updated(n, s); // Works for maximum negative number
	printf("%s\n", s);
}


void itoa_original(int n, char s[]) {

	int i, sign;
	if ((sign = n) < 0) /* record sign */
		n = -n;			/* make n positrive */
	i = 0;
	do {		/* generate digits in reverse order */
		s[i++] = n % 10 + '0'; 	/* get next digit */
	} while ((n /= 10) > 0 ); 	/* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	strrev(s);
}


void itoa_updated(int n, char s[]) {

	int i, sign;
	unsigned int x;
	if ((sign = n) < 0)  /* record sign */
		x = (unsigned int) -n;			/* make n positrive */
	else
		x = (unsigned int) n;
	
	i = 0;
	do {		/* generate digits in reverse order */
		s[i++] = x % 10 + '0'; 	/* get next digit */
	} while ((x /= 10) > 0 ); 	/* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	strrev(s);
}

