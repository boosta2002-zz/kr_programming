/*
Author: Anthony Bustamante
Date: 08Nov19
Description:  Exercise 2-4 - Write an alternate version of squeeze(s1,s2) that 
deletes each character in s1 that matches any character in the string s2.
*/

#include <stdio.h>

char* squeeze(char s[], char m[]);


int main(void) {
    char line[] = "This sentence should be missing all vowels!";
    char vowels[] = "aeiou";
    printf("\n%s\n", squeeze(line, vowels));

    return 0;
}


char* squeeze(char s[], char m[]) {
    int i, j, k, setmatch;

    for (i = j = 0; s[i] != '\0' ; i++) {
        for ( setmatch = k = 0; m[k] != '\0'; k++) {
            if ( s[i] == m[k] ) {
                ++setmatch;
            }
        }
        if ( !setmatch) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';

    return s;

}
