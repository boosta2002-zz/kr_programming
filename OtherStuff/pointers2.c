#include <stdio.h>

# define MAXDETAIL 10

int main(void) {
    
    char fname[] = "Anthony";
    char lname[] = "Bustamante";

    char *details[MAXDETAIL]; 

    details[0] = fname;
    details[1] = lname;
    
    for (int x = 0 ; x < 2 ; ++x) {
        printf("%s", details[x]);
    }


    return 0; 
}