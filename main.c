#include <stdio.h>
#include <stdlib.h>

//#include "sorting_algorithms.h"

int main(void)
{
    int inputArray[10], sortedArray[10];
    int i;

    printf("Input array is ");
    for(i = 0; i < 10; ++i)
    {
        inputArray[i] = rand() % 100;
        printf(" %d", inputArray[i]);
    }

    printf("\n");

    insertionSort(inputArray, sortedArray, 10);

    printf("Sorted array is ");
    for(i = 0; i < 10; ++i)
        printf(" %d", sortedArray[i]);

    printf("\n");

    return 0;
}
