#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
#include <assert.h>

size_t a;
int temp;

void swap(int *arr, int i, int j)
{
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

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
            if (arr[i] != temp)
                print_array(arr, a);
            i++;
        }
    }
    swap(arr, i, end);
    if (arr[i] != temp)
        print_array(arr, a);
    return i;
}

void sort(int *arr, int start, int end)
{

    if (start < end)
    {
        int pivot_index = partition(arr, start, end);
        sort(arr, start, pivot_index - 1);
        sort(arr, pivot_index + 1, end);
    }
}

void quick_sort(int *arr, size_t size)
{
    a = size;
    if (arr == NULL)
    {
        return;
    }
    sort(arr, 0, size - 1);
}