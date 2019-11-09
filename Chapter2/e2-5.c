/*
Author: Anthony Bustamante
Date: 08Nov19
Description:  Exercise 2-5 - Write the function any(s1,s2), 
which returns the first location in the string s1 where any 
character from the string s2 occurs, or -1 if s1 contains no 
characters from s2. (The standard library function strpbrk does 
the same job but returns a pointer to the location.)
*/
#include <stdio.h>

int any(char s[], char m[]);

int main (void) {

    
    char line[] = "p";
    char vowels[] = "tooooos";
    printf("\nMatch at pos: %d\n", any(line, vowels));
    
    return 0;
}

int any(char s[], char m[]) {
    int i, j, k, setmatch, loc;
    loc = -1;

    for (i = j = 0; s[i] != '\0' ; i++) {
        for ( setmatch = k = 0; m[k] != '\0'; k++) {
            if ( s[i] == m[k] && (loc = i + 1) && (++setmatch)) {
                break;
            }
        }
        if ( setmatch ) {
            break;
        }
    }
    return loc;
}
