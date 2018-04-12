/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "mergesort.h"

int main()
{
    printf("Program Starting\n");
    int testArray[11] = {9,8,7,6,5,4,3,2,1,0,5};
    size_t n = sizeof testArray / sizeof *testArray;
    printf("Size Of Array is %d\n", n);
    sort(testArray, n);
    
    int i = 0;
    for(i = 0; i < n; i++)
    {
        printf("%d",testArray[i]);
    }

    return 0;
}
