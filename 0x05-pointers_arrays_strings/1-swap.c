#include "main.h"

/**
 * swap_int - swap values of two intergers
 * @a: first value pointer
 * @b: second value pointer
 * Return: Always 0 (Success)
 */
voint swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
