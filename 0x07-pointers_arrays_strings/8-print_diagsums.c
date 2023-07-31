#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals
 * of square matrix of integers
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, b;

	sum1 = 0;

	for (b = 0; b < size; b ++)
	{
		sum1 += *(a + ((size * b) + b));
	}

	sum2 = 0;

	for (b = 1; b <= size; b++)
	{
		sum2 += *(a + ((size * b) - b));
	}
	printf("%d, %\n", sum1, sum2);
}
