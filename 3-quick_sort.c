#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
#include <assert.h>

/**
 * swap - fonction that do swap betwen to integer
 * @arr: The array to be printed
 * @i: int
 * @j: int
 */

void swap(int *arr, int i, int j)
{
	int temp = arr[i];

	arr[i] = arr[j];
	arr[j] = temp;
}

/**
 * partition - fonction that do the condition swap
 * @arr: The array to be printed
 * @start: Number of elements in @array
 * @end: int
 * @size: size of the array
 * Return: i
 */

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

/**
 * quickSort - fonction that do
 * @arr: The array to be printed
 * @start: the start of the array
 * @end: the end  of the array
 * @size: size of the array
 */

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


/**
 * quick_sort - function that sorts an array of integers
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
