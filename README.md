<p align="center">
<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcTLtL_ToHLEo_BWFxD-yf32Ux3zfsH_NPc8Qw&usqp=CAU" width="450" height="350">


# C - Sorting algorithms & Big O

# Resources

Read or watch:

* Sorting algorithm
* Big O notation
* Sorting algorithms animations
* 15 sorting algorithms in 6 minutes (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)

# Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# General
At least four different sorting algorithms
What is the Big O notation, and how to evaluate the time complexity of an algorithm
How to select the best sorting algorithm for a given input
What is a stable sorting algorithm

# Requirements

General

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

# More Info

Data Structure and Functions

* For this project you are given the following print_array, and print_list functions:
````
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
````
#
````
#include <stdio.h>
#include "sort.h"

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
````
* Our files print_array.c and print_list.c (containing the print_array and print_list functions) will be compiled with your functions during the correction.
* Please declare the prototype of the functions print_array and print_list in your sort.h header file
* Please use the following data structure for doubly linked list:
````
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
````

# More infotrmation

. You have to click on the title to better understand each method

0. [Bubble sort](https://www.youtube.com/watch?v=lyZQPjUT5B4&t=7s)
1. [Insertion sort](https://www.youtube.com/watch?v=ROalU379l3U)
2. [Selection sort](https://www.youtube.com/watch?v=ROalU379l3U)
3. [Quick sort](https://www.youtube.com/watch?v=ywWBy6J5gz8)


# Author

By Melek Moalla:<br>
https://github.com/melekmoalla