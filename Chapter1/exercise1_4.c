#include <stdio.h>


/* print Fahrenheit-Celsius table

    for fahr = 0, 20, ..., 300 */

main()

{

    double cels, fahr;

    int lower, upper, step;



    lower = 0;      /* lower limit of temperature table */

    upper = 300;    /* upper limit */

    step = 20;      /* step size */



    cels = lower;

    printf("Cels\tFahr\n");

    while (cels <= upper) {

        fahr = (cels * 1.8) + 32;

        printf("%.0f\t%.0f\n", cels, fahr);

        cels = cels + step;

    }

}