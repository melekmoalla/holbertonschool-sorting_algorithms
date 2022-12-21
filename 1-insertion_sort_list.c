#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - order using the Insertion sort algorithm
 * @list: listint_t
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	
	if (list == NULL || *list == NULL)
		return;
	temp = (*list)->next;

	while (temp != NULL)
	{
		while (temp->prev != NULL && temp->prev->n > temp->n)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (temp->prev == NULL)
			{
				(*list) = temp;
			}
			else
			{
				temp->prev->next = temp;
			}
			print_list(*list);
		}
		temp = temp->next;
	}
}
