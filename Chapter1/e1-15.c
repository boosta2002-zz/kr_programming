/*
Author: Anthony Bustamante
Date: 02Nov19
Description:  Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
*/
#include <stdio.h>

double f2c(double);
double c2f(double); 


/* print Fahrenheit-Celsius table

    for fahr = 0, 20, ..., 300 */

main()

{
    double fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;

    while (fahr <= upper) {

        printf("%.2fF\t%.2fC\n", fahr, f2c(fahr));

        fahr = fahr + step;

    }

}

double f2c(double fahr) {
    double c; 
    c = (fahr-32) * (5.0/9.0);
    return c; 
}