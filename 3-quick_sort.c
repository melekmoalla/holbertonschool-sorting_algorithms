#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

void quickk_sort(int *arr, size_t size)
{

	size_t i, j;
	int temp;
	for (i = 0; i < size - 2; i++)
	{
		int min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
		if (arr[i] != temp)
		{
			print_array(arr, size);
		}
	}
}
void quick_sort(int *arr, size_t size)
{
	if (arr == NULL)
		return;
	quickk_sort(arr, size);
}