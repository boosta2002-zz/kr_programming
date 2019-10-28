#include <stdio.h>



/* copy input to output; 1st version */

main()

{

    int c;
    int runNumber;

    runNumber = 1;



    c = getchar();

    while (c != EOF) {

        putchar(c);

        c = getchar();
        
        printf("\nThis is run # %d\n", runNumber);
        printf("(c != EOF) is %d\n", (c != EOF) );
        runNumber++;

    }

    //printf("\nThis is run # %d\n", runNumber);
    //printf("(c != EOF) is %d\n", (c != EOF) );
}