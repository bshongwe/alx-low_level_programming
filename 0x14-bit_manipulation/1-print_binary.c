#include "main.h"

/**
 * print_binary - func prints binary representation of n
 * @n: number to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
		}
		_putchar((n + 1) + '0');
	}
	else
		_putchar('0');
}