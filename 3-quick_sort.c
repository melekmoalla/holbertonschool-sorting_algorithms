#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
#include <assert.h>

void swap(int *arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int *arr, int start, int end, size_t size)
{
	int pivot = arr[end];
	int i = (start);
	int j;

	for (j = start; j < end; j++)
	{
		if (arr[j] < pivot)
		{
			if (i != j)
			{
				swap(arr, i, j);
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] != arr[end])
	{
		swap(arr, i, end);
		print_array(arr, size);
	}
	return (i);
}

void quickSort(int *arr, int start, int end, size_t size)
{
	int pi;
	if (start < end)
	{
		pi = partition(arr, start, end, size);
		quickSort(arr, start, pi - 1, size);
		quickSort(arr, pi + 1, end, size);
	}
}

void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}