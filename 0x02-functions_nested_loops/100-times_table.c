#include "main.h"

/**
 * print_digit - Print a two-digit number or a single digit with leading zeros
 *
 * @num: Integer, the number to be printed
 */
void print_digit(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar('0' + num);
	}
	else
	{
		_putchar('0' + (num / 10));
		_putchar('0' + (num % 10));
	}
}

/**
 * print_times_table - Print the times table up to a given number
 *
 * @n: Integer, the upper bound for the times table (0 to 15)
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			result = i * j;
			_putchar(',');
			_putchar(' ');
			print_digit(result);
		}

		_putchar('\n');
	}
}
