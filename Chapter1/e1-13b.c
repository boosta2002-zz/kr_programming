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
    int wlhist[20];

	for (i = 0; i < 20; ++i)
		wlhist[i] = 0;


    while ((c = getchar()) != EOF) {
		wl = 0;

        if (c == ' ' || c == '\n' || c == '\t')
		;
        else {
            while (c != ' ' && c != '\n' && c != '\t') { 
				++wl;
				c = getchar();
			}
        }
		++wlhist[wl];
    }

	// Get largest number in array
	int largest;
	largest = 0;
	for (i = 1 ; i < 20 ; ++i) {
		if ( wlhist[i] > largest ) {
			largest = wlhist [i];
		}
	}

	char marker = '|';

	for (; largest > 0 ; --largest) {
		printf("        ");
		for (int j = 1; j < 20 ; ++j) {
			if (wlhist[j] >= largest ) {
				printf("%3c", marker);
			}
			else {
				printf("   ");
			}
		}
		printf("\n");
	}
	printf("length: ");
	for ( i = 1; i < 20 ; ++i) {
		printf("%3d", i	);
	}



	

}