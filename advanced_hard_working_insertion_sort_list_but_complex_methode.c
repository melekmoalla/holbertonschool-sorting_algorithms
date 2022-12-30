#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

void insertion_sort_list(listint_t **list)
{
	listint_t *a = (*list);
	listint_t *e = (*list);
	int flag = 0;

	if (list == NULL || *list == NULL)
		return;

	while (a->next != NULL)
	{
		if (a->next != NULL && a->n > a->next->n)
		{
			a->next->prev = a->prev;
			a->prev = a->next;
			a->next = a->next->next;
			if (a->next != NULL)
			{
				a->next->prev = a;
			}
			a->prev->next = a;
			if (a->prev->prev == NULL)
			{
				(*list) = a->prev;
			}
			else
			{
				a->prev->prev->next = a->prev;
			}
			print_list(*list);
			flag = 1;
		}
		if (a->prev != NULL)
		{
			e = a->prev;
		}
		while (e->prev != NULL && e->prev->n > e->n)
		{
			e->prev->next = e->next;
			if (e->next != NULL)
			{
				e->next->prev = e->prev;
			}
			e->next = e->prev;
			e->prev = e->prev->prev;
			e->next->prev = e;
			if (e->prev == NULL)
			{
				(*list) = e;
			}
			else
			{
				e->prev->next = e;
			}
			print_list(*list);
		}
		if (flag != 1)
		{
			a = a->next;
			flag = 0;
		}
	}
}

listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	return (0);
}