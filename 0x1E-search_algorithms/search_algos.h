#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

/* Libraries */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Structs */

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for ALX Hoberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

/* Helpers */
int recursive_search(int *array, size_t size, int value);

#endif /* end of _SORTING_ALGOS_H_ file */
