/*
Author: Anthony Bustamante
Date: 10Nov19
Description:  Exercise 3-3 - Write a function expand(s1,s2) that expands shorthand notation-
tions like a-z in the string s1 into the equivalent complete list abc...xyz in
s2. Allow for leters of either case and digits, and be prepared to handle cases
like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally. 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLINE 1000


int expand(char s1[], char s2[]);


int main() {
	char s1[MAXLINE] = "-1-37-9-";
	char s2[MAXLINE];
	expand(s1,s2);
	printf("%s\n", s2);

}


int expand(char s1[], char s2[]) {
	int current_letter, current_number, target_letter, target_number, i, j;
	i = 0; // position in s1
	j = 0; // position in s2
	target_letter = 0;
	target_number = 0;

	// read until end of line
	while (s1[i] != '\0') {

		// if alpha, then it's a letter range
		if (isalpha(s1[i])) {
			// Get letter after the dash (look forward two positions)
			target_letter = s1[i+2];
			// store each letter inclusive between current_letter and target_letter
			for (current_letter = s1[i]; current_letter <= target_letter; j++, ++current_letter) {
				s2[j] = current_letter;
			}
			// Skip to the next range in input
			i = i + 3;
		}
		// if digit, then it's a number range
		else if (isdigit(s1[i])) {
			// Get number after the dash (look forward two positions)
			target_number = s1[i+2];
			for (current_number = s1[i]; current_number <= target_number; j++, ++current_number) {
				s2[j] = current_number;
			}
			// Skip to the next range in input
			i = i + 3;
		}
		// There are three possible scenarios of a dash. At the begining, at the end, and a continuation as in a-b-c
		// note that the dash betwen a-b will never be detected because we skip over in the isalpha / isdigit phase.
		// This tests for the latter of the three exclusively. 
		else if (s1[i] == '-' && s1[i + 1] != '\0' && i != 0) {
			++i;
		}
		// Any other scenario of dash means it's a leading or trailing dash, so we add it litterally per the instructions.
		else
		{
			s2[j] = '-';
			++j;
			++i;
		}
	}
	
	// Close out the string with a null terminator. 
	s2[j] = '\0';
}


