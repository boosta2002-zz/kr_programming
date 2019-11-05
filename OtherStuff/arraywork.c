#include <stdio.h>
#include <strings.h>

int main (void)
{
    // This is valid. The Array size is determined by input. Remember that the size will include null termination character.  
    char arr1[] = "Anthony";

    // This is valid, but array is larger than input, if array was smaller, this would be invalid. 
    char arr2[10] = "Anthony";
    
    //This is a compilation error because Anthony has 7 characters but there is no room for the implicit null termination character. 
    //char arr3[7] = "Anthony";
    
    // Instead of previous use this. Null termination is implicit with string literals. 
    char arr3[8] = "Anthony";

    // Null termination is not implicit
    char arr4[] = { 'A','n','t','h','o','n','y', '\0' } ;

    printf("Size of arr1 in bytes: %d\n", sizeof(arr1));
    printf("Size of arr2 in bytes: %d\n", sizeof(arr2));
    //printf("Size of arr1 in bytes: %d", sizeof(arr1));
    


}