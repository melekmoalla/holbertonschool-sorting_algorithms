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
	size_t i, j, a;
	int temp;

	for (i = 0; i < size - 2; i++)
	{
		a = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[a] > array[j])
			{
				a = j;
			}
		}
		if (i != a)
		{
			temp = array[a];
			array[a] = array[i];
			array[i] = temp;
		}
		print_array(array, size);
	}
}
