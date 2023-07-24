#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * followed by new line
 * @a: array to be printed
 * @n: number of elements in array to print
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d, ", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
