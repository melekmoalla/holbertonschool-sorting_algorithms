#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
#include <assert.h>

size_t a;
int temp;

/**
 * swap - fonction that do swap betwen to integer
 * @arr: The array to be printed
 * @i: int
 * @j: int
 */

void swap(int *arr, int i, int j)
{
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

/**
 * partition - fonction that do the condition swap
 * @arr: The array to be printed
 * @start: Number of elements in @array
 * @end: int
 * Return: i
 */

int partition(int *arr, int start, int end)
{
	int pivot = arr[end];
	int i = start;
	int j;

	for (j = start; j < end; j++)
	{
		if (arr[j] < pivot)
		{
			swap(arr, i, j);
			print_array(arr, a);
			i++;
		}
	}
	swap(arr, i, end);
	if (arr[i] != temp)
		print_array(arr, a);
	return (i);
}

/**
 * sort - fonction that do
 * @arr: The array to be printed
 * @start: the start of the array
 * @end: the end  of the array
 */

void sort(int *arr, int start, int end)
{

	if (start < end)
	{
		int pivot_index = partition(arr, start, end);

		sort(arr, start, pivot_index - 1);
		sort(arr, pivot_index + 1, end);
	}
}

/**
 * quick_sort - function that sorts an array of integers
 * @arr: The array to be printed
 * @size: Number of elements in @array
 */

void quick_sort(int *arr, size_t size)
{
	a = size;

	sort(arr, 0, size - 1);
}
