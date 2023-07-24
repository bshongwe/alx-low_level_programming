#include "main.h"

/**
 * put2 - prints a string
 * @str: pointer to the string to print
 * Return: void
 */
void put2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
