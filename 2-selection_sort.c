#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * selection_sort -  ascending order using the Selection sort algorithm
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	int min, temp;
	size_t i, j;

	for (i = 0; i < size - 2; i++)
	{
		min = array[i];

		for (j = i; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				temp = j;
			}
		}
		array[temp] = array[i];
		array[i] = min;
		print_array(array, size);
	}
}
