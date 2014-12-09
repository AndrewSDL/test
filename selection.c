#include <string.h>
#include <stdbool.h>

#include "sorting_algorithms.h"

void bubbleSort(int inputArray[], int sortedArray[], int arraySize)
{
    int i, tmpSwap;
    bool swapped = false;

    // Bubble Sort is an in place sort, so we will only operate on the input array
    memcpy(sortedArray, inputArray, arraySize * sizeof(int));

    do
    {
        swapped = false;
        for(i = 1; i < arraySize; ++i)
        {
            if(sortedArray[i-1] > sortedArray[i])
            {
                tmpSwap = sortedArray[i-1];
                sortedArray[i-1] = sortedArray[i];
                sortedArray[i] = tmpSwap;
                swapped = true;
            }
        }
    } while(swapped);

}


