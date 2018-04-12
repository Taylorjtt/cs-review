/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "quicksort.h"

int main()
{
    printf("Quicksort test");
    int testArray[10] = {9,8,7,6,5,4,3,2,1,0};
    size_t n = sizeof testArray / sizeof *testArray;
    printf("Size Of Array is %d", n);
    sort(testArray, n);
    
    int i = 0;
    for(i = 0; i < n; i++)
    {
        printf("%d",testArray[i]);
    }

    return 0;
}
