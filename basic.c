#include <string.h>

void insertionSort(int inputArray[], int sortedArray[], int arraySize)
{
    int i, j, tmpSwap;

    memcpy(sortedArray, inputArray, arraySize * sizeof(int));

    for(i = 1; i < arraySize; ++i)
    {
        j = i;
        while(j > 0 && sortedArray[j-1] > sortedArray[j])
        {
            tmpSwap = sortedArray[j-1];
            sortedArray[j-1] = sortedArray[j];
            sortedArray[j] = tmpSwap;

            j = j - 1;
        }
    }
}

void selectionSort(int inputArray[], int sortedArray[], int arraySize)
{
    int i, j, minElem, tmpSwap;

    memcpy(sortedArray, inputArray, arraySize * sizeof(int));

    for(i = 0; i < arraySize; ++i)
    {
        minElem = i;

        for(j = i + 1; j < arraySize; ++j)
        {
            if(sortedArray[j] < sortedArray[minElem])
                minElem = j;
        }

        tmpSwap = sortedArray[minElem];
        sortedArray[minElem] = sortedArray[i];
        sortedArray[i] = tmpSwap;

    }
}
