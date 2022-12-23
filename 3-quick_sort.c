#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

void quickk_sort(int *arr, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 3; i++)
	{
		// Find the minimum element in the unsorted portion of the list
		int min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		// Swap the minimum element with the first element in the unsorted portion
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
		print_array(arr, size);
	}
}
void quick_sort(int *arr, size_t size)
{
	quickk_sort(arr, size);
}