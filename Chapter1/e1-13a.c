/*
Author: Anthony Bustamante
Date: 28Oct19
Description:  Write a program to print a histogram of lengths of words in its input. Horizontal Histogram.
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

	for (i = 1; i < 20; ++i) {
		printf("\nLength %d: ", i);

		for (j = 0; j < wlhist[i];++j) {
			printf("-");
		}
	}


		//printf(" %d", wlhist[i]);

}