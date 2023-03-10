#ifndef INV_TREE_H
#define INV_TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void quick_sort(int *arr, size_t size);
void quickSort(int *arr, int start, int end, size_t size);
void swap(int *arr, int i, int j);
void sort(int *arr, int start, int end);
#endif
