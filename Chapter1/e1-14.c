/*
Author: Anthony Bustamante
Date: 02Nov19
Description:  Write a program to print a histogram of lengths of words in its input. Vertical Histogram.
*/

#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
main()
{
    int wl, state, i, j, c;
    int chararray[26];

	for (i = 0; i < 26; ++i)
		chararray[i] = 0;


    while ((c = getchar()) != EOF) {
		//convert all valid character inputs to lowercase
		if (c >= 65 && c <= 90) {
			c = c+32;
		}
		++chararray[c-97];
	}

	printf("Frequency\n");
	for ( int x = 0 ; x < 26 ; ++x) {
		printf("%c: ", x+65 );
		for (; chararray[x] != 0 ; --chararray[x]) {
			printf("-");
		}
		printf("\n");
		//printf("%3d", chararray[x]);
	}
}