/*
Author: Anthony Bustamante
Date: 09Nov19
Description:  Exercise 3-1 - Our binary search makes two tests inside the loop, 
when one would suffice (at the price of more tests outside). Write a version 
with only one test inside the loop and measure the difference in run-time. 

*/

#include <stdio.h>
#include <time.h>
#define MAXARR (100000ull)

int binsearch1(int x, unsigned long long int v[], int n);
int binsearch2(int x, unsigned long long int v[], int n);

int main (void) {

    unsigned long long int v[MAXARR];
    int x = 1; 
    int b1, b2;
    clock_t t; 

    while ( x <= (MAXARR - 1)) {

        v[x] = x+1;
        ++x;   
    }   

    x = 1; 
    int loop = 1000000;
    t = clock();
        for (int i = 0; i < loop; i++) { 
            b1 = binsearch1(x, v, MAXARR);
        }

    t = clock() - t; 
    double time_taken = ((double)t)/(double)CLOCKS_PER_SEC; // in seconds 
  
    printf("b1() took %f seconds to execute \n", time_taken); 


    t = clock(); 
    for (int i = 0; i < loop; i++) { 
        b2 = binsearch2(x, v, MAXARR);
    }
    t = clock() - t; 
    time_taken = ((double)t)/(double)CLOCKS_PER_SEC; // in seconds 
  
    printf("b2() took %f seconds to execute \n", time_taken); 



}


int binsearch1(int x, unsigned long long int v[], int n) {

    int low, high, mid;

    low = 0;
    high = n - 1; 
    while (low <= high) {
        mid = (low+high) /2; 
        if (x < v[mid]) 
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else    /* Found Match */
        {
            return mid;
        }
    }
    return -1; /* no match */
}

int binsearch2(int x, unsigned long long int v[], int n) {

    int low, high, mid;
    mid = 0;
    low = 0;
    high = n - 1; 
    while (low <= high && x != v[mid]) {
        mid = (low+high) /2; 
        if (x <= v[mid]) 
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (x == v[mid]) 
        return mid;
    else
        return -1;
}