#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
#include <assert.h>

char a;

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    print_array(arr, a);
}

int partition(int *arr, int start, int end)
{
    int pivot = arr[end];
    int i = start;
    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr, i, j);
            i++;
        }
    }

    swap(arr, i, end);

    return i;
}

void quickk_sort(int *arr, int start, int end)
{
    if (start < end)
    {
        int pivot_index = partition(arr, start, end);
        quickk_sort(arr, start, pivot_index - 1);
        quickk_sort(arr, pivot_index + 1, end);
    }
}

void quick_sort(int *arr, size_t size)
{
    a = size;
    quickk_sort(arr, 0, size - 1);
}