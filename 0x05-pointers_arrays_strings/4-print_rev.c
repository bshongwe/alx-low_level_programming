#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: character pointer
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');

	return;
}
