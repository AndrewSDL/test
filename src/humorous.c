#include <string.h>

#include "humorous.h"

void stoogeSort(int inputArray[], int sortedArray[], int arraySize)
{
	memcpy(sortedArray, inputArray, arraySize * sizeof(int));
	
	stoogeSortRecursive(sortedArray, 0, arraySize - 1);
}

void stoogeSortRecursive(int sortedArray[], int lowerBound, int upperBound)
{
	int tmpSwap;

	// If the value at the end is smaller than the value at the start, swap them
	if(sortedArray[upperBound] < sortedArray[lowerBound])
	{
		tmpSwap = sortedArray[upperBound];
		sortedArray[upperBound] = sortedArray[lowerBound];
		sortedArray[lowerBound] = tmpSwap;
	}
	
	// If there are 3 or more elements in the current list subset
	if((upperBound - lowerBound) > 1)
	{
		int t = (upperBound - lowerBound + 1) / 3;
		// Stooge sort the lower 2/3, upper 2/3, and then the lower 2/3
		stoogeSortRecursive(sortedArray, lowerBound, upperBound - t);
		stoogeSortRecursive(sortedArray, lowerBound + t, upperBound);
		stoogeSortRecursive(sortedArray, lowerBound, upperBound - t);
	}
}